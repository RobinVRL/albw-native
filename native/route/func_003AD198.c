/* USA 003AD198 (EU 003AD174): calc of the actor class with vtable slot 006E8E28 (a ball with an
 * effect handle): resolves/creates the effect handle {+0x4AC, +0x4B0} ("Ball", 004A1B9C on the
 * emitter set *(+0x344); cleared when there is none) and pushes the colour +0x49C into it;
 * while the handle is valid (o+0x1C == +0x4B0) moves it to the position (004A2F38);
 * 00151148(*(+0x43C), 1) (float result unused); StateMgr::exec (StateMgr at +0x40C);
 * position += velocity; when the spin vector +0x490 is non-zero (vcmp, NaN counts as
 * non-zero) rotates the model 001512B4 / 00151150(model, {x, 1.0, z}); copies the position to
 * the collider *(+0x438)+4 and tail-calls 004356B4.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003AD174..003AD35C (the `vcmpeq` chain,
 * handle compare paths, ldm/stm handle copy).  Confidence: high. */
#include "route.h"

void func_004A2F38(int effect, void *pos);
void func_004A1B9C(uint32_t *out, int set, const char *name);
int func_00151148(int obj, int a);
int func_00115C54(float *out, float *a, float *b);
void func_001512B4(int obj, float *pos);
void func_00151150(int obj, float *v);
void func_004356B4(int obj);

static int handle_ok(char *self)
{
    char *o = RP(self, 0x4AC);
    return o != 0 && RF(o, 0x1C, uint32_t) == RF(self, 0x4B0, uint32_t);
}

void func_003AD198(char *self)
{
    if (RF(self, 0x4AC, uint32_t) == 0) {
        uint32_t set = RF(self, 0x344, uint32_t);
        if (set == 0) {
            RF(self, 0x4B0, uint32_t) = 0;
        } else {
            uint32_t h[2];
            func_004A1B9C(h, (int)set, "Ball");
            RF(self, 0x4AC, uint32_t) = h[0];
            RF(self, 0x4B0, uint32_t) = h[1];
        }
        if (handle_ok(self)) {
            char *o = RP(self, 0x4AC);
            RF(o, 0x28, uint32_t) = RF(self, 0x49C, uint32_t);
            RF(o, 0x2C, uint32_t) = RF(self, 0x4A0, uint32_t);
            RF(o, 0x30, uint32_t) = RF(self, 0x4A4, uint32_t);
            RF(o, 0x3C, uint32_t) |= 0x10;
        }
    }
    if (handle_ok(self))
        func_004A2F38((int)RF(self, 0x4AC, uint32_t), RAT(self, 0x3D0));
    (void)func_00151148((int)RF(self, 0x43C, uint32_t), 1);
    route_statemgr_exec(RAT(self, 0x40C));
    func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3DC));
    if (!(RF(self, 0x490, float) == 0.0f && RF(self, 0x494, float) == 0.0f &&
          RF(self, 0x498, float) == 0.0f)) {
        func_001512B4((int)RF(self, 0x43C, uint32_t), (float *)RAT(self, 0x3D0));
        float v[3] = { RF(self, 0x490, float), 1.0f, RF(self, 0x498, float) };
        func_00151150((int)RF(self, 0x43C, uint32_t), v);
    }
    char *c = RP(self, 0x438);
    RF(c, 4, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(c, 8, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(c, 0xC, uint32_t) = RF(self, 0x3D8, uint32_t);
    func_004356B4((int)RF(self, 0x438, uint32_t));
}
