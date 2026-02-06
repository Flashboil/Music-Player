#include <iostream>
#include <filesystem>
#include "Scan.h"

namespace fs = std::filesystem;
using namespace std;

int main()
{
    Scan tr;
    tr.getTracks();

    return 0;
}
