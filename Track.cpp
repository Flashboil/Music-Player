//
// Created by user on 2/6/2026.
//

#include "Track.h"
#include <filesystem>

namespace fs = std::filesystem;
using namespace std;

Track::Track(std::filesystem::path path, std::string t, std::string art, std::string, std::string alb, std::string dur) {
    filePath = path;
    title = t;
    artist = art;
    album = alb;
    duration = dur;
}

std::filesystem::path Track::getPath() {
    return filePath;
}

std::string Track::getPathString() {
    return filePath.string();
}
