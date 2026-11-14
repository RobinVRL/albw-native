/* USA 00348558 (EU 00348534): player "interaction" check (called once per frame from the
 * player action update 00349214): scans the actors in contact (list at *(this+0x54)+0x394,
 * handles resolved by the actor manager 0052FBA0, RTTI-checked against data_006F5D5C), asks
 * each one its interaction kind (vt+0x4C) and validates it (00553720 + for kinds 1/4/5/0xB/
 * 0xC/0x14 a line-of-sight query 004A8030 from the actor's point 0.5 ahead), stores the result
 * in the interaction record *(this+0x2C)+0x20 (+0 kind, +4 target handle, +0x1C, ...), falls
 * back to kinds 7/8/9 (talk/grab/read checks; 8 needs the facing dot product > -0.8), and when
 * the A button flag (*(*(this+0x48)+0x14) bit 0) is set starts the matching player action
 * through 002D55D0(this, id) (0x6B, 0x6E-0x73, 0x76, 0x78-0x82, 0x91-0x95, 0xAA), with the
 * door / button / telephone / call sound effects. Returns 1 when an action was started; plays
 * "SE_S_NG" when the button found nothing (*(this+0x40)+4 != 1.0f).
 * Route: Link's first update (runs every frame of the player).
 * Bug: the converted Ghidra source did not compile (`-NAN` and a float* passed for the query
 * template): tripwire stub in the link.  Also restored: 00361A20 reads r2 (= this function's
 * 3rd argument, untouched on ARM), 004A8030's query copy from the template at sp+0x58.
 * Verified instruction by instruction against EU 00348534..00349104: the 28-entry jump table
 * (decoded from the code), the static guards 00726A60 / 00726950 (no release on ARM), the
 * kind dispatch `cmp #0xB; beq; bge` chain, the halfword template packing (0xFFFF | high half
 * of a dead register: padding), 004D80A4 + 00115C54 query points, the unsigned bit compare
 * `cmp r0, 0xBF4CCCCD; movhi` of the dot product (vmul + unfused vmla x2) and `bics`, the
 * `movgt/movle` request flag (NaN: neither executed on ARM, here 0), bit compare of 1.0f.
 * Confidence: high (flow), medium (role names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"

extern uint32_t data_00706E20[], data_006F5D5C[], data_00726A60[], data_00726A64[],
    data_00709DF8[], data_007A923C[], data_007A9260[], data_00709D28[], data_00726950[],
    data_00726954[], data_006F60A4[], data_00711F50[], data_006934C0[], data_006934C4[];
int func_00361A20(int p1, uint32_t p2, uint32_t p3);
uint32_t func_00553720(int self, int kind);
void *func_002D55D0(char *self, int32_t action);
int func_0052FBA0(int mgr, uint32_t handle);
int func_00362104(int p1, uint32_t p2);
int func_004A8030(int mgr, int *query, uint32_t a);
int func_0054A588(int obj);
int func_004EA104(int p1, int *p2, int p3);
void func_004EAF8C(int p1, int *p2, int p3);
int func_004EBA20(int p);
int func_00587F74(int obj, int *name, int a);
int func_00588BE4(void *self);
int func_005462EC(int p);
int func_001DCE44(int p1, int p2, int p3);
int32_t func_00100174(uint32_t *guard);
int func_00110D44(void *dst, const void *src, uint32_t n);
int func_00115C54(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);
int func_004D80A4(float *out, uint32_t angle, float radius);

#define F32(off) RF(sp, off, float)
#define U32(off) RF(sp, off, uint32_t)

static char *actor_of(uint32_t handle)
{
    return GPTR_TO(char, func_0052FBA0((int)GPTR_OF(GPTR_TO(char, data_00706E20[0]) + 0x3DBBC), handle));
}

/* static RTTI object guard + isDerived virtual (vt+0) */
static char *rtti_cast(char *a, uint32_t *guard, uint32_t *slot, uint32_t *type)
{
    if ((guard[0] & 1) == 0 && func_00100174(guard) != 0)
        slot[0] = GPTR_OF(type);
    if (a == 0)
        return 0;
    return RVFN(int (*)(char *, uint32_t *), a, 0)(a, slot) != 0 ? a : 0;
}

