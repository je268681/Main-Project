#ifndef USERFAVORITES_H
#define USERFAVORITES_H
#include <string>
#include <vector>
#include "Match.h"

//Responsible: Manages user pinned favorite teams and provides filtering 
//to highlight or extract favorite matches from a full fixture list

class UserFavorites {
    private:
        std::vector<std::string> favoriteTeams;
        std::string primaryFavorite;

    public:
        UserFavorites();

        //Favorite Management
        void addFavorite(const std::string& teamName);
        void removeFavorite(const std::string& teamName);
        void setPrimaryFavorite(const std::string& teamName);
        bool isFavorite(const std::string& teamName) const;
        std::string getPrimaryFavorite() const;

        // Filtering
        std::vector<Match> filterFavoriteMatches(const std::vector<Match>& allMatches) const;

};
#endif // USERFAVORITES_H