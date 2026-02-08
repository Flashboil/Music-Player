//
// Created by user on 2/6/2026.
//

#include "Scan.h"
#include <filesystem>
#include "Track.h"

namespace fs = std::filesystem;
using namespace std;

 std::vector<Track> Scan::getTracks(const fs::path& musicFolder) {
    // Check first if the path passed exists and is a directory, return an error.
    if (fs::exists(musicFolder) && fs::is_directory(musicFolder)) {
        // Return a list of paths for each file found.
        std::vector<Track> files;
        for (const auto& entry : fs::directory_iterator(musicFolder)) {
            if (entry.is_regular_file() && entry.path().extension() == ".mp3") {
                files.emplace_back(entry.path()); // push one parameter that will be made into a track
            }
        }
        return files;
    }
    else {
        return {};
    }
}