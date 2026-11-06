#ifndef MATCH_H
#define MATCH_H

#include <string>
 // Responsible: Represents an indvidual soccer match, storing scores,
 // team names, current status (FT, HT, Live), and league association 
 class Match {
    private: 
        std::string homeTeam;
        std::string awayTeam;
        int homeGoals;
        int awayGoals;
        std::string status; // (FT, HT, NS[not started])
        std::string leagueName; //" like Premire league"
 
    public:
    //Constructors
    Match();
    Match(std::string home, std::string away, int hGoals, int aGoals, std::string stat, std::string league);

    //Getters
    std::string getHomeTeam() const;
    std::string getAwayTeam() const;
    int getHomeGoals() const;
    int getAwayGoals() const;
    std::string getStatus() const;
    std::string getLeagueName() const;

    //Helper opertaions
    bool isFinished() const;
    void displayMatch() const;
};

#endif// MATCH_H