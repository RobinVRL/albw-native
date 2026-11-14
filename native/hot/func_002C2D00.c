/* USA 002C2D00 <- EU 002C2CDC: ModelFactory::create(const ModelCreateArg *arg) -> Model*
 * (87 caller files: every actor that builds its bcl/bch model holder). arg:
 *   +8 / +0 name strings (SafeString-like, chosen by *(u8 *)arg[0xC]), +0x10 resource, +0x14 parent
 *   model, +0x18 flags, +0x1C kind (0/1/2), +0x20 heap, +0x24, +0x30 anim slot block,
 *   +0x34 shared object, +0x38 "share" byte, +0x39 byte passed to vt[0x10].
 *   res = arg.parent ? arg.parent[0x50] : arg.res;
 *   if (!arg.parent && !res) { r = 00504CC0(*data_0070BC28, arg, -1);
 *       res = 00533400(r, *(u8 *)arg[0xC] ? arg + 8 : arg); }
 *   obj = arg[0x34] ? arg[0x34] : (arg.parent ? arg.parent[0x20] : res[0x24]);
 *   if (!arg[0x34] && (!arg[0x38] || (arg[0x18] & 1))) {
 *       obj = new(8, arg[0x20], 4) (0010CF28) zeroed; 00522E7C(res, obj, arg[0x20], arg[0x24]); }
 *   else if (res[0x24] == obj) arg[0x18] |= 0x40000000;
 *   blk = arg[0x30]; if (!blk) { blk = new(0x24) with words 4..0x20 zeroed; 00522E1C(res, blk, 0); }
 *   m = kind 0: new(0x190) -> 002C4098 | 1: new(0x178) -> 004D08D4 | 2: new(0x220) -> 002C1754
 *       (allocation failure or another kind -> 0, then the virtual call below faults, as on ARM)
 *   m->vt[0x1C](m, res, obj, blk, arg); m->vt[0x10](m, arg[0x39]);
 *   001329C4(*data_0070B960, m);
 *   list = m[0x50] + 0xC4; relink m's node (+0x3C, owner +0x48) from its old owner into list
 *   (0010F1F8 erase, --old[8]; 0010F1DC insert, ++list[8]); return m
 *
 * Ghidra vs ARM: correct (EU 002C2CDC-002C2F58 insn by insn); Ghidra threads an undefined
 * `in_s0` into 0010F1F8 (ListNode::erase_, declared here like its native/core definition).
 * Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_0070BC28[], data_0070B960[];

int func_00504CC0(uint32_t mgr, uint32_t arg, uint32_t x);
int func_00533400(int r, int *name);
void *func_0010CF28(uint32_t size, void *heap, int32_t align);
int func_00522E7C(int res, uint32_t *obj, int *heap, int *x);
void *func_0010BAB4(uint32_t size);
int func_00522E1C(int res, uint8_t *blk, int *x);
int func_002C4098(uint32_t *m);
int func_004D08D4(uint32_t *m);
int func_002C1754(uint32_t *m);
int func_001329C4(int mgr, int m);
void func_0010F1F8(void *node);
uint32_t func_0010F1DC(void *list, void *node);

typedef int (*vinit_t)(void *self, uint32_t res, uint32_t obj, uint32_t blk, uint32_t arg);
typedef int (*vset_t)(void *self, uint32_t b);

int func_002C2D00(uint32_t arg_w)
{
    char *arg = P(arg_w);
    uint32_t aw = gp_u32(arg);
    uint32_t parent = W(arg, 0x14);
    uint32_t res = parent ? W(P(parent), 0x50) : W(arg, 0x10);
    if (parent == 0 && res == 0) {
        uint32_t r = (uint32_t)func_00504CC0(W(data_0070BC28, 0), aw, 0xFFFFFFFFu);
        if (FLD(P(W(arg, 0xC)), 0, uint8_t) != 0)
            res = (uint32_t)func_00533400((int)r, (int *)(arg + 8));
        else
            res = (uint32_t)func_00533400((int)r, (int *)arg);
    }
    uint32_t obj = W(arg, 0x34);
    int alloc = 0;
    if (obj == 0) {
        obj = W(arg, 0x14) ? W(P(W(arg, 0x14)), 0x20) : W(P(res), 0x24);
        alloc = FLD(arg, 0x38, uint8_t) == 0 || (W(arg, 0x18) & 1) != 0;
    }
    if (alloc) {
        uint32_t *o = (uint32_t *)func_0010CF28(8, P(W(arg, 0x20)), 4);
        if (o) { o[0] = 0; o[1] = 0; }
        obj = gp_u32(o);
        func_00522E7C((int)res, o, (int *)P(W(arg, 0x20)), (int *)P(W(arg, 0x24)));
    } else if (W(P(res), 0x24) == obj) {
        W(arg, 0x18) |= 0x40000000u;
    }
    uint32_t blk = W(arg, 0x30);
    if (blk == 0) {
        char *b = (char *)func_0010BAB4(0x24);
        if (b)
            for (int o = 4; o <= 0x20; o += 4)
                W(b, o) = 0;
        blk = gp_u32(b);
        func_00522E1C((int)res, (uint8_t *)b, 0);
    }
    uint32_t m = 0;
    void *mem;
    switch (FLD(arg, 0x1C, uint8_t)) {
    case 0:
        if ((mem = func_0010BAB4(0x190)) != 0)
            m = (uint32_t)func_002C4098((uint32_t *)mem);
        break;
    case 1:
        if ((mem = func_0010BAB4(0x178)) != 0)
            m = (uint32_t)func_004D08D4((uint32_t *)mem);
        break;
    case 2:
        if ((mem = func_0010BAB4(0x220)) != 0)
            m = (uint32_t)func_002C1754((uint32_t *)mem);
        break;
    default:
        break;
    }
    char *mp = P(m);
    GFN(vinit_t, W(P(W(mp, 0)), 0x1C))(mp, res, obj, blk, aw);
    GFN(vset_t, W(P(W(mp, 0)), 0x10))(mp, FLD(arg, 0x39, uint8_t));
    func_001329C4((int)W(data_0070B960, 0), (int)m);
    uint32_t list = W(mp, 0x50) + 0xC4;
    uint32_t old = W(mp, 0x48);
    if (old != 0) {
        W(mp, 0x48) = 0;
        func_0010F1F8(mp + 0x3C);
        W(P(old), 8) = W(P(old), 8) - 1;
    }
    W(mp, 0x48) = list;
    func_0010F1DC(P(list), mp + 0x3C);
    W(P(list), 8) = W(P(list), 8) + 1;
    return (int)m;
}
