#include <filesystem>
#include "Scan.h"
#include "Track.h"
#include <list>
#include <iostream>

namespace fs = std::filesystem;
using namespace std;

int main()
{
    fs::path musicFolder = R"(C:\dev\Music-Player\music)";

    Scan scan;
    std::list<Track> tracks = scan.getTracks(musicFolder);

    for (auto track : tracks) {
        cout << track.getPath() << endl;
    }

    return 0;
}
