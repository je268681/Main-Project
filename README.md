# Main-Project
classDiagram
    class Match{
        -string homeTeam
        -string awayTeam
        -int homeGoals
        -int awayGoals
        -string status
        -string leagueName
        +Match()
        +Match(string home, string away, int hGoals, intaGoals, string stat, string league)
        +getHomeTeam() string
        +getAwayTeam() string
        +getHomeGoals() int
        +getAwayGoals() int
        +getStatus() string
        +getLeagueName() string
        +isFinished() bool
        +displayMatch() void
    }
     
     class Team{
        -string name
        -int matchesPlayed
        -int wins
        -int draws
        -int losses
        -int goalsFor
        -int goalsAgainst
        +Team()
        +Team(string teamName)
        +getName() string
        +getPoints() int
        +getGoalDifference() int
        +getMatchesPlayed() int
        +recordMatchResult(int scored, int conceded) void
        +displayStats() void
     }

     class League{
        -string name
        -vector~Match~ matches
        -vector~Team~ standings
        +League()
        +League(string leagueName)
        +getName() string
        +addMatch(Match m) void
        +updateStandings() void
        +sortStandingsByPoints() void
        +displayMatches() void
        +displayStandings() void
        +getMatches() vector~Match~

     }

     class UserFavorites {
        -vector~string~favoriteTeams
        -string primaryFavorite
        +UserFavorites()
        +addFavorite(string teamName) void
        +removeFavorite(string teamName) void
        +setPrimaryFavorite(string teamName) void
        +isFavorite(string teamName) bool
        +getPrimaryFavorite() string
        +filterFavoriteMatches(vector~Match~ allMatches) vector~Match~
    }

    class DataManager {
        -string fixturesFilePath
        +DataManager()
        +DataManager(string filePath)
        +loadMatchesFromFile(string filePath, vector~Match~& outMatches) bool
        +saveFavoritesToFile(string filePath, UserFavorites favs) bool
        +loadFavoritesFromFile(string filePath, UserFavorites& favs) bool
    }

    League "1" *-- "many" Match : contains
    League "1" *-- "many" Team : manages standings
    UserFavorites "1" o-- "many" Team : tracks names
    DataManager ..> League : populates data