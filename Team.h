#ifndef TEAM_H
#define TEAM_H

#include <string>

// Responnsible: Tracks a team's league record (wins, draws, losses, goals)
// and calculayes total points and goal difference for league standings.
class Team {
    private:
        std::string name;
        int matchesPlayed;
        int wins;
        int draws;
        int losses;
        int goalsFor;
        int goalsAgainst;

    public:
        //Constructors
        Team();
        explicit Team(std::string teamName);
        
        //Getters And  Calculations
        std::string getName() const;
        int getPoints() const;         // Calculated (wins * 3) + draws
        int getGoalsDIfference() const;   // Calculated goalsFor - goalsAgainst
        int getMatchesPlayed() const;

        //Mutator
        void recordMatchResult(int scored, int conceded);

        // Display helper
        void displayStats() const;
};

#endif  // TEAM_H