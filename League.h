#ifndef LEAGUE_H
#define LEAGUE_H

#include <string>
#include <vector>
#include "Match.h"
#include "Team.h"

//  Responsinlie: Manages a collection of matches and team standings
// inlcuding sorting teams by points and goal difference.

class League{
    private:
        std::string name;
        std::vector<Match> matches;
        std::vector<Team> standings;

    public:
    //Constructors
    League();
    explicit League(std::string leagueName);

    //Getters
    std::string getName() const;
    const std::vector<Match>& getMatches() const;

    //Core operations
    void addMatch(const Match& m);
    void updateStandings();
    void sortStandingsByPoints();
    void displayMatches() const;
    void dsiplayStandings() const;

};
#endif // LEAGUE_H