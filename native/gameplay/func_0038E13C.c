/* USA 0038E13C <- EU 0038E118: player wall-merge action, ENTER (vtable slot +0x10 of the wall-merge
 * action class, vptr data_006E6D78 written by the ctor 0038EFE8 / dtor 0038F074; slot +0x14 =
 * 0038EA34 calc, +0x18 = 0038E8C8 exit). Called as vt[+0x10](self, req) (e.g. EU 00290E20:
 * `ldr r0,[r4,#0x48]; ... add r1, sp, #8; blx`): r0 = the action object, r1 = the request record
 * built by the caller: s16 action id at +2, Vec3 wall point +8, Vec3 +0x14, actor handle +0x20,
 * damage source +0x24. ARM live-in: r0, r1 (livein2). Returns r0 as left by the last call
 * (the early exit returns the s16 id it compared); callers ignore it.
 *
 * Action object fields used: +0x28 player, +0x2C player state, +0x30 &position (Vec3),
 * +0x34 &velocity, +0x3C &yaw (s32 angle idx), +0x40 &u8, +0x4C model/anim set (frame ctrls at
 * +0x3C / +0x5C), +0x50 player work; own: +0x72 u8, +0x74 u16 state, +0x7C Vec3 wall normal
 * (direction), +0x88 Vec3, +0x94 actor handle, +0xA4..A6 u8 flags, +0xA8 {ptr, id} effect
 * handle, +0xB0 s32 timer, +0xB4 Vec3, +0xC0 Vec3 push.
 *
 *   id 0x67 (WallIn): SE_PL_WALL_IN; effect group 0xB off; player 001DC3C4(data_007A9260);
 *     velocity x,z = 0; copy the request vectors; ToImage{G,B,R} effect by player+0x4B0 (2,3,4);
 *     004A37EC(handle, dir, +0x88, 1.0); state 2, flags {1,0,1}; player+0x5B4 = dir,
 *     player+0x5C0 = handle; *(+0x40) = 0051D188(yaw ptr, yaw(dir), *yaw) or (state+0x161 == 1);
 *     00270300(*data_0070BB80, 1, -1).
 *   id 0x68 (WallOut): +0x72 = 1, two 0028D580 anim requests (0x85, or 0x83/0x84 by
 *     player+0x5AC), handle = player+0x5C0; then as 0x69/0x6A:
 *   id 0x68/0x69/0x6A: SE_PL_WALL_OUT; 0x69 (forced): PV/PL_WALL_OUT_FORCE; 0x6A (damage):
 *     001DD48C damage, PL/PV_DAMAGE + PL_WALL_OUT_FORCE; dir = normalize(player+0x5B4); yaw;
 *     +0xB4 = 0; push +0xC0 = dir * (0x6A ? 2.0 : 0.5); WallOut / WallOutGrass effect (+ sound,
 *     by the floor attribute ((player+0x5F4)+0x3BAC & 0x7E0) == 0x2E0); 004A37EC(handle, dir,
 *     pos, 1.0); player position 001DB854(player, pos + dir * 0.5, pos); player+0x5A8 = 1.0;
 *     +0xB0 = 0; camera flag / 002916E8; first exit sets player+0x6BA and flags {1,1,0};
 *     002706E0(*data_0070BB80, -1).
 *   other ids: nothing (after zeroing work+0x15C).
 *
 * What the round-2 conversion (ghidra_analyzed4) still gets wrong:
 *  - the exit position: the Vec3 dir*0.5 is built at sp+0 by 00115D70 and copied to sp+0x34;
 *    Ghidra reads its x through a separate variable `in_stack_ffffff90` (never the frame word,
 *    holds 6 or the SafeString vtable address depending on the path) -> the player is placed at
 *    x = pos.x + garbage on every wall exit (also the sum copied to sp+0xC for 001DB854);
 *  - the SafeString {vtable data_006F5988, name} of the 0x69 / 0x6A sounds is built at sp+0:
 *    Ghidra writes only the name word (local_6c); the vtable word at frame+0 is never stored
 *    before 004EAF8C / 004EA104 (garbage vtable pointer passed to the sound system);
 *  - ToImageR (player+0x4B0 == 4): 004A1B9C writes the handle to sp+0/sp+4; Ghidra stores
 *    +0xA8 = local_68 (frame+8, a stale `in_stack` value) instead of sp+0;
 *  - the effect handle +0xA8 is typed float: `fVar7 != 0.0` on a pointer's bits (a pointer below
 *    0x00800000 is a denormal: equal to 0 under DAZ; -0.0 = 0x80000000).
 * Here: every stack object is a real local, the handle is two words, constants as on ARM.
 * The nops in the EU code (e.g. 0038E31C..0038E330 `mov r0,#0; cmp r0,#0; bne`) are kept as
 * their effect: the state/flag writes are unconditional.
 *
 * Verified against EU 0038E118-0038E844 instruction by instruction (strings at 0038E4E0..0038E888
 * from the pc-relative adds). Confidence: high (flow and data), medium (field names). */
