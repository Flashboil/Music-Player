//
// Created by user on 2/6/2026.
//

#ifndef MUSIC_PLAYER_SCAN_H
#define MUSIC_PLAYER_SCAN_H
#include <filesystem>
#include <list>
#include "Track.h"


class Scan {
    public:
        std::list<Track> getTracks(const std::filesystem::path& musicFolder);
};


#endif //MUSIC_PLAYER_SCAN_H