#include "Tracklist.h"
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;
using namespace std;

void Tracklist::getTracks() {
    fs::path musicFolder = R"(C:\dev\Music-Player\music)";

    if (fs::exists(musicFolder) && fs::is_directory(musicFolder)) {
        cout << "Yes!";
    }
}