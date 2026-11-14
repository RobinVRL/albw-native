/* SHBIN / DVLB shader binaries: CATALOGUE ONLY.  The PICA vertex/geometry shader bytecode is
 * never translated or executed; this only lists the programs (DVLE entries), their input
 * attribute and uniform names, and their output semantics, so native GLSL equivalents can be
 * written by hand. */
#pragma once
#include <stddef.h>
#include <stdint.h>

typedef struct {
    const char *name;     /* symbol name */
    uint16_t first, last; /* register range: 0x00-0x0F v, 0x10-0x6F c, 0x70-0x73 i, 0x78-0x87 b */
} DvleSymbol;

typedef struct {
    int type;                         /* 0 vertex, 1 geometry */
    uint32_t main_offset, end_offset; /* in instruction words */
    int symbol_count;
    DvleSymbol symbols[64];
    int output_count;
    struct { uint16_t type, reg, mask; } outputs[16];  /* type: 0 pos 1 normquat 2 colour
                                                           3 tc0 4 tc0w 5 tc1 6 tc2 8 view */
} DvleInfo;

typedef struct {
    int program_count;
    uint32_t code_words;
    DvleInfo programs[64];
} DvlbInfo;

int dvlb_parse(const uint8_t *buf, size_t n, DvlbInfo *out);  /* 0 = ok */
const char *dvle_output_name(int type);
