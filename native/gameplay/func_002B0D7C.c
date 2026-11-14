/* USA 002B0D7C <- EU 002B0D58: enemy damage reaction (cRT_* state machine built by the ctor
 * 002B2590), common "start knock-back" routine called by the reaction ENTER states
 * (cRT_AttackBack 3, Boyoyon 4, TornadoFreeze 6, BoomerangHookshotFreeze 7, SandRodFaint 8,
 * ShadowLinkFaint 9, DalianFaint 10, Zero/Small/-/Big/IceKnockBack 14/15/16/17/18,
 * DrinkPurple 29; 14 call sites, 12 functions).
 *   ARM: void f(Reaction *self r0, int id r1, u32 frames r2, int flag r3, float strength s0)
 *   self+0x34 = the enemy actor. Steps:
 *   1. sl ("restart the reaction animation") / r6 ("play the knock-back anim +0x15C") from
 *      self+0x113/0x110/0x111, id and actor+0x7FC (see the branch block below);
 *   2. 002AE780(self); f = actor->vt[0x68](actor, id, self+0xEC, &frames)   (float in s0;
 *      the virtual fills the knock-back direction at self+0xEC/+0xF8 and may change frames);
 *      speed = f * strength; frames==0 -> 1;
 *   3. self+0x3C = self+0xF8 * speed (Vec3 scale 00115D70): the knock-back VELOCITY;
 *      two frame timers {count +0x2C, t +0x28, 1/count +0x30} and {+0x14C, +0x148, +0x150};
 *   4. ids 5..9 / 10: no 002ABEC8 -> SE "SE_EN_DAMAGE_FAINT" (00150A84) and velocity x/z
 *      scaled by self+0x164; id 0x12 (ice) -> 004FD268; self+0x70 = data_007A9260 (Vec3 0);
 *      actor+0x7FC in {0,5} -> self+0x40 (velocity y) = 004F944C();
 *   5. per damage type self+0x110/0x111 an actor timer {0, n, 1/n} at actor+0x6B8..0x72C;
 *   6. animation restart / end-frame timers +0x134/+0x138 (min(self+0x158, frames)),
 *      +0x140/+0x144 (vcvt.u32 of the animation end frame 0058AC38), facing self+0x154 =
 *      atan2(-vx, -vz) unless speed == 0.
 *
 * What was wrong in the round-2 Ghidra/converted C (build/decomp/ghidra_fallback/ghidra_analyzed4
 * /002/func_002B0D7C.c): (1) the strength s0 is lost (`in_s0`, never passed by the converted
 * callers: Ghidra signature (int,int,uint,int)); (2) the virtual's float return is lost and the
 * converted code computes speed = in_s0 * in_s0; (3) the virtual is called WITHOUT its 4th
 * argument &frames (stack slot sp+0x2C = the pushed r2) and the frames copy is taken after the
 * call, so a frame count chosen by the enemy is ignored; (4) the SE name object passed to
 * 00150A84 (sp: {data_006F5988, "SE_EN_DAMAGE_FAINT"}) is never written (lost stack object):
 * the callee reads uninitialised stack; (5) the "speed == 0" test compares a register pair
 * built from CONCAT44 of unrelated values. Net effect natively: knock-back velocity, facing and
 * duration were garbage for every enemy hit.
 * Return: void on ARM (s0 at exit is scratch; checked all 14 call sites: none reads s0/r0).
 * The definition returns float (0.0f) because the round-2 converted callers declare
 * `extern float func_002B0D7C(...)` (i386 x87 return class must match).
 * SIGNATURE NOTE: correct only for callers that pass the 5th (float) argument: the knock-back
 * enters rewritten here (002AF4DC, 002AF59C, 002AD8A0, 002AE9F8, 002AEA54) do; the other 7
 * converted callers pass 4 arguments (strength = stack/xmm0 garbage, as `in_s0` is today)
 * until the signature table gives 002B0D7C (r0,r1,r2,r3,s0) (livein2 misses s0: it is saved by
 * `vpush {d0}` before `vmov.f32 s16, s0`).
 * 64-bit: the virtual receives &frames, a native stack address (fine if its definition takes a
 * pointer type; a uint32_t parameter would truncate it).
 * Verified against EU 002B0D58-002B1418 instruction by instruction. Confidence: high (flow),
 * medium (field names). */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern uint32_t data_007A9260[];   /* Vec3 (bss) copied to self+0x70 */
extern char data_006F5988[];       /* vtable of the SE name object */

void func_002AE780(int self);
int func_00115D70(float *out, float *v, float s);
uint32_t func_002ABEC8(int *actor, int p);
uint32_t func_00150A84(int *actor, int *name, int p3);
void func_004FD268(int actor);
float func_004F944C(void);
uint32_t func_004FC07C(int actor, int p2, uint32_t p3, int p4);
int func_0058AB74(int actor);
float func_0058AA40(int actor);
float func_0058AC38(int actor);
void func_002ADFE4(int self, int id, uint8_t p3, uint32_t p4, int p5);
float func_004FB2F0(int actor, float f);
int func_002AB2D8(uint16_t *p, int k);
int func_004904CC(float y, float x);
uint32_t func_004FABDC(int actor, uint32_t p2, uint32_t p3, int p4);

