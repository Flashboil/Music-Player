#ifndef PLAYER_H
#define PLAYER_H

#include <list>
#include <vector>

#include "Track.h"

class Player {
public:
    Player(std::vector<Track> list);

    void displayCurrentTrack() const;
    void doCommand();
    void playTrack(int index) const;
    void advanceIndex();
    void reduceIndex();
    void listSongs() const;

private:
    std::vector<Track> playList;
    int trackIndex;
};

#endif
