/* USA 004C58F0 (EU 004C58C8): actor-heap / ActorProfile set-up of the main-game systems init
 * (called once from 004EE6C8, ROUTE.md step 4: "Archive/ActorProfile.szs", "PlayerUnitHeap")
 *   int f(ActorMgrLike *this, Heap *parent);   returns tmp->vt[0x10](tmp) (tail call)
 *   this->+0x14 = 004A0038(0x24000, 1, &SafeString"PlayerUnitHeap", 4, parent, 0);
 *   this->+0x20 = 004A0038(0x1800, 0x78, &"SmallUnitHeap", 4, parent, 0);
 *   this->+0x24 = 004A0038(0x8000, 0xD8, &"ActorUnitHeap", 4, parent, 0);   (unit heaps)
 *   tmp = 0010B954(0, &"<SJIS: profile parameter>", parent, 1, 0)   (temporary ExpHeap);
 *   LoadArg at sp+4 (0x3C bytes): { SafeString{data_006F5988, "Archive/ActorProfile.szs"},
 *     +0x08 heap = tmp, +0x0C = tmp, +0x10 = 0x20, +0x14..+0x28 = 0,
 *     SafeString{data_006F5988, "World"} at +0x2C, u8 +0x34 = 7, +0x35 = 4, +0x36 = 0,
 *     +0x37 = 1, +0x38 = 1 };
 *   res = 001E1228(*data_00712538, &LoadArg, 0)   (resource manager load);
 *   for (i = 0; i < 0x280; i++) if ((p = 0019B04C(i)) != 0) 00325004(p + 0x18, res, tmp);
 *   return tmp->vt[0x10](tmp)   (destroy the temporary heap).
 * What was wrong in the round-2 converted C (ghidra_analyzed4/004/func_004C58F0.c): the load
 * argument's first word (the SafeString vtable of the archive path, `str r4,[sp,#4]`) was never
 * written (`&stack0xffffff94` is passed but only +8.. are set): 001E1228 got the path string with
 * an uninitialised vtable (its assure/calcLength virtual jumps through stack garbage). Also the
 * 4th argument passed to 00325004 is a dead r3 on ARM (live-in r0-r2 only): not passed here.
 * Strings: the code-section literals of EU 004C5A50..004C5AA8 (the heap name at 004C5A84 is
 * Shift-JIS "プロファイルパラメータ"). Verified against EU 004C58C8-004C5A4C. Confidence: high. */
#include "framework.h"

extern uint32_t data_006F5988[]; /* sead::SafeString vtable */
extern uint32_t data_00712538;   /* resource manager instance */

uint32_t func_004A0038(uint32_t size, uint32_t n, void *name, uint32_t align, void *parent, uint32_t z);
uint32_t func_0010B954(uint32_t size, void *name, void *parent, int32_t dir, uint32_t z);
uint32_t func_001E1228(void *mgr, void *arg, void *z);
uint32_t func_0019B04C(uint32_t i);
int func_00325004(void *p, uint32_t res, uint32_t heap);

static const char s_player[] = "PlayerUnitHeap", s_small[] = "SmallUnitHeap",
                  s_actor[] = "ActorUnitHeap", s_world[] = "World",
                  s_path[] = "Archive/ActorProfile.szs",
                  s_tmp[] = "\x83v\x83\x8d\x83t\x83" "B\x81[\x83\x8b\x83p\x83\x89\x83\x81\x81[\x83^";

typedef uint32_t (*vfn_this)(void *self);

int func_004C58F0(uint32_t self_w, int *parent) {
    char *self = gp_ptr(self_w);
    uint32_t vt = GPTR_OF(ALBW_LAUNDER(data_006F5988));
    fw_SafeString nm;
    nm.vtbl = vt; nm.top = GPTR_OF(s_player);
    FLD(self, 0x14, uint32_t) = func_004A0038(0x24000, 1, &nm, 4, parent, 0);
    nm.vtbl = vt; nm.top = GPTR_OF(s_small);
    FLD(self, 0x20, uint32_t) = func_004A0038(0x1800, 0x78, &nm, 4, parent, 0);
    nm.vtbl = vt; nm.top = GPTR_OF(s_actor);
    FLD(self, 0x24, uint32_t) = func_004A0038(0x8000, 0xD8, &nm, 4, parent, 0);
    fw_SafeString hn = { vt, GPTR_OF(s_tmp) };
    uint32_t tmp = func_0010B954(0, &hn, parent, 1, 0);

    uint32_t la[16];
    memset(la, 0, sizeof la);
    la[0] = vt;
    la[1] = GPTR_OF(s_path);
    la[2] = tmp;
    la[3] = tmp;
    la[4] = 0x20;
    la[11] = vt;
    la[12] = GPTR_OF(s_world);
    FLD(la, 0x34, uint8_t) = 7;
    FLD(la, 0x35, uint8_t) = 4;
    FLD(la, 0x36, uint8_t) = 0;
    FLD(la, 0x37, uint8_t) = 1;
    FLD(la, 0x38, uint8_t) = 1;
    uint32_t res = func_001E1228(gp_ptr(data_00712538), la, 0);
    for (uint32_t i = 0; i < 0x280; i++) {
        uint32_t p = func_0019B04C(i);
        if (p != 0)
            func_00325004(gp_ptr(p + 0x18), res, tmp);
    }
    return (int)GFN(vfn_this, fw_vslot(gp_ptr(tmp), 0x10))(gp_ptr(tmp));
}
