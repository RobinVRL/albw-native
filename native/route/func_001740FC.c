/* USA 001740FC (EU 001740FC): calc of the object class with vtable slot 006C8CC8 (a falling /
 * pushed block): keeps only a zero (or NaN) vertical velocity +0x3E0, position += velocity,
 * StateMgr::exec (StateMgr at +0x418), then a box collision check 0014EEC8(this, &push,
 * &{0, 0.5, 0.5}, 0xDDF, s0 = 0.5f) that, when it hits, adds the push vector and stops the
 * object; finally copies the position into the collider *(*(+0x40C)+0x18)+4 and updates it
 * (004ED9C8(*(+0x40C))).
 * Route: actor/object state machine.
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float
 * register argument s0 = 0.5f of 0014EEC8 (live-in there) is passed explicitly.
 * Verified instruction by instruction against EU 001740FC..00174250 (vcmpe `blo`/`ble` clamp:
 * < 0 or > 0 -> 0.0f, == 0 or NaN kept; `mov r0, r0` at 0017421C is a no-op).
 * Confidence: high. */
#include "route.h"

int func_00115C54(float *out, float *a, float *b);
int func_0014EEC8(char *self, float *push, float *box, uint32_t flags, float f);
void func_004ED9C8(int collider);

void func_001740FC(char *self)
{
    float vy = RF(self, 0x3E0, float);
    if (vy < 0.0f || vy > 0.0f)
        vy = 0.0f;
    RF(self, 0x3E0, float) = vy;
    func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3DC));
    route_statemgr_exec(RAT(self, 0x418));
    float push[3] = { 0.0f, 0.0f, 0.0f };
    float box[3] = { 0.0f, 0.5f, 0.5f };
    if (func_0014EEC8(self, push, box, 0xDDF, 0.5f) != 0) {
        func_00115C54((float *)RAT(self, 0x3D0), (float *)RAT(self, 0x3D0), push);
        RF(self, 0x3DC, float) = 0.0f;
        RF(self, 0x3E0, float) = 0.0f;
        RF(self, 0x3E4, float) = 0.0f;
    }
    char *c = RP(RP(self, 0x40C), 0x18);
    RF(c, 4, uint32_t) = RF(self, 0x3D0, uint32_t);
    RF(c, 8, uint32_t) = RF(self, 0x3D4, uint32_t);
    RF(c, 0xC, uint32_t) = RF(self, 0x3D8, uint32_t);
    func_004ED9C8((int)RF(self, 0x40C, uint32_t));
}
