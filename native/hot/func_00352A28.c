/* USA 00352A28 <- EU 00352A04: EffectSlot::~EffectSlot()   (191 caller files: the inlined
 * member destructor of every actor that owns an effect slot; vtable data_006E34E8)
 *   self[0] = data_006E34E8
 *   if (self[0x20]) {                                       (effect handle)
 *       if (!(*data_0070A500)[0x298])      004A1B00(self[0x20])          (kill now)
 *       else if (self[0x3A]) {             0010DBBC(self, &SafeString{vtbl, "onFinish"}, 2, 0.0f)
 *                                          004A1F20(self[0x20]); if (self[0x24]) 004A6784(self[0x24])
 *       }
 *       004A1FCC(self[0x20]); if (self[0x24]) 004A7480(self[0x24])
 *       if ((owner = self[0x1C])) { self[0x1C] = 0; 0010F1F8(self + 0x10); --owner[8]; }
 *   }
 *   return 004A1520(self)                                   (sead::IDisposer dtor, tail call)
 * (0010DBBC = signal emit(obj, name, int, float); "onFinish" = data_00695000.)
 *
 * Ghidra vs ARM: correct (EU 00352A04-00352AD0 insn by insn). Ghidra passes its undefined
 * `in_s0`/the 0.0 constant into 0010F1F8 (ListNode::erase_, no float); declared here like its
 * winning definition (native/core: void(void *)). Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_006E34E8[], data_0070A500[], data_00695000[], data_006F5988[];

int func_0010DBBC(int obj, int *name, int arg, float f);
int func_004A1B00(int h);
int func_004A1F20(int h);
int func_004A1FCC(int h);
int func_004A6784(int h);
int func_004A7480(int h);
void func_0010F1F8(void *node);   /* ListNode::erase_, native/core/sead_list.c */
void *func_004A1520(void *self);

int func_00352A28(uint32_t self_w)
{
    char *self = P(self_w);
    W(self, 0) = DATA_W(data_006E34E8);
    if (W(self, 0x20) != 0) {
        if (FLD(P(W(data_0070A500, 0)), 0x298, uint8_t) == 0) {
            func_004A1B00((int)W(self, 0x20));
        } else if (FLD(self, 0x3A, uint8_t) != 0) {
            uint32_t ss[2] = { DATA_W(data_006F5988), DATA_W(data_00695000) };
            func_0010DBBC((int)gp_u32(self), (int *)ss, 2, 0.0f);
            func_004A1F20((int)W(self, 0x20));
            if (W(self, 0x24) != 0)
                func_004A6784((int)W(self, 0x24));
        }
        func_004A1FCC((int)W(self, 0x20));
        if (W(self, 0x24) != 0)
            func_004A7480((int)W(self, 0x24));
        uint32_t owner = W(self, 0x1C);
        if (owner != 0) {
            W(self, 0x1C) = 0;
            func_0010F1F8((int *)(self + 0x10));
            W(P(owner), 8) = W(P(owner), 8) - 1;
        }
    }
    return (int)gp_u32(func_004A1520(self));
}
