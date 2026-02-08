# Overview

This is a prototype of a command line music player. I made it to practice as I learn C++ syntax. In its current state, 
it can scan a specified music folder for mp3 files and store them. With the future addition of a library like TagLib it 
will also be able to extract metadata like artist and album, but right now it just uses placeholders.

To use the program, you input 1, 2, 3, or 4 to use the different commands like play and skip. The program will display 
the "current song" and return to the command menu.

[Software Demo Video](https://youtu.be/0pDf8zBKAc8)

# Development Environment

This program was developed in CLion, a C and C++ editor from JetBrains.com.

The program is written entirely in C++.
Filesystem library is used to work with directories and files.

# Useful Websites

- [cpppreference.com](https://en.cppreference.com/w/cpp/filesystem.html)
  - Documentation for filesystem library
- [Free Music Archive](https://freemusicarchive.org/home)
  - Creative Commons Music used to test the functionality of the file scan.

# Music Credit

- ["Invincible" by 1000 Hands, Attribution 4.0 International License](https://freemusicarchive.org/music/1000-handz/cc-by-free-to-use-dancehouse-instrumentals/invincible-2/)
- ["coskyda" by pat102, Attribution 4.0 International License](https://freemusicarchive.org/music/pat102/relaxing-music/coskyda/)
- ["miso soup" by coolkid, Attribution 4.0 International License](https://freemusicarchive.org/music/cool-kid/furtive/miso-soup/)

# AI Disclosure

I used ChatGPT as a learning tool throughout this project's development. I used it particularly to help understand the 
documentation for filesystem and how to use certain functions of the library. I also used it to help understand 
debugging messages. I tried for a very long time to use it to troubleshoot downloading a library, but in the end it 
proved unhelpful.

# Future Work

{Make a list of things that you need to fix, improve, and add in the future.}

- Music player functionality. Currently, the program only scans for mp3s and 
  extracts relevant metadata without actually playing the tracks found.
- Full implementation of TagLib library to get metadata for mp3s for better display.