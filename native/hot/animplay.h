/* Shared body of 004FABDC / 004FC07C (EnemyBase anim start), see those files. */
#ifndef ALBW_HOT_ANIMPLAY_H
#define ALBW_HOT_ANIMPLAY_H
#include "hot.h"

void func_002C11E8(char *self, uint32_t first, uint32_t v54, uint8_t v58);   /* native/robust */
int func_0016898C(uint32_t self, uint32_t req);

typedef void (*vplay_t)(void *self, uint32_t id, int32_t frames, uint32_t force);

/* start animation `id` with `frames` of blending (< 0: the class default self[0x655]);
 * through the override object self[0x81C] (its vt[0]) if any, else a 0x5C AnimReq on the
 * stack into the SkelAnim self[0x410]; then clear bit 0 of (u16)self[0x510][0x38],
 * self[0x82A] = 1, self[0x414] = 0. */
static void enemy_play_anim(char *self, uint32_t id, int32_t frames, uint32_t force)
{
    uint32_t ov = W(self, 0x81C);
    if (frames < 0)
        frames = FLD(self, 0x655, uint8_t);
    if (ov != 0) {
        GFN(vplay_t, W(P(W(P(ov), 0)), 0))(P(ov), id, frames, force);
    } else {
        uint32_t req[0x5C / 4];
        func_002C11E8((char *)req, id, (uint32_t)frames, 0);
        func_0016898C(W(self, 0x410), gp_u32(req));
    }
    char *r = P(W(self, 0x510));
    FLD(r, 0x38, uint16_t) = FLD(r, 0x38, uint16_t) & ~1u;
    FLD(self, 0x82A, uint8_t) = 1;
    W(self, 0x414) = 0;
}
#endif
