/* USA 0014EB8C <- EU 0014EB8C: Collider::init(owner, const ColliderShape *shape, res,
 *     u16 kind, f32 param, u16 group) -> bool   (79 caller files)
 *   self[0x10] = owner; 004EDEA0(self, res); self[0x1C] = param (stack arg 1, bit copy through
 *   s16); (u16)self[0x32] = group (stack arg 2); (u16)self[0x18] = kind (stack arg 0);
 *   if (!shape) return 0;
 *   00435BE8(self + 0x20, shape); 004A8BFC(*data_00709D28, self, shape[4] & 0xFF) (register in
 *   the collision grid); return 1
 *
 * Ghidra vs ARM: correct (EU 0014EB8C-0014EBF8). Confidence: high (flow), medium (names). */
#include "hot.h"

extern char data_00709D28[];

int func_004EDEA0(int self, uint32_t *res);
int func_00435BE8(int dst, uint16_t *shape);
int func_004A8BFC(int mgr, int col, uint32_t group);

int func_0014EB8C(uint32_t self_w, uint32_t owner, uint32_t shape_w, uint32_t res_w,
                  uint32_t kind, uint32_t param, uint32_t group)
{
    char *self = P(self_w);
    uint16_t *shape = (uint16_t *)P(shape_w);
    uint32_t *res = (uint32_t *)P(res_w);
    W(self, 0x10) = owner;
    func_004EDEA0((int)self_w, res);
    W(self, 0x1C) = param;
    FLD(self, 0x32, uint16_t) = (uint16_t)group;
    FLD(self, 0x18, uint16_t) = (uint16_t)kind;
    if (shape == 0)
        return 0;
    func_00435BE8((int)(self_w + 0x20), shape);
    func_004A8BFC((int)W(data_00709D28, 0), (int)self_w, FLD(shape, 4, uint16_t) & 0xFFu);
    return 1;
}
