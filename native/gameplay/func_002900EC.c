/* USA 002900EC <- EU 00290114: player movement speed for the current action:
 *   s = (flag ? 0.0855f : 0.095f) * act->[0x24]          (act = player->[0x14], float at +0x24)
 *   h = *(u32 *)(player->[0x48]->[0x44]);                  (handle of a carried/ridden actor)
 *   if (h) {
 *     a = 0052FBA0(*data_00706E20 + 0x3DBBC, h);          (ActorMgr: actor by handle)
 *     static guard data_007260CC / data_007260D0 = &data_006F6314 (class id, 00100174 = guard)
 *     if (a && !a->vtbl[0x00](a, &data_007260D0)) a = 0;  (isKindOf)
 *     if (a) s = a->vtbl[0x60](a) * s;                     (that actor's speed factor, float)
 *   }
 *   return s;
 * Callers: 002D5ADC (`ldr r0,[r4,#0x2c]; mov r1, r5; bl 00290114`) and 0038C3F8 (player item
 * actions: Kandelaar/bell/fruit, vtable 006E6D5C), both on the per-frame movement path.
 *
 * What was wrong: Ghidra's signature float(int) dropped r1 (the flag selecting 0.0855 vs 0.095:
 * in_r1 uninitialised -> random speed constant). livein also lists s1, but s1 is written by
 * the conditional vldrne/vldreq pair on both paths (not a parameter).
 * Return class: the definition and 2 caller files are float, 2 caller files declare `int`
 * (x87 stack leak on i386 from those two; fix in the signature table). Kept float.
 * vtbl[0x60] is called as a float-returning virtual (ARM reads s0 after blx).
 * Verified against EU 00290114-002901DC instruction by instruction (vmul order: s16 = s1*s0,
 * then s16 = s0*s16). Confidence: high (logic), medium (the meaning of the fields). */
#include "gameplay.h"

extern uint32_t data_00706E20;
extern uint32_t data_007260CC;
extern uint32_t data_007260D0;
extern uint8_t data_006F6314[];
int func_0052FBA0(int mgr, uint32_t handle);
int func_00100174(uint32_t *guard);

float func_002900EC(uint32_t player_w, int flag) {
    void *player = (void *)gp_ptr(player_w);
    float k = flag != 0 ? 0.0855f : 0.095f;
    float s = k * FLD(GPTR(player, 0x14, void), 0x24, float);
    void *obj = GPTR(player, 0x48, void);
    uint32_t h = FLD(GPTR(obj, 0x44, void), 0, uint32_t);
    if (h == 0)
        return s;
    char *mgr = (char *)gp_ptr(data_00706E20);
    void *a = gp_ptr((uint32_t)func_0052FBA0((int)gp_u32(mgr + 0x3DBBC), h));
    if ((data_007260CC & 1) == 0 && func_00100174(&data_007260CC) != 0)
        data_007260D0 = gp_u32(data_006F6314);
    if (a != 0) {
        void *vt = GPTR(a, 0, void);
        int (*is_kind)(void *, uint32_t *) = (int (*)(void *, uint32_t *))gp_ptr(FLD(vt, 0x00, uint32_t));
        if (is_kind(a, &data_007260D0) == 0)
            a = 0;
    }
    if (a != 0) {
        void *vt = GPTR(a, 0, void);
        float (*speed)(void *) = (float (*)(void *))gp_ptr(FLD(vt, 0x60, uint32_t));
        float f = speed(a);
        s = f * s;
    }
    return s;
}
