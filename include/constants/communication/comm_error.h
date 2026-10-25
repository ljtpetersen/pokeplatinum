#ifndef POKEPLATINUM_CONSTANTS_COMM_ERROR_H
#define POKEPLATINUM_CONSTANTS_COMM_ERROR_H

#include "constants/platinum_version.h"

#define COMM_ERROR_NONE            0
#define COMM_ERROR_RESET_SAVEPOINT 1
#define COMM_ERROR_RESET_TITLE     2
#define COMM_ERROR_3               3
#define COMM_ERROR_4               4
#if POKEPLATINUM_VERSION == POKEPLATINUM_VERSION_FR
#define COMM_ERROR_5               5
#endif

#endif
