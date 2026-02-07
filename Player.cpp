//
// Created by user on 2/7/2026.
//

#include "Player.h"
#include "Track.h"
#include <filesystem>
#include <iostream>
#include <vector>
#include <format>

namespace fs = std::filesystem;
using namespace std;

Player::Player(vector<Track> list, int index) {
    playList = list;
    trackIndex = index;
}

void Player::doCommand() {
    string command;
    cout << "Enter a command" << endl;
    cout << "1) Play\n2) Skip\n3) Previous\n4) Playlist" << endl;
    cin >> command;

    if (command == "1") {
        playTrack(trackIndex);
    }
    else if (command == "2") {
        advanceIndex();
        playTrack(trackIndex);
    }
    else if (command == "3") {
        reduceIndex();
        playTrack(trackIndex);
    }
    else if (command == "4") {

    }
    else {
        cout << "Invalid command." << endl;
    }
}

void Player::displayCurrentTrack() {
    cout << playList[trackIndex].getPathString() << endl;
}

void Player::playTrack(int index) {
    cout << "Now playing: ";
    cout << playList[index].getPathString() << endl;
}

void Player::advanceIndex() {
    int index = trackIndex;
    index += 1;
    if (index >= playList.size()) {
        trackIndex = 0;
    }
    else {
        trackIndex += 1;
    }
}

void Player::reduceIndex() {
    int index = trackIndex;
    index -= 1;
    if (index >= 0) {
        trackIndex = 0;
    }
    else {
        trackIndex -= 1;
    }
}

void Player::listSongs() {
    int counter = 1;
    cout << "Playlist:" << endl;
    for (auto& song : playList) {
        cout << std::format("{}) {}", counter, song.getPathString()) << endl;
        counter += 1;
    }
}