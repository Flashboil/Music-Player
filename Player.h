#ifndef PLAYER_H
#define PLAYER_H

#include <list>
#include <vector>

#include "Track.h"

class Player {
public:
    Player(std::vector<Track> list, int index);

    void displayCurrentTrack();
    void doCommand();
    void playTrack(int index);
    void advanceIndex();
    void reduceIndex();
    void listSongs();

private:
    std::vector<Track> playList;
    int trackIndex;
};

#endif
