#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <string>
#include <vector>
#include "Match.h"
#include "UserFavorites.h"

//Responsibile: handles reading match fixture data from localtext files
// into c++objects and saving user favorite team preferences 

class DataManager {
    private:
        std::string fixtureFilePath;

    public:
        DataManager();
        explicit DataManager(std::string filePath);

        //File operations
        bool loadMatchesFromFile(const std::string& filePath, std::vector<Match>& outMatches);
        bool saveFavoritesToFile(const std::string& filePath, const UserFavorites& favs);
        bool loadFavoritesFromFile(const std::string filePath, UserFavorites& favs);
};

#endif //DataManager_h 