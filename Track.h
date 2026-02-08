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
    // Minimal constructor (what your scanner needs)
    explicit Track(const std::filesystem::path& path);

    Track(std::filesystem::path path, std::string t, std::string art, std::string alb, std::string dur);
    std::filesystem::path getPath() const;
    std::string getPathString() const;
    std::string getTitle() const;
    std::string getArtist() const;
    std::string getAlbum() const;
    std::string getDuration() const;
};

#endif //MUSIC_PLAYER_TRACK_H