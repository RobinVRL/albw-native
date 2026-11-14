/* USA 003459C8 (EU 003459A4): player model/animation loader: for every animation id
 * 0x97..0xAF that 00345C54(this, id, *data_00709DF8 + 0x18) accepts, builds the path
 * "LinkAnm2/" + name(0028E064(id)) + ".bch" in a FixedSafeString<256>, loads it through
 * 00504D48(*data_0070BC28, &resource-load-arg) and binds the result (00533304) into the slot
 * this+0x110+id*4, registering it with the two model objects at this+0x10 / this+0x90.
 * Returns 1 if any animation was loaded. Slots of rejected ids are cleared.
 * Route: Link's (player) creation: animation archive loading before his first update.
 * Bug: the converted Ghidra source did not compile (`local_1a8[0]._0_1_` partial-field syntax),
 * so the link had a tripwire stub here.
 * Verified instruction by instruction against EU 003459A4..00345BF8: the whole stack frame is
 * reproduced at the ARM sp offsets (FixedSafeString {vt 006F5BD0, buf, 0x100} at sp+4 with the
 * buffer at sp+0x10 and the terminator at sp+0x10F; load arg at sp+0x110..0x15C; temporary
 * SafeString at sp+0x168), the bounded strlen (0x40000, then 0) clipped to cap-1, the two
 * assureTermination virtual calls (vtable 006F5988 slot 8), the 0xFF/0/0 byte tweaks before
 * 00504D48, signed loop `cmp #0xB0; blt`.  Confidence: high. */
#include "../route.h"

extern uint32_t data_00712538[], data_00709DF8[], data_006F5BD0[], data_006C57E0[],
    data_006A3338[], data_0070BC28[];
int func_001E1E84(int obj);
uint8_t func_00345C54(char *self, int id, uint8_t *p);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);
int func_0028E064(int id);
uint64_t func_00689928(int *fss, int *str, uint32_t n);
int func_00504D48(int mgr, int arg);
int func_00533304(int res, int *name, uint32_t a);
uint32_t func_00133790(int *obj, int model);

#define SP(off, T) RF(sp, off, T)

int func_003459C8(char *self)
{
    _Alignas(8) char sp[0x194];
    memset(sp, 0, sizeof sp);
    uint32_t saved = (uint32_t)func_001E1E84((int)data_00712538[0]);
    uint8_t *flags = GPTR_TO(uint8_t, data_00709DF8[0]) + 0x18;
    int ret = 0;
    for (int32_t i = 0x97; i < 0xB0; i++) {
        int16_t id = (int16_t)i;
        if (func_00345C54(self, id, flags) == 0) {
            RF(self, 0x110 + i * 4, uint32_t) = 0;
            continue;
        }
        /* resource load argument at sp+0x110 */
        SP(0x110, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x114, uint32_t) = GPTR_OF(data_006C57E0);
        SP(0x118, uint32_t) = 0;
        SP(0x11C, uint32_t) = 0;
        SP(0x120, uint32_t) = 0x20;
        SP(0x124, uint32_t) = 0;
        SP(0x12C, uint32_t) = 0;
        SP(0x128, uint32_t) = 0;
        SP(0x140, uint32_t) = GPTR_OF(data_006A3338); /* "World" */
        SP(0x13C, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x130, uint32_t) = 0;
        SP(0x134, uint32_t) = 0;
        SP(0x150, uint32_t) = GPTR_OF("");
        SP(0x144, uint8_t) = 7;
        SP(0x148, uint8_t) = 0;
        SP(0x138, uint32_t) = 0;
        SP(0x15C, uint8_t) = 1;
        SP(0x14C, uint32_t) = GPTR_OF(data_006F5988);
        /* FixedSafeString<256> at sp+4 */
        SP(8, uint32_t) = GPTR_OF(sp + 0x10);
        SP(0xC, int32_t) = 0x100;
        SP(0x145, uint8_t) = 4;
        SP(0x146, uint8_t) = 0;
        SP(0x147, uint8_t) = 0;
        SP(0x154, uint32_t) = 0;
        SP(0x158, uint32_t) = 0;
        SP(0x10F, uint8_t) = 0;
        SP(0x10, uint8_t) = 0;
        SP(4, uint32_t) = GPTR_OF(data_006F5BD0);
        /* temporary SafeString "LinkAnm2/" at sp+0x168, copied into the buffer */
        char *tmp = sp + 0x168;
        SP(0x168, uint32_t) = GPTR_OF(data_006F5988);
        SP(0x16C, uint32_t) = GPTR_OF("LinkAnm2/");
        char *buf = RP(sp, 8);
        RVFN(void (*)(char *), tmp, 8)(tmp);
        const char *s = RP(sp, 0x16C);
        int32_t n = 0;
        for (;;) {
            if (s[n] == 0) {
                if (n > 0x40000)
                    n = 0;
                break;
            }
            n++;
            if (n > 0x40000) {
                n = 0;
                break;
            }
        }
        if (SP(0xC, int32_t) <= n)
            n = SP(0xC, int32_t) - 1;
        RVFN(void (*)(char *), tmp, 8)(tmp);
        func_0010E3C4(buf, RP(sp, 0x16C), (uint32_t)n);
        buf[n] = 0;
        func_00689928((int *)(sp + 4), (int *)GPTR_TO(char, func_0028E064(id)), 0xFFFFFFFFu);
        SP(0x16C, uint32_t) = GPTR_OF(".bch");
        SP(0x168, uint32_t) = GPTR_OF(data_006F5988);
        func_00689928((int *)(sp + 4), (int *)tmp, 0xFFFFFFFFu);
        SP(0x145, uint8_t) = 0xFF;
        SP(0x147, uint8_t) = 0;
        SP(0x154, uint32_t) = saved;
        SP(0x15C, uint8_t) = 0;
        SP(0x150, uint32_t) = SP(8, uint32_t);
        int res = func_00504D48((int)data_0070BC28[0], (int)GPTR_OF(sp + 0x110));
        int obj = func_00533304(res, (int *)GPTR_TO(char, func_0028E064(id)), 0);
        RF(self, 0x110 + i * 4, uint32_t) = (uint32_t)obj;
        func_00133790(GPTR_TO(int, obj), (int)RF(self, 0x10, uint32_t));
        func_00133790(GPTR_TO(int, RF(self, 0x110 + i * 4, uint32_t)), (int)RF(self, 0x90, uint32_t));
        ret = 1;
    }
    return ret;
}
