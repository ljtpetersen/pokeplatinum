#ifndef GUARD_OPTIONS_H
#define GUARD_OPTIONS_H

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum ConvertMode : uint8_t {
    CONV_ENCODE = 0,
    CONV_DECODE,
    CONV_INVALID = 0xFF,
};

enum TextFormat : uint8_t {
    FMT_PLAIN_TEXT = 0,
    FMT_GAMEFREAK_GMM,
    FMT_JSON,
};

enum GameVersion : uint8_t {
    VERSION_US = 0,
    VERSION_EU,
};

struct Options {
    ConvertMode mode = CONV_INVALID;
    GameVersion version = VERSION_US;
    int key = 0;
    vector<string> posargs;
    string failReason;
    string charmap;
    bool printUsage = false;
    bool printVersion = false;
    string dumpBinary;
    string gmm_header = "";
    TextFormat textFormat = FMT_PLAIN_TEXT;
    Options(int argc, char ** argv);
};

#endif //GUARD_OPTIONS_H
