/* nw::eft particles on the native renderer: hand-written GLSL of the eft vertex programs
 * (render/effects.c, RPROG_EFT). See effects.c for the register interface and SHADERS.md for the
 * producers.
 *
 * Variant selection (the game binds one of 23 programs stored in the PTCL as command streams;
 * the native bind selects the hand-written variant with the bool register word `b`):
 *   b bits 0-2  EFT_* orientation, bit 3 particle rotation (c7), bit 4 instanced (8 particles per
 *   draw: register block of particle n at c(1 + 10 n), n = vertex v0.z / 10). */
#pragma once
#include <stdint.h>

enum { EFT_BILLBOARD = 0, EFT_YBILLBOARD = 1, EFT_POLY_XY = 2, EFT_POLY_XZ = 3, EFT_DIR_VIEW = 4, EFT_DIR_EMITTER = 5 };
#define EFT_ROT 8
#define EFT_INST 16

extern const char RENDER_VS_EFT[];

/* the variant of the PTCL program whose code words hash to `h` (effects_program_hash), -1 if
 * unknown: a hand-made table of the JackAll.ptcl programs (see effects.c) */
uint32_t effects_program_hash(const uint32_t *code, int words);
int effects_variant_of(uint32_t hash);
/* load time: the hash of program `index` (0..22, section order) of the PTCL shader section */
void effects_register_program(int index, uint32_t hash);
