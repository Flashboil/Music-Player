//
// Created by user on 2/6/2026.
//

#include "Scan.h"
#include <filesystem>
#include <iostream>
#include <list>

namespace fs = std::filesystem;
using namespace std;

void Scan::getTracks() {
    fs::path musicFolder = R"(C:\dev\Music-Player\music)";

    if (fs::exists(musicFolder) && fs::is_directory(musicFolder)) {
        cout << "Yes!";
    }

    std::list<fs::path> files;

    for (const auto& entry : fs::directory_iterator(musicFolder)) {
        if (entry.is_regular_file()) {
            files.push_back(entry.path());
        }
    }

    for (const auto& file : files) {
        std::cout << file << '\n';
    }
}