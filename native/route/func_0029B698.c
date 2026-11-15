/* USA 0029B698 (EU 0029B674): TaskFileSelect::calc (vtable 006DAA14 +0x64). TaskFileSelect is
 * the title screen + file select task (loads Environment/TitleLogo.bch / TitleCamera.bch,
 * states table 006A4960..).
 * Route: runs every frame from the title screen until a file is chosen (state 0x68 0029CC88
 * then creates TaskMainGame).
 * Bugs: both inlined StateMgr::exec dispatches (the task's StateMgr at +0xBC, and the
 * sub-object at *(+0x138)+4) were printed by Ghidra as `(*(code *)*piVar4)()`: the first one
 * without its `this` (garbage r0 on every state handler call of the title screen). 00122C78 also
 * reads r2 (0 here unless an anim frame call ran before; then r2 is dead garbage on ARM too).
 * Verified instruction by instruction against EU 0029B674..0029B870 (input test 0x81B on
 * +0x4D0, the +0x4DC bit 1, s8 state +0xC0 <2 / ==2 branches, vldrne/vldreq 15.0f/1.0f into
 * *(+0xF4)+0x90, tail call 001E30D0(this)).  Confidence: high. */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "route.h"

extern uint32_t data_00712450[], data_007124F0[], data_00711F50[], data_0070B960[];
int func_00520B48(int obj);
void func_0025F9FC(int obj, int a);
void func_00661C18(char *sm, uint32_t newState);
int func_00587F74(int obj, int *name, int a);
void func_00122C78(int *obj, uint32_t a, uint32_t b);
int func_001E30D0(char *self);

extern uint32_t data_0070B800[];

/* ALBW_TITLE_TRACE=1: once a second, the title state (+0xC0), the 2D fade query 00520B48 and the
 * loading layout part's StateMgr bytes (*(data_0070B800 + 0x1848) +0xD/+0xE: 3/3 open and idle,
 * 0/0 closed; the screen fader holds black until it is closed, 0034B58C) - debug aid */
static void title_trace(char *self)
{
    static int on = -1, n;
    if (on < 0) on = getenv("ALBW_TITLE_TRACE") != NULL;
    if (!on || n++ % 60) return;
    char *mgr = GPTR_TO(char, data_0070B800[0]);
    char *part = mgr ? RP(mgr, 0x1848) : NULL;
    fprintf(stderr, "title: calc %d state %d fade %d loading-part %s %d/%d\n", n - 1,
            RF(self, 0xC0, int8_t), func_00520B48((int)data_00712450[0]),
            part ? "" : "(none)", part ? RF(part, 0xD, uint8_t) : -1, part ? RF(part, 0xE, uint8_t) : -1);
}

/* ALBW_X87_TRACE: report which step of the title / file select calc leaves x87 values pushed */
static int x87_depth_now(void) {
#if defined(__i386__)
    struct { uint16_t cw, p0, sw, p1, tw, p2; uint32_t rest[4]; } env;
    __asm__ volatile("fnstenv %0; fldenv %0" : "=m"(env));
    int n = 0;
    for (int i = 0; i < 8; i++) n += ((env.tw >> (2 * i)) & 3) != 3;
    return n;
#else
    return 0;
#endif
}
static long g_calc_no; /* TaskFileSelect calc count (ALBW_X87_TRACE / ALBW_X87_TRAP) */
static void x87_step(const char *what, int *last) {
    static int on = -1;
    if (on < 0) on = getenv("ALBW_X87_TRACE") != NULL;
    if (!on) return;
    int d = x87_depth_now();
    if (*last >= 0 && d != *last)
        fprintf(stderr, "x87: TaskFileSelect calc %ld: %s changed depth %d -> %d\n", g_calc_no, what, *last, d);
    *last = d;
}

void func_0029B698(char *self)
{
    int x87 = -1;
    g_calc_no++;
    x87_step("start", &x87);
    title_trace(self);
    if (func_00520B48((int)data_00712450[0]) == 0) {
        char *pad = GPTR_TO(char, data_007124F0[0]);
        if ((RF(pad, 0x4D0, uint32_t) & 0x81B) != 0 || (RF(pad, 0x4DC, uint32_t) & 2) != 0) {
            int8_t s = RF(self, 0xC0, int8_t);
            if (s < 2) {
                func_0025F9FC((int)RF(self, 0xEC, uint32_t), 1);
                func_00661C18(RAT(self, 0xBC), 2);
            } else if (s == 2) {
                route_safestr name = route_safestr_make("SE_S_START_FILE_SELECT");
                func_00587F74((int)data_00711F50[0], (int *)&name, 0);
                func_00661C18(RAT(self, 0xBC), 3);
            }
        }
    }
    x87_step("input/fade", &x87);
    char *o = RP(self, 0xEC);
    RVFN(void (*)(char *), o, 0x60)(o);
    x87_step("+0xEC vtbl+0x60", &x87);

    route_statemgr_exec(RAT(self, 0xBC));
    x87_step("state machine +0xBC", &x87);

    if (RF(self, 0xC0, int8_t) >= 1) {
        char *sub = RP(self, 0x138);
        uint8_t flag = RF(sub, 0xE8, uint8_t);
        RF(RP(self, 0xF4), 0x90, float) = flag != 0 ? 15.0f : 1.0f;
        func_00122C78((int *)RP(self, 0xF4), flag, 0);
        x87_step("00122C78", &x87);
        route_statemgr_exec(RAT(RP(self, 0x138), 4));
        x87_step("sub state machine *(+0x138)+4", &x87);
    }
    if (RF(RP(self, 0xEC), 0x194, uint8_t) != 0) {
        RF(RP(self, 0xF4), 0x94, uint8_t) = 0;
        RF(GPTR_TO(char, data_0070B960[0]), 0x2C1B, uint8_t) = 0;
    }
    {   /* ALBW_X87_TRAP=<calc>: SIGTRAP before that calc's 001E30D0 (debug aid: under gdb, set
         * breakpoints on the float-returning virtual functions for one frame only) */
        static long trap = -2;
        if (trap == -2) { const char *e = getenv("ALBW_X87_TRAP"); trap = e ? atol(e) : -1; }
        if (trap == g_calc_no) raise(SIGTRAP);
    }
    func_001E30D0(self);
    x87_step("001E30D0", &x87);
}
