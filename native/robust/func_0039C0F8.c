/* USA 0039C0F8 <- EU 0039C0D4: actor constructor (6-state actor: cState_Wait / Walk / Event /
 * EventEnd / Hide / Main; vtable data_006E7B94, state PMF table data_006A05C4).
 *   self = 00631A20(r0, params, 0, 0xFF, &spawnInfo{0,0,0, b0=0, b1=1});   (base ctor)
 *   self->vtbl = 006E7B94; self->[0x320] = 006E7B94 + 0xBC;      (secondary vtable)
 *   if (00588BF0(self, 0)) { self->[0x2D7] = 1; return self; }
 *   0039BFEC(self);  state machine at self+0x960 (owner self, 6 states, enter/exec/exit PMF
 *   arrays, name table of 6 x 0x24 SafeString buffers), state names registered with 0010BEC4,
 *   00630BA8(self, self->[0x984], 0); three 00588BE4 type checks -> 004C03B8(self, table);
 *   self->[0x8AC] |= 0x20; 004BC8D8(self); return self;
 *
 * What was wrong: Ghidra believed 004BC8D8 never returns (`WARNING: Subroutine does not
 * return`), so the converted function ended with that call and no `return self` (natively the
 * caller got garbage) and it passed r1 (`extraout_r1`, left by 004C03B8) as a phantom argument.
 * 004BC8D8 returns normally (EU 004BC984 `pop {r4,r5,pc}`), takes only `self`.
 * Verified against EU 0039C0D4-0039C4F4 instruction by instruction (PMF words copied as raw
 * 8-byte entries; the vldr/vstr pairs in the original are bit copies, done with memcpy here so
 * no float conversion can touch them; 0039C228 is a `nop` in this build).
 * Confidence: high. */
#include "robust.h"
#include "sead.h"

void *func_00631A20(void *self, void *params, uint32_t a2, uint8_t a3, void *info);
int func_00588BF0(void *self, int32_t a1);
void func_0039BFEC(void *self);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void *(*ctor)(void *), uint32_t size, uint32_t count);
void *func_0010BDF0(void *p);
int func_0010BEC4(void *names, uint32_t index, const sead_SafeString *name);
void func_00630BA8(void *self, void *a1, uint8_t a2);
int func_00588BE4(void *self);
void func_004C03B8(void *self, void *table);
void func_004BC8D8(void *self);

extern char data_006E7B94[];          /* vtable */
extern const char data_006A05C4[];    /* state PMF table */
extern char data_006F5988[];          /* sead::SafeString vtable */
extern int32_t data_00693818, data_0069381C, data_00693820;
extern char data_007809D8[], data_00780A00[], data_00780A28[];

static void name_state(char *sm, uint32_t i, const char *s) {
    sead_SafeString n = {data_006F5988, s};
    func_0010BEC4(sm, i, &n);
}

char *func_0039C0F8(void *r0, void *params) {
    struct { uint32_t w[3]; uint8_t b0, b1, pad[2]; } info = {{0, 0, 0}, 0, 1, {0, 0}};
    char *self = func_00631A20(r0, params, 0, 0xFF, &info);
    FLD(self, 0x320, char *) = data_006E7B94 + 0xBC;
    FLD(self, 0x000, char *) = data_006E7B94;
    if (func_00588BF0(self, 0)) {
        FLD(self, 0x2D7, uint8_t) = 1;
        return self;
    }
    func_0039BFEC(self);
    char *sm = AT(self, 0x960);
    const char *t = data_006A05C4;
    FLD(self, 0x974, char *) = self;
    FLD(sm, 6, uint8_t) = 6;
    char *enter = func_0010BA78(0x60);
    FLD(sm, 0x18, char *) = enter;
    FLD(sm, 0x1C, char *) = enter + FLD(sm, 6, uint8_t) * 8;
    int i;
    for (i = 0; i < 12; i++)              /* enter[6] + exec[6] = "null" PMF */
        memcpy(enter + i * 8, t + 0x78, 8);
    uint8_t n = FLD(sm, 6, uint8_t);
    char *exitp = func_0010BA78((uint32_t)n * 8);
    FLD(sm, 0x20, char *) = exitp;
    for (i = 0; i < n; i++)               /* exit[n] = default PMF */
        memcpy(exitp + i * 8, t + 0x10, 8);
    {
        uint32_t *mem = func_0010CEE0(6 * 0x24 + 8, NULL, 4);
        void *arr = NULL;
        if (mem) {
            mem[0] = 0x24;
            mem[1] = 6;
            arr = func_00100118(mem + 2, func_0010BDF0, 0x24, 6);
        }
        if (arr) {
            FLD(sm, 0x08, uint32_t) = 6;
            FLD(sm, 0x0C, void *) = arr;
        }
    }
    FLD(self, 0x354, char *) = sm;
    FLD(self, 0x35A, uint16_t) = 6;
    /* per state: enter (sm+0x18), exec (sm+0x1C), exit (sm+0x20) PMF = table offsets */
    static const struct { const char *name; uint16_t en, ex, xt; } st[6] = {
        {"cState_Wait", 0x00, 0x08, 0x10},
        {"cState_Walk", 0x18, 0x20, 0x10},
        {"cState_Event", 0x28, 0x30, 0x10},
        {"cState_EventEnd", 0x38, 0x40, 0x48},
        {"cState_Hide", 0x50, 0x58, 0x60},
        {"cState_Main", 0x68, 0x70, 0x10},
    };
    for (i = 0; i < 6; i++) {
        name_state(sm, (uint32_t)i, st[i].name);
        memcpy(FLD(self, 0x978, char *) + i * 8, t + st[i].en, 8);
        memcpy(FLD(self, 0x97C, char *) + i * 8, t + st[i].ex, 8);
        memcpy(FLD(self, 0x980, char *) + i * 8, t + st[i].xt, 8);
    }
    func_00630BA8(self, FLD(self, 0x984, void *), 0);
    if (func_00588BE4(self) == data_00693818)
        func_004C03B8(self, data_007809D8);
    if (func_00588BE4(self) == data_0069381C)
        func_004C03B8(self, data_00780A00);
    if (func_00588BE4(self) == data_00693820)
        func_004C03B8(self, data_00780A28);
    FLD(self, 0x8AC, uint32_t) |= 0x20;
    func_004BC8D8(self);
    return self;
}