#include "gameplay.h"
#include "gp_math.h"
#pragma STDC FP_CONTRACT OFF

extern char data_00711F50[], data_006F5988[], data_0070A518[], data_007A9260[],
    data_0070BB80[], data_00708998[];
extern char s_SE_PL_WALL_IN_0038e4e0[], s_ToImageG_0038e4f8[], s_ToImageB_0038e504[],
    s_ToImageR_0038e510[], s_SE_PL_WALL_OUT_0038e520[], s_SE_PV_WALL_OUT_FORCE_0038e530[],
    s_SE_PL_WALL_OUT_FORCE_0038e548[], s_SE_PL_DAMAGE_0038e848[], s_SE_PV_DAMAGE_0038e858[],
    s__WallOut_0038e86f[], s_WallOutGrass_0038e878[], s_SE_PL_WALL_OUT_GRASS_0038e888[];

/* round-2 prototypes (build/decomp/ghidra_fallback/ghidra_analyzed4/003/func_0038E13C.c) */
int func_00110848(int param_1);
int func_00115C54(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);
int func_001DB854(int param_1, uint32_t *param_2, uint32_t *param_3);
int func_001DC3C4(int param_1, uint32_t param_2, int param_3);
int func_001DD48C(int param_1, int param_2, uint32_t param_3);
int func_00270300(int param_1, int param_2, int param_3);
int func_002706E0(int param_1, int param_2);
int func_0028C328(int param_1);
int func_0028C388(int param_1);
int func_0028C8EC(int param_1, uint32_t param_2, uint32_t param_3, int *param_4);
float func_0028D580(unsigned *param_1, int param_2, uint8_t param_3, uint8_t param_4, unsigned param_5);
int func_002916E8(void);
int func_002E3608(int param_1, uint8_t param_2, unsigned param_3);
int func_004A1B9C(int *param_1, int param_2, unsigned *param_3);
int func_004A37EC(int *param_1, float *param_2, uint32_t *param_3, float fparam_0);
int func_004EA104(int param_1, int *param_2, int param_3);
int func_004EAF8C(int param_1, int *param_2, int param_3);
int func_0051D188(int *param_1, int param_2, int param_3);
int func_0068C690(float *param_1);

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))

/* sead::SafeString on the stack: {vtable data_006F5988, const char *} */
static void play_se(int (*fn)(int, int *, int), const char *name) {
    uint32_t ss[2];
    ss[0] = gp_u32(data_006F5988);
    ss[1] = gp_u32(name);
    fn((int)W(data_00711F50, 0), (int *)ss, 0);
}

/* effect handle {ptr, id} at self+0xA8: release the old one if still owned, create `name` from
 * player+0x344 (or clear when there is none). Returns 0 when it cleared. */