typedef float (*kb_dir_fn)(uint32_t actor, int id, uint32_t dst, uint32_t *frames);

static const char se_damage_faint[] = "SE_EN_DAMAGE_FAINT";

/* {count, t = 0, 1/count} timer as the ARM writes it (count 0 -> 0.0f) */
static void set_timer(char *self, int cnt_off, int t_off, int inv_off, uint32_t n) {
    FLD(self, cnt_off, uint32_t) = n;
    if (n == 0)
        FLD(self, inv_off, float) = 0.0f;
    else
        FLD(self, inv_off, float) = 1.0f / (float)n;
    FLD(self, t_off, uint32_t) = 0;
}

/* actor timer {0, n, step} at actor + off (str 0 at off, n at off+4, float at off+8) */
static void actor_timer(char *self, int off, int32_t n, uint32_t step_bits) {
    char *a = GPTR(self, 0x34, char);
    FLD(a, off + 4, int32_t) = n;
    FLD(a, off + 8, uint32_t) = step_bits;
    FLD(a, off, uint32_t) = 0;
}

static int act_w(char *self) { return (int)FLD(self, 0x34, uint32_t); }
static char *act(char *self) { return GPTR(self, 0x34, char); }

float func_002B0D7C(int self_w, int id, uint32_t frames, int flag, float strength) {
    char *self = (char *)gp_ptr((uint32_t)self_w);
    uint32_t r8 = (uint32_t)id - 5;
    float speed = strength;   /* s16 */
    int restart;              /* sl */
    int play_anim;            /* r6 */

    /* ---- 002B0D84..002B0DFC ---- */
    if (FLD(self, 0x113, uint8_t) != 0 &&
        (FLD(self, 0x110, uint8_t) == 1 || FLD(self, 0x111, uint8_t) == 1)) {
        flag = 0;
        goto L_db0;
    }
    if (flag != 0)
        goto L_df4;
L_db0:
    if (id == 3) {
        if (FLD(act(self), 0x7FC, uint8_t) != 2) {
            play_anim = 0;
            goto L_ddc;
        }
        goto L_de8;
    }
    if (id == 0x12) {
        play_anim = 0;
        restart = 0;
        goto L_e04;
    }
L_de8:
    if (r8 > 4) {
        play_anim = 1;
        goto L_ddc;
    }
L_df4:
    play_anim = 0;
    goto L_df8;
L_ddc:
    if (play_anim != 0) {
        restart = 1;
        goto L_e04;
    }
L_df8:
    restart = (id == 3);

L_e04:
    func_002AE780(self_w);
    {
        char *a = act(self);
        kb_dir_fn fn = (kb_dir_fn)gp_ptr(FLD(GPTR(a, 0, char), 0x68, uint32_t));
        float f = fn(gp_u32(a), id, gp_u32(self + 0xEC), &frames);
        speed = f * speed;
    }
    if (frames == 0)
        frames = 1;
    FLD(self, 0x38, uint16_t) |= 1;
    FLD(act(self), 0x5A0, uint32_t) &= ~1u;
    func_00115D70((float *)AT(self, 0x3C), (float *)AT(self, 0xF8), speed);
    set_timer(self, 0x2C, 0x28, 0x30, frames);
    set_timer(self, 0x14C, 0x148, 0x150, frames);

    if (r8 <= 4 || id == 10) {
        if (FLD(self, 0x113, uint8_t) != 0) {
            func_002ABEC8((int *)act(self), (int)gp_u32(self + 0xEC));
        } else {
            uint32_t name[2];
            name[0] = gp_u32(data_006F5988);
            name[1] = gp_u32(se_damage_faint);
            func_00150A84((int *)act(self), (int *)name, 0);
        }
        float k = FLD(self, 0x164, float);
        float vx = FLD(self, 0x3C, float), vz = FLD(self, 0x44, float);
        FLD(self, 0x3C, float) = vx * k;
        FLD(self, 0x44, float) = vz * k;
    } else if (FLD(self, 0x113, uint8_t) != 0) {
        func_002ABEC8((int *)act(self), (int)gp_u32(self + 0xEC));
    }
    /* ---- L_EE4 ---- */
    if (id == 0x12)
        func_004FD268(act_w(self));
    FLD(self, 0x70, uint32_t) = data_007A9260[0];
    FLD(self, 0x74, uint32_t) = data_007A9260[1];
    FLD(self, 0x78, uint32_t) = data_007A9260[2];
    FLD(self, 0x1EC, uint32_t) = 0;
    {
        uint8_t c = FLD(act(self), 0x7FC, uint8_t);
        if (c == 0 || c == 5)
            FLD(self, 0x40, float) = func_004F944C();
    }
    /* ---- L_FB0: per damage type actor timer ---- */
    FLD(act(self), 0x655, uint8_t) = FLD(self, 0x159, uint8_t);
    {
        int8_t t0 = FLD(self, 0x110, int8_t);
        int8_t t1 = 0;
        int done = 1;
        if (t0 != 1)
            t1 = FLD(self, 0x111, int8_t);
        if (t0 == 1 || t1 == 1)
            actor_timer(self, 0x6B8, 0x16, 0x3D3A2E8Cu);        /* 1/22 */
        else if (t0 == 2 || t1 == 3)
            actor_timer(self, 0x6C4, 0x32, 0x3CA3D70Au);        /* 0.02 */
        else if (t0 == 0xD)
            actor_timer(self, 0x6DC, 0x16, 0x3D3A2E8Cu);
        else if (t0 == 0xB)
            actor_timer(self, 0x6D0, 0x46, 0x3C6A0EA1u);        /* 1/70 */
        else if (t0 == 8)
            actor_timer(self, 0x6F4, 0x32, 0x3CA3D70Au);
        else if (t0 == 0xC)
            actor_timer(self, 0x6E8, 0x32, 0x3CA3D70Au);
        else if (t0 == 9)
            actor_timer(self, 0x700, 0x18, 0x3D2AAAABu);        /* 1/24 */
        else if (t1 == 2)
            actor_timer(self, 0x724, 0x2D, 0x3CB60B61u);        /* 1/45 */
        else
            done = 0;
        (void)done;
    }
    FLD(self, 0x140, uint32_t) = 0;
    FLD(self, 0x144, float) = 0.0f;
    FLD(self, 0x13C, uint32_t) = 0;
    if (flag == 0 && r8 <= 4) {     /* L_1174 */
        char *a = act(self);
        int8_t k = FLD(a, 0x77D, int8_t);
        if (k >= 0)
            func_004FC07C(act_w(self), k, 0xFFFFFFFFu, 1);
        FLD(act(self), 0x5A0, uint32_t) |= 0x800;
    }
    /* ---- L_11A8 ---- */
    int anim_id = func_0058AB74(act_w(self));
    float anim_f = func_0058AA40(act_w(self));     /* s17 */
    if (!restart)
        FLD(act(self), 0x5A0, uint32_t) |= 0x800;
    FLD(act(self), 0x82A, uint8_t) = 0;
    func_002ADFE4(self_w, id, FLD(self, 0x110, uint8_t),
                  (uint32_t)(int32_t)FLD(self, 0x111, int8_t), 0);
    FLD(act(self), 0x5A0, uint32_t) &= ~0x800u;
    func_004FB2F0(act_w(self), anim_f);            /* reads r0 only */
    if (r8 <= 4) {
        FLD(self, 0x38, uint16_t) &= (uint16_t)~0x20;
    } else if (FLD(self, 0x38, uint16_t) & 0x20) {
        uint32_t n = FLD(self, 0x158, uint8_t);
        if (n > frames) n = frames;
        if (n == 0) {
            FLD(self, 0x38, uint16_t) &= (uint16_t)~0x20;
        } else {
            set_timer(self, 0x134, 0x130, 0x138, n);
        }
    } else if (func_002AB2D8((uint16_t *)AT(self, 0x160), FLD(self, 0x110, int8_t)) != 0 &&
               FLD(self, 0x158, uint8_t) != 0) {
        uint32_t n = FLD(self, 0x158, uint8_t);
        if (n > frames) n = frames;
        set_timer(self, 0x134, 0x130, 0x138, n);
        FLD(self, 0x38, uint16_t) |= 0x20;
    }
    /* ---- L_12F8: facing ---- */
    if (VCMP_EQ(speed, 0.0f)) {
        FLD(self, 0x38, uint16_t) &= (uint16_t)~0x20;
    } else {
        float nx = -FLD(self, 0x3C, float), nz = -FLD(self, 0x44, float);
        FLD(self, 0x154, int32_t) = func_004904CC(nx, nz);
    }
    /* ---- L_131C ---- */
    if (restart) {
        int id2 = func_0058AB74(act_w(self));
        float f2 = func_0058AA40(act_w(self));
        if (!(FLD(act(self), 0x82A, uint8_t) == 0 && anim_id == id2 && VCMP_EQ(anim_f, f2))) {
            set_timer(self, 0x140, 0x13C, 0x144, gp_vcvt_u32(func_0058AC38(act_w(self))));
            if (FLD(act(self), 0x59C, uint32_t) & 0x40000000u)
                return 0.0f;
        }
    }
    if (play_anim && FLD(self, 0x15C, int32_t) >= 0) {
        func_004FABDC(act_w(self), FLD(self, 0x15C, uint32_t), 0xFFFFFFFFu, 0);
        set_timer(self, 0x140, 0x13C, 0x144, gp_vcvt_u32(func_0058AC38(act_w(self))));
    }
    return 0.0f;
}
