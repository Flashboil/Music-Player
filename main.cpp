#include <filesystem>
#include "Scan.h"
#include "Track.h"
#include "Player.h"

namespace fs = std::filesystem;
using namespace std;

int main()
{
    fs::path musicFolder = R"(C:\dev\Music-Player\music)";

    vector<Track> tracks = Scan::getTracks(musicFolder);
    Player player(tracks);

    while (true) {
        player.doCommand();
    }

    return 0;
}
