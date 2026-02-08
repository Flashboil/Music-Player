//
// Created by user on 2/6/2026.
//

#include "Track.h"
#include <filesystem>

namespace fs = std::filesystem;
using namespace std;

//minimal constructor
Track::Track(const std::filesystem::path& path)
    : filePath(path)
{
    title = path.stem().string();   // filename without extension
    artist = "Unknown Artist";
    album = "Unknown Album";
    duration = "Unknown";
}

Track::Track(std::filesystem::path path, std::string t, std::string art, std::string alb, std::string dur) {
    filePath = path;
    title = t;
    artist = art;
    album = alb;
    duration = dur;
}

std::filesystem::path Track::getPath() const {
    return filePath;
}

std::string Track::getPathString() const {
    return filePath.string();
}

std::string Track::getTitle() const {
    return title;
}

std::string Track::getArtist() const {
    return artist;
}

std::string Track::getAlbum() const {
    return album;
}

std::string Track::getDuration() const {
    return duration;
}


