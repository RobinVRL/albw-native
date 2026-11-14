/* USA 002917A4 <- EU 002917CC: Player::onHit(pos, flag, power): `ldr r0,[r0,#0x14]` then falls
 * through into 002917AC (see there) with r1, r2, s0 unchanged. 39 static callers / 41 sites,
 * all enemies/hazards: `add r1, rEnemy, #0x3d0; mov r2, #0; bl 002917CC` (attacker position).
 *
 * What was wrong: Ghidra merged the fall-through but kept only param_1, passing the uninitialised
 * in_r1 / in_r2 / in_s0 to 0031EDC4 (pos pointer, flag and strength were garbage: a wild
 * pointer dereference in the knock-back direction computation).
 * NOTE: the converted callers declare `int func_002917A4(int)` and pass one argument; they get
 * the real arguments only once the signature table carries (int, float *, u8, float) (the ARM
 * live-in set r0 r1 r2 s0, livein2.json). Return class int (callers read r0 at 4 sites).
 * Verified against EU 002917CC-002917F4. Confidence: high. */
#include "gameplay.h"

int func_002917AC(void *ac, float *pos, uint8_t flag, float power);

int func_002917A4(uint32_t player_w, float *pos, uint8_t flag, float power) {
    void *player = (void *)gp_ptr(player_w);
    return func_002917AC(GPTR(player, 0x14, void), pos, flag, power);
}
