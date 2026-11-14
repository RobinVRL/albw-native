/* USA 004BC8D8 <- EU 004BC8B0: Actor::updateModel()   (102 caller files: the default per-frame
 * model update of actors with a skeletal model)
 *   pos = self[0x3D0..0x3D8] (12-byte copy on the stack)
 *   model = self[0x7A0]; model[0x164] |= 0x40000000
 *   if (self[0x828]) 004D7EB0(model + 0x80, self[0x828], self[0x3E8], &pos)  (matrix, scale)
 *   else             004D8AEC(model + 0x80, self[0x3E8], &pos)               (matrix: rot + pos)
 *   00169A80(self[0x7AC]); 00168E9C(self[0x7AC], self[0x7A0], 0)       (main SkelAnim calc/apply)
 *   if (self[0x7B0] && self[0x916]) { 00169A80(self[0x7B0]); 00168E9C(self[0x7B0], self[0x7A0], 0); }
 *   004BF418(self); 004CEAF0(self[0x7A0]) (model world matrix); 004BF874(self, &pos, 0);
 *   004BDBAC(self, 0); self[0x913] = 2
 * The second 00168E9C call re-reads self[0x7B0] (r5 = &self[0x7B0]) after the calc.
 *
 * Ghidra vs ARM: control flow right; Ghidra passes leftover registers (extraout_r1, a stale
 * `in_r3`) as the 3 extra arguments of the 00169A80 prototype (ignored by it); here 0. The
 * float return 004D8AEC has in the converted prototypes is kept for the x87 class (unused).
 * Verified EU 004BC8B0-004BC99C. Confidence: high (flow), medium (names). */
#include "hot.h"

int func_004D7EB0(float *m, uint32_t scale, uint32_t rot, float *pos);
float func_004D8AEC(float *m, uint32_t rot, float *pos);
int func_00169A80(int *self, uint32_t a, uint32_t b, int *c);
void func_00168E9C(char *anim, char *model, int force);   /* native/robust definition */
int func_004BF418(int self);
int func_004CEAF0(int model);
int func_004BF874(int self, float *pos, int x);
int func_004BDBAC(int self, int x);

int func_004BC8D8(uint32_t self_w)
{
    char *self = P(self_w);
    uint32_t pos[3] = { W(self, 0x3D0), W(self, 0x3D4), W(self, 0x3D8) };
    char *model = P(W(self, 0x7A0));
    W(model, 0x164) |= 0x40000000u;
    if (W(self, 0x828) != 0)
        func_004D7EB0((float *)(model + 0x80), W(self, 0x828), W(self, 0x3E8), (float *)pos);
    else
        func_004D8AEC((float *)(model + 0x80), W(self, 0x3E8), (float *)pos);
    func_00169A80((int *)P(W(self, 0x7AC)), 0, 0, 0);
    func_00168E9C(P(W(self, 0x7AC)), P(W(self, 0x7A0)), 0);
    if (W(self, 0x7B0) != 0 && FLD(self, 0x916, uint8_t) != 0) {
        func_00169A80((int *)P(W(self, 0x7B0)), 0, 0, 0);
        func_00168E9C(P(W(self, 0x7B0)), P(W(self, 0x7A0)), 0);
    }
    func_004BF418((int)self_w);
    func_004CEAF0((int)W(self, 0x7A0));
    func_004BF874((int)self_w, (float *)pos, 0);
    func_004BDBAC((int)self_w, 0);
    FLD(self, 0x913, uint8_t) = 2;
    return 2;
}
