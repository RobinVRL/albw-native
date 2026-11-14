/* USA 0019B51C <- EU 0019B51C: Factory::Factory(createFn, id, const SafeString &name,
 *     void *list, const SafeString &unused, const char *group, int unused)
 * (symbol_aliases_manual.txt: _ZN7FactoryC1EPFPvvEjRK10SafeStringP11PtrListBaseS5_PKci).
 * The actor-factory registration constructor: every static constructor of an actor class
 * (388 caller files, e.g. 005C2B54 "AreaBellReject") builds one global Factory object.
 *
 *   this[0x00] = data_006CE0B4                    (Factory vtable)
 *   this[0x04] = createFn, this[0x08] = id
 *   this[0x0C] = {data_006F5988, name.mStringTop}  (embedded SafeString copy of the name)
 *   this[0x14] = group ? group : data_0069305C     (stack arg 2)
 *   002E0180(&tmp, id)          tmp = SafeString{vtbl, id < 640 ? data_00729028[id].name : 0}
 *   00325094(this + 0x18, &tmp) member ctor; returns its this -> r0 - 0x18 == this
 *   zero 32 words at this + 0x1C8
 *   data_00727C28[id < 640 ? id : 0] = this       (factory table)
 *   data_00728628[id < 640 ? id : 0] = list       (stack arg 0, copied through s16: bit copy)
 *   return this
 * Stack: arg0 at [sp,#0x20] (vldr s16), arg1 unused, arg2 at [sp,#0x28], arg3 unused.
 *
 * Ghidra vs ARM: the Ghidra C is correct (checked insn by insn, EU 0019B51C-0019B5D4). The
 * only subtlety is that the return value and the zeroed range come from 00325094's return value
 * (the compiler knew the member ctor returns its this), kept as on ARM. Out-of-range id
 * (>= 0x280) writes slot 0 of both tables (`addlo`), kept. Confidence: high. */
#include "hot.h"

extern char data_006CE0B4[], data_006F5988[], data_0069305C[], data_00727C28[], data_00728628[];

int func_002E0180(void *out, uint32_t id);
int func_00325094(void *self, int src);

int func_0019B51C(uint32_t self_w, uint32_t create_fn, uint32_t id, uint32_t name_w,
                  uint32_t list, uint32_t unused_name2, uint32_t group)
{
    char *self = P(self_w);
    uint32_t tmp[2];

    W(self, 0x00) = DATA_W(data_006CE0B4);
    W(self, 0x04) = create_fn;
    W(self, 0x08) = id;
    W(self, 0x0C) = DATA_W(data_006F5988);
    W(self, 0x10) = W(P(name_w), 4);
    W(self, 0x14) = group ? group : DATA_W(data_0069305C);
    func_002E0180(tmp, id);
    char *obj = P((uint32_t)func_00325094(self + 0x18, (int)gp_u32(tmp))) - 0x18;
    for (int i = 0; i < 32; i++)
        W(obj, 0x1C8 + 4 * i) = 0;
    uint32_t slot = id < 0x280 ? id : 0;
    W(data_00727C28, 4 * slot) = gp_u32(obj);
    W(data_00728628, 4 * slot) = list;
    return (int)gp_u32(obj);
}