static int set_effect(char *self, char *pl, char *name) {
    char *h = self + 0xA8;
    if (W(pl, 0x344) == 0) {
        W(h, 0) = 0;
        W(h, 4) = 0;
        return 0;
    }
    uint32_t o = W(h, 0);
    if (o != 0 && W(P(o), 0x1C) == W(h, 4))
        func_00110848((int)o);
    int tmp[2];
    func_004A1B9C(tmp, (int)W(pl, 0x344), (unsigned *)name);   /* [r6,#0x24] reload */
    FLD(h, 0, int) = tmp[0];
    FLD(h, 4, int) = tmp[1];
    return 1;
}

int func_0038E13C(uint32_t self_w, uint32_t req_w) {
    char *self = P(self_w), *req = P(req_w);
    FLD(P(W(self, 0x50)), 0x15C, float) = 0.0f;
    int32_t id = FLD(req, 2, int16_t);

    if (id == 0x67) {
        play_se(func_004EA104, s_SE_PL_WALL_IN_0038e4e0);
        func_002E3608((int)W(data_0070A518, 0), 0, 0xB);
        func_001DC3C4((int)W(self, 0x28), gp_u32(data_007A9260), 0);
        char *vel = P(W(self, 0x34));
        FLD(vel, 0, float) = 0.0f;
        FLD(vel, 8, float) = 0.0f;
        memcpy(self + 0x7C, req + 8, 12);
        memcpy(self + 0x88, req + 0x14, 12);
        W(self, 0x94) = W(req, 0x20);
        char *pl = P(W(self, 0x28));
        uint32_t k = W(pl, 0x4B0);
        if (k == 2)
            set_effect(self, pl, s_ToImageG_0038e4f8);
        else if (k == 3)
            set_effect(self, pl, s_ToImageB_0038e504);
        else if (k == 4)
            set_effect(self, pl, s_ToImageR_0038e510);
        func_004A37EC((int *)(self + 0xA8), (float *)(self + 0x7C), (uint32_t *)(self + 0x88), 1.0f);
        FLD(self, 0x74, uint16_t) = 2;
        FLD(self, 0xA4, uint8_t) = 1;
        FLD(self, 0xA5, uint8_t) = 0;
        FLD(self, 0xA6, uint8_t) = 1;
        int yaw = func_0068C690((float *)(self + 0x7C));
        memcpy(P(W(self, 0x28)) + 0x5B4, self + 0x7C, 12);
        W(P(W(self, 0x28)), 0x5C0) = W(self, 0x94);
        uint8_t c = FLD(P(W(self, 0x2C)), 0x161, uint8_t);
        if (c == 0) {
            int *yp = (int *)P(W(self, 0x3C));
            int r = func_0051D188(yp, yaw, *yp);
            FLD(P(W(self, 0x40)), 0, uint8_t) = (uint8_t)r;
        } else {
            FLD(P(W(self, 0x40)), 0, uint8_t) = (c == 1);
        }
        return func_00270300((int)W(data_0070BB80, 0), 1, -1);
    }

    if (id == 0x68) {
        FLD(self, 0x72, uint8_t) = 1;
        int anim = 0x85;
        if (FLD(P(W(P(W(self, 0x50)), 0x28)), 0x24, uint8_t) != 1)
            anim = FLD(P(W(self, 0x28)), 0x5AC, uint8_t) != 0 ? 0x83 : 0x84;
        char *m = P(W(self, 0x4C));
        func_0028D580((unsigned *)(m + 0x3C), anim, 1, 1, 6);
        func_0028D580((unsigned *)(m + 0x5C), anim, 1, 1, 6);
        W(self, 0x94) = W(P(W(self, 0x28)), 0x5C0);
    } else if (id != 0x69 && id != 0x6A) {
        return id;
    }

    /* 0x68 / 0x69 / 0x6A: leave the wall */
    play_se(func_004EA104, s_SE_PL_WALL_OUT_0038e520);
    if (FLD(req, 2, uint16_t) == 0x69) {
        func_0028C8EC((int)W(self, 0x4C), 1, 0, 0);
        play_se(func_004EAF8C, s_SE_PV_WALL_OUT_FORCE_0038e530);
        play_se(func_004EA104, s_SE_PL_WALL_OUT_FORCE_0038e548);
    }
    if (FLD(req, 2, uint16_t) == 0x6A) {
        func_0028C8EC((int)W(self, 0x4C), 1, 0, 0);
        func_001DD48C((int)W(self, 0x28), (int)W(req, 0x24), 1);
        func_0028C328((int)W(self, 0x4C));
        func_0028C388((int)W(self, 0x4C));
        play_se(func_004EA104, s_SE_PL_DAMAGE_0038e848);
        play_se(func_004EAF8C, s_SE_PV_DAMAGE_0038e858);
        play_se(func_004EA104, s_SE_PL_WALL_OUT_FORCE_0038e548);
    }
    {
        char *pl = P(W(self, 0x28));
        W(self, 0x7C) = W(pl, 0x5B4);
        W(self, 0x80) = W(pl, 0x5B8);
        W(self, 0x84) = W(pl, 0x5BC);
    }
    albw_vec3_normalize((float *)(self + 0x7C));
    W(P(W(self, 0x3C)), 0) = (uint32_t)func_0068C690((float *)(self + 0x7C));
    FLD(self, 0xB4, float) = 0.0f;
    FLD(self, 0xB8, float) = 0.0f;
    FLD(self, 0xBC, float) = 0.0f;
    float tmp[3];
    func_00115D70(tmp, (float *)(self + 0x7C), FLD(req, 2, uint16_t) == 0x6A ? 2.0f : 0.5f);
    memcpy(self + 0xC0, tmp, 12);

    {
        char *pl = P(W(self, 0x28));
        if ((FLD(P(W(pl, 0x5F4)), 0x3BAC, uint16_t) & 0x7E0) != 0x2E0) {
            set_effect(self, pl, s__WallOut_0038e86f + 1);
        } else {
            set_effect(self, pl, s_WallOutGrass_0038e878);
            play_se(func_004EA104, s_SE_PL_WALL_OUT_GRASS_0038e888);
        }
    }
    func_004A37EC((int *)(self + 0xA8), (float *)(self + 0x7C), (uint32_t *)P(W(self, 0x30)), 1.0f);

    float pos[3], half[3], sum[3], arg[3];             /* sp+0x28, sp+0x34, sp+0, sp+0xC */
    memcpy(pos, P(W(self, 0x30)), 12);
    func_00115D70(sum, (float *)(self + 0x7C), 0.5f);
    memcpy(half, sum, 12);
    func_00115C54(sum, pos, half);
    memcpy(arg, sum, 12);
    func_001DB854((int)W(self, 0x28), (uint32_t *)arg, (uint32_t *)pos);
    FLD(P(W(self, 0x28)), 0x5A8, float) = 1.0f;
    W(self, 0xB0) = 0;
    if (FLD(P(W(self, 0x2C)), 0x96, uint8_t) != 0) {
        char *cam = P(W(P(W(data_00708998, 0)), 0x18));
        W(cam, 0x188) &= ~1u;
        W(P(W(self, 0x2C)), 0x90) = 1;
    } else {
        func_002916E8();
    }
    char *pl = P(W(self, 0x28));
    if (FLD(pl, 0x6BA, uint8_t) == 0) {
        FLD(pl, 0x6BA, uint8_t) = 1;
        FLD(self, 0xA4, uint8_t) = 1;
        FLD(self, 0xA5, uint8_t) = 1;
        FLD(self, 0xA6, uint8_t) = 0;
    }
    return func_002706E0((int)W(data_0070BB80, 0), -1);
}
