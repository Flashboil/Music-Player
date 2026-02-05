#include <iostream>
#include <filesystem>
#include "Tracklist.h"

namespace fs = std::filesystem;
using namespace std;

int main()
{
    Tracklist tr;
    tr.getTracks();

    return 0;
}
