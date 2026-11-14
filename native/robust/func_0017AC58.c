/* USA 0017AC58 <- EU 0017AC58: NPC actor constructor with a 9-state machine (cState_Wait /
 * Walk / Event / EventEnd / Hide / PlaySetup / PlayAnim / PlayBGM / EndBGM; vtable
 * data_006C9080, state PMF table data_0069EB60; registers SJIS-named sub-objects for the two
 * NPC kinds data_00693810 / data_00693814 via 004BE114).
 *   self = 0060E270(r0, params, 0, 0xFF, &spawnInfo{0,0,0, b0=0, b1=1});   (base ctor)
 *   vtables, clears [0x98C..0x9A0]; per-kind 004BE114 registration; state machine at +0x960
 *   (owner self, 9 states, enter/exec/exit PMF arrays, 9 x 0x24 name buffers);
 *   0060D3F8(self, self->[0x984], 0); per-kind 004C03B8(self, table); [0x8AC] |= 0x10;
 *   004BC8D8(self); return self;
 *
 * What was wrong: Ghidra believed 004BC8D8 never returns, so the converted function had no
 * `return self` (garbage pointer returned natively) and passed `extraout_r1` (r1 left by
 * 004C03B8) and two other leftovers as phantom arguments. 004BC8D8 returns (EU 004BC984) and
 * takes only self.
 * Verified against EU 0017AC58-0017B1B8 instruction by instruction; state table offsets
 * (enter, exec, exit) read from each load group, default exit {+0x10}, "null" PMF {+0xA8};
 * strings read from the code (0017B1E8...) and rodata (0069EC10 / 0069EC24, SJIS). PMF words
 * are copied as raw 8-byte entries (the original's vldr/vstr are bit copies). 0017AE2C and
 * 0017B154 are `nop`s in this build.
 * Confidence: high. */
#include "robust.h"
#include "sead.h"

void *func_0060E270(void *self, void *params, uint32_t a2, uint8_t a3, void *info);
void func_004BE114(void *self, int32_t kind, uint32_t a2, const sead_SafeString *name, void *table);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void *(*ctor)(void *), uint32_t size, uint32_t count);
void *func_0010BDF0(void *p);
int func_0010BEC4(void *names, uint32_t index, const sead_SafeString *name);
void func_0060D3F8(void *self, void *a1, uint8_t a2);
int func_00588BE4(void *self);
void func_004C03B8(void *self, void *table);
void func_004BC8D8(void *self);

extern char data_006C9080[];          /* vtable */
extern const char data_0069EB60[];    /* state PMF table */
extern char data_006F5988[];          /* sead::SafeString vtable */
extern int32_t data_00693810, data_00693814;
extern const char data_0069EC10[], data_0069EC24[];
extern char data_0070D920[], data_0070D95C[];
extern char data_00770B88[], data_00770BB0[];

char *func_0017AC58(void *r0, void *params) {
    struct { uint32_t w[3]; uint8_t b0, b1, pad[2]; } info = {{0, 0, 0}, 0, 1, {0, 0}};
    char *self = func_0060E270(r0, params, 0, 0xFF, &info);
    FLD(self, 0x98C, uint32_t) = 0;
    FLD(self, 0x320, char *) = data_006C9080 + 0xBC;
    FLD(self, 0x000, char *) = data_006C9080;
    FLD(self, 0x990, uint8_t) = 0;
    FLD(self, 0x994, uint32_t) = 0;
    FLD(self, 0x998, uint32_t) = 0;
    FLD(self, 0x99C, uint32_t) = 0;
    FLD(self, 0x9A0, uint8_t) = 0;
    if (func_00588BE4(self) == data_00693810) {
        sead_SafeString n = {data_006F5988, data_0069EC10};
        func_004BE114(self, 5, 0, &n, data_0070D920);
    }
    if (func_00588BE4(self) == data_00693814) {
        sead_SafeString n = {data_006F5988, data_0069EC24};
        func_004BE114(self, 3, 0, &n, data_0070D95C);
    }
    char *sm = AT(self, 0x960);
    const char *t = data_0069EB60;
    FLD(self, 0x974, char *) = self;
    FLD(sm, 6, uint8_t) = 9;
    char *enter = func_0010BA78(0x90);
    FLD(sm, 0x18, char *) = enter;
    FLD(sm, 0x1C, char *) = enter + FLD(sm, 6, uint8_t) * 8;
    int i;
    for (i = 0; i < 18; i++)              /* enter[9] + exec[9] = "null" PMF */
        memcpy(enter + i * 8, t + 0xA8, 8);
    uint8_t n = FLD(sm, 6, uint8_t);
    char *exitp = func_0010BA78((uint32_t)n * 8);
    FLD(sm, 0x20, char *) = exitp;
    for (i = 0; i < n; i++)
        memcpy(exitp + i * 8, t + 0x10, 8);
    {
        uint32_t *mem = func_0010CEE0(9 * 0x24 + 8, NULL, 4);
        void *arr = NULL;
        if (mem) {
            mem[0] = 0x24;
            mem[1] = 9;
            arr = func_00100118(mem + 2, func_0010BDF0, 0x24, 9);
        }
        if (arr) {
            FLD(sm, 0x08, uint32_t) = 9;
            FLD(sm, 0x0C, void *) = arr;
        }
    }
    FLD(self, 0x354, char *) = sm;
    FLD(self, 0x35A, uint16_t) = 9;
    static const struct { const char *name; uint16_t en, ex, xt; } st[9] = {
        {"cState_Wait", 0x00, 0x08, 0x10},
        {"cState_Walk", 0x18, 0x20, 0x10},
        {"cState_Event", 0x28, 0x30, 0x10},
        {"cState_EventEnd", 0x38, 0x40, 0x48},
        {"cState_Hide", 0x50, 0x58, 0x60},
        {"cState_PlaySetup", 0x68, 0x70, 0x10},
        {"cState_PlayAnim", 0x78, 0x80, 0x10},
        {"cState_PlayBGM", 0x88, 0x90, 0x10},
        {"cState_EndBGM", 0x98, 0xA0, 0x10},
    };
    for (i = 0; i < 9; i++) {
        sead_SafeString nm = {data_006F5988, st[i].name};
        func_0010BEC4(sm, (uint32_t)i, &nm);
        memcpy(FLD(self, 0x978, char *) + i * 8, t + st[i].en, 8);
        memcpy(FLD(self, 0x97C, char *) + i * 8, t + st[i].ex, 8);
        memcpy(FLD(self, 0x980, char *) + i * 8, t + st[i].xt, 8);
    }
    func_0060D3F8(self, FLD(self, 0x984, void *), 0);
    if (func_00588BE4(self) == data_00693810)
        func_004C03B8(self, data_00770B88);
    if (func_00588BE4(self) == data_00693814)
        func_004C03B8(self, data_00770BB0);
    FLD(self, 0x8AC, uint32_t) |= 0x10;
    func_004BC8D8(self);
    return self;
}
