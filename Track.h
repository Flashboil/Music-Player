//
// Created by user on 2/6/2026.
//

#ifndef MUSIC_PLAYER_TRACK_H
#define MUSIC_PLAYER_TRACK_H
#include <filesystem>

class Track {
private:
    std::filesystem::path filePath;
    std::string title;
    std::string artist;
    std::string album;
    std::string duration;

public:
    Track(std::filesystem::path path, std::string t, std::string art, std::string, std::string alb, std::string dur);
    std::filesystem::path getPath();
};

#endif //MUSIC_PLAYER_TRACK_H