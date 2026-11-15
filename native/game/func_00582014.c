/* USA 00582014 (EU 00581FEC)  room fade of a model: (room manager, room index, model).
 * alpha = model +0x158 (base alpha); when the manager's room table (+0x38) has the room
 * (index < count), alpha *= room +0x3F8 (room fade) and the flag byte = room +0x3FD. Tail call
 * model vtable +0x18 (002C3EB4 for field models: (model, alpha >= 1.0 ? 0 : flag, s0 = alpha)),
 * which stores the alpha to +0x154 and switches the mesh layers between opaque / translucent.
 * Called by 004ECF14 from 004CEF4C (model visibility, flag 0x20000000: owned by a room); 004CEF4C
 * hides a model whose +0x154 is not > 0.
 * Bug fixed: the Ghidra text called vtable +0x18 without the float argument (s0), so the field
 * models got an uninitialised alpha: a tiny positive value or 0 depending on the stack, i.e. the
 * stage rooms drew in some runs / frames and not in others (title overworld missing in state 2,
 * run-to-run variance 24 vs 9 vertex buffers; BOOT_LOG 91 [3d]).
 * CLASS lost float argument in a (tail) virtual call. From the EU machine code. High. */
#include "../route/route.h"

extern int DAT_0058205c;   /* room table: offset of the room count */
extern int DAT_00582060;   /* room record size in words */

int func_00582014(int param_1, int param_2, int *param_3)
{
    char *mgr = GPTR_TO(char, (uint32_t)param_1);
    char *model = GPTR_TO(char, GPTR_OF(param_3));
    char *tbl = RP(mgr, 0x38);
    float alpha = RF(model, 0x158, float);
    uint32_t flag = 0;
    if (tbl && param_2 < RF(tbl, DAT_0058205c, int32_t)) {
        char *room = tbl + 0x183C + param_2 * DAT_00582060 * 4;
        flag = RF(room, 0x3FD, uint8_t);
        alpha = RF(room, 0x3F8, float) * alpha;
    }
    int32_t bits;
    memcpy(&bits, &alpha, 4);
    if (bits >= 0x3F800000)
        flag = 0;
    return RVFN(int (*)(int *, int, float), model, 0x18)(param_3, (int)flag, alpha);
}
