/* Forced include (tools/link.sh) of the asset readers linked into the game: string functions the
 * Windows loader (windows/loader.c) does not import, through SDL's equivalents. */
#pragma once
#include <string.h>
#include <SDL3/SDL_stdinc.h>
#define strcmp SDL_strcmp
#define memcmp SDL_memcmp
