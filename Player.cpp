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

Player::Player(const vector<Track> list) {
    playList = list;
    trackIndex = 0;
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
        listSongs();
    }
    else {
        cout << "Invalid command." << endl;
    }
}

void Player::displayCurrentTrack() const {
    cout << playList[trackIndex].getTitle() << endl;
}

void Player::playTrack(int index) const {
    cout << "Now playing: ";
    std::cout
        << std::left  << std::setw(30) << playList[trackIndex].getTitle()
        << std::left  << std::setw(25) << playList[trackIndex].getAlbum()
        << std::right << std::setw(8)  << playList[trackIndex].getDuration()
        << endl;
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
    if (index <= 0) {
        trackIndex = 0;
    }
    else {
        trackIndex -= 1;
    }
}

void Player::listSongs() const{
    int counter = 1;
    cout << "Playlist:" << endl;
    for (auto& song : playList) {
        cout
        << std::left  << std::setw(30) << song.getTitle()
        << std::left  << std::setw(25) << song.getAlbum()
        << std::right << std::setw(8)  << song.getDuration()
        << endl;
        cout << "  " << song.getArtist() << endl;
        counter += 1;
    }
}