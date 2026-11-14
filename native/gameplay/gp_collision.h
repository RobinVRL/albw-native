/* Exact native versions of collision functions whose real ARM arguments the converted callers
 * do not pass yet (native/gameplay/func_*.c). The func_<ADDR> definitions keep the prototypes the
 * round-2 converted callers use; these albw_* entry points take the full ARM argument list. */
#ifndef ALBW_GP_COLLISION_H
#define ALBW_GP_COLLISION_H
#include <stdint.h>

/* 004A7620: swept-shape query against every collider of the broad phase (large-object chain +
 * grid cells), layers 5..0 of `mask`. q = query record (see the file header). f0/f1: the
 * subdivision window in units of the query radius (callers: 2.0 / 4.0, one site 1.0 / 4.0).
 * Returns 1 when a collider callback reported a hit. */
int albw_collision_sweep(uint32_t mgr_w, uint32_t *q, uint32_t mask, float f0, float f1);

/* 004A9F98: the same restricted to the colliders of the query's area (q+0x10 area index, 0xFF =
 * area of the actor q+0xC) + the grid + the manager's per-layer lists at +0xC4; falls back to
 * albw_collision_sweep(mgr, q, mask, 2.0f, 4.0f) when there is no area. */
int albw_collision_sweep_area(uint32_t mgr_w, uint32_t *q, uint32_t mask, float f0, float f1);

#endif
