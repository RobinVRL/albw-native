/* Minimal PNG writer (RGBA8, stored deflate blocks) for test output and screenshots. */
#pragma once
#include <stdint.h>
int png_write_rgba(const char *path, const uint8_t *rgba, int w, int h);  /* 0 = ok */
