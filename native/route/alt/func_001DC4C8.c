/* USA 001DC4C8 (EU 001DC4C8): player ground/area probe after a move (player component, owner
 * fields +0x598 / +0x604 / +0x614 / +0x720): takes the current position (*(+0x604)+0x68..0x70),
 * asks every actor of the ActorMgr list that is of the type in static data_00726388 (RTTI check,
 * vtable slot 0) whether it holds that point raised by 0.1 (005373A0, results OR-ed); when one
 * does, sweeps a vertical segment from y+6 down to the point through the collision manager
 * (004A8030(*data_00709D28, query, 2), delegate {data_006F4704, this, data_006A3278[0..1]}) and
 * snaps y to the hit (+0x720, initialised to -9999); otherwise uses 003425C4's ground record.
 * Either way requests player action 0x3F/0x29 on area changes (0028F7B0) and finishes with
 * 001DE378(this, pos, a2).
 * Route: Link's per-frame movement/ground handling (actor-player phase); stub today.
 * Bug: the converted source did not compile (`NAN`); it also wrote the query block at the wrong
 * frame offsets (Ghidra's stack-variable split).
 * Verified instruction by instruction against EU 001DC4C8..001DC7C8: query block at sp+0x30
 * (+0x04 delegate, +0x10 u16 0xFFFF (upper half: dead garbage of r3 on ARM, 0 here), +0x14 -1,
 * +0x1C end = pos, +0x20 start = pos + 6.0 y, +0x24 0.0f, +0x28 u8 0, +0x29 u8 1), the
 * guard-acquire without release (as compiled), the area-id compare with 00581D60's value.
 * 64-bit note: the query stores host stack addresses into 4-byte words (needs a below-4-GiB
 * stack in the x86-64 low-4GB build, like 00431F44).  Confidence: high (flow), medium (names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"

extern uint32_t data_0070C8E0[], data_00706E20[], data_006930C4[], data_00726384[],
    data_00726388[], data_006F5D5C[], data_006A3278[], data_006F4704[], data_00709D28[];
int func_00581D60(int mgr);
int *func_005841A8(int mgr, uint32_t a, int *it);
int func_00100174(uint32_t *guard);
int func_00115C54(float *out, float *a, float *b);
int func_005373A0(int actor, float *pos);
int func_004A8030(int mgr, int *query, uint32_t a);
int func_00581D48(int mgr, float *pos);
int func_0028F7B0(int act, uint32_t id);
void func_001DE378(int self, uint32_t *pos, uint32_t a2);
int func_003425C4(int obj);

void func_001DC4C8(char *self, uint32_t a2)
{
    int area = func_00581D60((int)data_0070C8E0[0]);
    char *src = RP(self, 0x604);
    float pos[3];
    memcpy(pos, RAT(src, 0x68), sizeof pos);
    uint32_t hit = 0;
    int *it = func_005841A8((int)data_00706E20[0], data_006930C4[0],
                            GPTR_TO(int, RF(GPTR_TO(char, data_00706E20[0]), 0x3DBC0, uint32_t)));
    if (RF(GPTR_TO(char, data_00706E20[0]), 0x3DBC8, uint32_t) != GPTR_OF(it)) {
        do {
            char *a = GPTR_TO(char, (uint32_t)it[0]);
            if (!(data_00726384[0] & 1) && func_00100174(data_00726384))
                data_00726388[0] = GPTR_OF(data_006F5D5C);
            if (a != 0 && RVFN(int (*)(char *, uint32_t *), a, 0)(a, data_00726388) == 0)
                a = 0;
            if (a != 0) {
                float up[3] = { 0.0f, 0.1f, 0.0f };
                float t[3], q[3];
                func_00115C54(t, pos, up);
                memcpy(q, t, sizeof q);
                hit |= (uint32_t)func_005373A0((int)GPTR_OF(a), q);
            }
            it = func_005841A8((int)data_00706E20[0], data_006930C4[0], it + 1);
        } while (RF(GPTR_TO(char, data_00706E20[0]), 0x3DBC8, uint32_t) != GPTR_OF(it));
        if (hit != 0) {
            RF(self, 0x720, float) = -9999.0f;
            uint32_t dlg[4] = { GPTR_OF(data_006F4704), GPTR_OF(self), data_006A3278[0], data_006A3278[1] };
            float start[3], end[3];
            memcpy(start, pos, sizeof start);
            memcpy(end, pos, sizeof end);
            start[1] = start[1] + 6.0f;
            uint32_t query[11];
            memset(query, 0, sizeof query);
            query[0] = 0;
            query[1] = GPTR_OF(dlg);
            query[2] = 0;
            query[3] = 0;
            query[4] = 0x0000FFFFu;
            query[5] = 0xFFFFFFFFu;
            query[6] = 0;
            query[7] = GPTR_OF(end);
            query[8] = GPTR_OF(start);
            RF(query, 0x24, float) = 0.0f;
            RF(query, 0x28, uint8_t) = 0;
            RF(query, 0x29, uint8_t) = 1;
            if (func_004A8030((int)data_00709D28[0], (int *)query, 2) != 0) {
                RF(pos, 4, uint32_t) = RF(self, 0x720, uint32_t);
                if (RF(self, 0x598, uint8_t) == 0 &&
                    func_00581D48((int)data_0070C8E0[0], pos) != area)
                    func_0028F7B0((int)RF(self, 0x614, uint32_t), 0x29);
                func_001DE378((int)GPTR_OF(self), (uint32_t *)pos, a2);
                return;
            }
        }
    }
    char *g = GPTR_TO(char, (uint32_t)func_003425C4((int)RF(self, 0x604, uint32_t)));
    if (RF(g, 0x24, uint8_t) != 0)
        func_0028F7B0((int)RF(self, 0x614, uint32_t), 0x3F);
    if (RF(self, 0x598, uint8_t) == 0 && func_00581D48((int)data_0070C8E0[0], (float *)g) != area)
        func_0028F7B0((int)RF(self, 0x614, uint32_t), 0x29);
    func_001DE378((int)GPTR_OF(self), (uint32_t *)g, a2);
}