static void se(const char *name, int which)
{
    route_safestr s = route_safestr_make(name);
    int obj = (int)data_00711F50[0];
    if (which == 0) func_00587F74(obj, (int *)&s, 0);
    else if (which == 1) func_004EA104(obj, (int *)&s, 0);
    else func_004EAF8C(obj, (int *)&s, 0);
}

static int fill_full(void *pv, char *r4)
{
    char *p = pv;
    RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
    RF(p, 4, uint32_t) = RF(r4, 0x1C, uint32_t);
    RF(p, 8, uint32_t) = RF(r4, 0x10, uint32_t);
    RF(p, 0xC, uint32_t) = RF(r4, 0x14, uint32_t);
    RF(p, 0x10, uint32_t) = RF(r4, 0x18, uint32_t);
    RF(p, 0x14, uint8_t) = 1;
    return 1;
}

static int button_se(void *p, char *r4) /* 348C4C */
{
    func_004EBA20((int)data_00711F50[0]);
    se("SE_S_DECIDE_DO_BUTTON", 0);
    RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
    return 1;
}

static int dispatch(char *self, char *r4, uint8_t k)
{
    void *p;
    switch (k) {
    case 0:
        if (func_00553720((int)GPTR_OF(self), 4) && (p = func_002D55D0(self, 0x6B))) {
            RF(p, 0, uint32_t) = 0;
            RF(p, 0x14, uint8_t) = 0;
            return 1;
        }
        return -1;
    case 1: case 24:
        RF(self, 0x74, uint8_t) = 1;
        RF(self, 0x7C, uint32_t) = RF(r4, 4, uint32_t);
        RF(self, 0x78, uint32_t) = RF(r4, 8, uint32_t);
        return -1;
    case 2: {
        char *a = rtti_cast(actor_of(RF(r4, 4, uint32_t)), data_00726950, data_00726954, data_006F60A4);
        if (a && func_0054A588((int)GPTR_OF(a))) {
            if (!(p = func_002D55D0(self, 0x78)))
                return -1;
            se("SE_PL_OPEN_DOOR_NG_HOUSE", 1);
            RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
            return 1;
        }
        if (!(p = func_002D55D0(self, 0x78)))
            return -1;
        RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    }
    case 3: case 15: case 19:
        if (!(p = func_002D55D0(self, k == 3 ? 0x79 : k == 15 ? 0x73 : 0x76)))
            return -1;
        RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    case 4: case 5: case 6: case 20:
        if (!(p = func_002D55D0(self, k == 4 ? 0x6B : k == 5 ? 0x70 : k == 6 ? 0x72 : 0x6F)))
            return -1;
        return fill_full(p, r4);
    case 7:
        return func_002D55D0(self, 0x6E) ? 1 : -1;
    case 8:
        if (func_005462EC((int)RF(RP(self, 0x28), 0x5F8, uint32_t)))
            return func_001DCE44((int)RF(self, 0x28, uint32_t), 0, 0) ? 1 : -1;
        se("SE_S_NG", 0);
        if (func_00553720((int)GPTR_OF(self), 4) && (p = func_002D55D0(self, 0x6B))) {
            RF(p, 0, uint32_t) = 0;
            RF(p, 0x14, uint8_t) = 0;
            return 1;
        }
        return -1;
    case 9:
        return func_001DCE44((int)RF(self, 0x28, uint32_t), 0, 0) ? 1 : -1;
    case 11:
        if (!(p = func_002D55D0(self, 0x91)))
            return -1;
        se("SE_S_DECIDE_DO_BUTTON", 0);
        RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    case 12: case 13: case 14:
        if (!(p = func_002D55D0(self, k == 12 ? 0x92 : k == 13 ? 0x93 : 0x94)))
            return -1;
        return button_se(p, r4);
    case 16: {
        if (!(p = func_002D55D0(self, 0x95)))
            return -1;
        char *a = actor_of(RF(r4, 4, uint32_t));
        if (a && (func_00588BE4(a) == (int)data_006934C0[0] || func_00588BE4(a) == (int)data_006934C4[0])) {
            func_004EBA20((int)data_00711F50[0]);
            se("SE_S_TOUCH_TELEPHONE", 0);
        }
        RF(p, 0, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    }
    case 17: {
        char *a = rtti_cast(actor_of(RF(r4, 4, uint32_t)), data_00726A60, data_00726A64, data_006F5D5C);
        if (!a)
            return -1;
        uint32_t arg[6] = { 0, 0, 0, 0, 0, 0xFFFFFFFFu };
        if (RVFN(int (*)(char *, uint32_t *), a, 0x50)(a, arg) != 0)
            return -1;
        float f = RF(RP(self, 0x48), 0x24, float);
        func_002D55D0(self, f > 0.0f ? 1 : 0);
        return 1;
    }
    case 18: case 21: case 26:
        if (!(p = func_002D55D0(self, k == 18 ? 0x80 : 0x81)))
            return -1;
        RF(p, 8, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    case 22: case 23:
        if (!(p = func_002D55D0(self, k == 22 ? 0x82 : 0x81)))
            return -1;
        RF(p, 8, uint32_t) = RF(r4, 4, uint32_t);
        se(k == 22 ? "SE_PV_CALL" : "SE_PV_WAIT", 2);
        return 1;
    case 27:
        if (!(p = func_002D55D0(self, 0xAA)))
            return -1;
        RF(p, 4, uint32_t) = RF(r4, 4, uint32_t);
        return 1;
    default: /* 10, 25 and >= 0x1C */
        return -1;
    }
}

int func_00348558(char *self, uint32_t p2, uint32_t p3)
{
    _Alignas(8) char sp[0xC8];
    memset(sp, 0, sizeof sp);
    char *r4 = RP(self, 0x2C) + 0x20;
    if (func_00361A20((int)RF(self, 0x54, uint32_t), p2, p3) != 0) {
        RF(r4, 0x1C, uint32_t) = 0;
        char *lst = RP(self, 0x54) + 0x394;
        uint32_t *r5 = GPTR_TO(uint32_t, RF(lst, 8, uint32_t));
        uint32_t *r8 = r5 + RF(lst, 0, uint32_t);
        for (; r5 != r8; r5++) {
            char *ent = GPTR_TO(char, *r5);
            char *a = actor_of(RF(ent, 0, uint32_t));
            if (!a)
                continue;
            a = rtti_cast(a, data_00726A60, data_00726A64, data_006F5D5C);
            if (!a)
                continue;
            RF(r4, 0x1C, uint32_t) = RF(ent, 8, uint32_t);
            int kind = RVFN(int (*)(char *, char *), a, 0x4C)(a, r4 + 8);
            RF(r4, 0, uint8_t) = (uint8_t)kind;
            if (func_00553720((int)GPTR_OF(self), kind) == 0) {
                RF(r4, 0, uint8_t) = 0;
                continue;
            }
            uint8_t k = RF(r4, 0, uint8_t);
            int probe;
            if (k == 0xB)
                probe = RF(GPTR_TO(char, data_00709DF8[0]), 0x18, uint8_t) == 0x10;
            else
                probe = k == 1 || k == 4 || k == 5 || k == 0xC || k == 0x14;
            if (probe) {
                U32(0x98) = RF(self, 0x30, uint32_t);
                func_00115D70((float *)(sp + 0xB8), (float *)data_007A923C, 0.5f);
                memcpy(sp + 0x10, sp + 0xB8, 12);
                func_00115C54((float *)(sp + 0xB8), GPTR_TO(float, U32(0x98)), (float *)(sp + 0x10));
                memcpy(sp + 0x84, sp + 0xB8, 12);
                func_004D80A4((float *)(sp + 0xAC), RF(RP(self, 0x3C), 0, uint32_t), 0.5f);
                F32(0xB0) = 0.0f;
                func_00115C54((float *)(sp + 0xB8), (float *)(sp + 0x84), (float *)(sp + 0xAC));
                memcpy(sp + 0xA0, sp + 0xB8, 12);
                U32(0x58) = 0;
                U32(0x6C) = 0xFF;
                U32(0x5C) = 0;
                U32(0x60) = 0;
                U32(0x64) = 0;
                U32(0x68) = (GPTR_OF(r4) & 0xFFFF0000u) | 0xFFFF; /* u16 0xFFFF + padding */
                U32(0x70) = 0;
                U32(0x74) = 0;
                U32(0x78) = 0;
                F32(0x7C) = 0.0f;
                RF(sp, 0x80, uint8_t) = 0;
                RF(sp, 0x81, uint8_t) = 1;
                func_00110D44(sp + 0x1C, sp + 0x58, 0x2A);
                F32(0x48) = 0.0f;
                memcpy(sp + 0x4C, data_007A9260, 12);
                U32(0x3C) = GPTR_OF(sp + 0x84);
                U32(0x38) = GPTR_OF(sp + 0xA0);
                U32(0x30) = 0x38;
                if (func_004A8030((int)data_00709D28[0], (int *)(sp + 0x1C), 3) != 0) {
                    RF(r4, 0, uint8_t) = 0;
                    continue;
                }
            }
            /* 3487F4: accepted (also kinds outside the probe set, and 0xB without flag 0x10) */
            RF(r4, 4, uint32_t) = RF(a, 0x2CC, uint32_t);
            break;
        }
    }
    uint8_t k = RF(r4, 0, uint8_t);
    if (k == 0) {
        if (func_00553720((int)GPTR_OF(self), 7)) {
            RF(r4, 0, uint8_t) = 7;
        } else if (func_00553720((int)GPTR_OF(self), 8)) {
            int r5 = func_00362104((int)RF(self, 0x54, uint32_t), 0);
            func_004D80A4((float *)(sp + 0x18), RF(RP(self, 0x3C), 0, uint32_t), 1.0f);
            F32(0x1C) = 0.0f;
            const float *v = (const float *)(RP(RP(self, 0x28), 0x5F4) + 0x3B64);
            float d = v[0] * F32(0x18);
            d = d + v[1] * 0.0f;
            d = d + v[2] * F32(0x20);
            uint32_t db;
            memcpy(&db, &d, 4);
            uint32_t c = db > 0xBF4CCCCDu ? 1 : 0;
            c &= (uint32_t)r5;
            if (((uint32_t)r5 & ~c) == 0)
                RF(r4, 0, uint8_t) = 8;
        } else if (func_00553720((int)GPTR_OF(self), 9)) {
            RF(r4, 0, uint8_t) = 9;
        }
    } else if (k == 0x17) {
        if (func_00553720((int)GPTR_OF(self), 8))
            RF(r4, 0, uint8_t) = 8;
        else if (func_00553720((int)GPTR_OF(self), 9))
            RF(r4, 0, uint8_t) = 9;
    }
    if ((RF(RP(RP(self, 0x48), 0x14), 0, uint32_t) & 1) == 0)
        return 0;
    k = RF(r4, 0, uint8_t);
    if (k < 0x1C && dispatch(self, r4, k) == 1)
        return 1;
    if (RF(RP(self, 0x40), 4, uint32_t) != 0x3F800000u && RF(r4, 0, uint8_t) == 0)
        se("SE_S_NG", 0);
    return 0;
}
