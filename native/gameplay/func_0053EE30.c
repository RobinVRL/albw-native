/* USA 0053EE30 <- EU 0053EE08: AnimFrameCtrl::getFrame(): s0 = this->[0x10]->[0x14]->frame (+0x08).
 * Part of the animation frame-controller getters 0053EDC8 (end frame +0x14), 0053EDD8 (isEnd),
 * 0053EE20 (rate +0x10), 0053EE30 (frame +0x08), 0053EE40 (isFrame(f)); used by actor and
 * player state handlers every frame (14 callers / 33 sites, 32 of them read s0; e.g. the
 * wall-merge move handler 0038EA34 compares the frame with a constant).
 *
 * What was wrong: Ghidra decompiled it as `void f(void) { return; }` (empty body, no `this`):
 * every caller's frame value is an uninitialised in_s0.
 * RETURN CLASS: round 2 (params r0, returns.json float) declares
 * `extern float func_0053EE30(int)` in all 14 converted caller files, so func_ now returns the
 * float; `this` taken as an int word + gp_ptr. albw_anim_frame() is the same for rewrites. Verified against EU 0053EE08-0053EE14. Confidence: high. */
#include "gameplay.h"

float albw_anim_frame(void *ctrl) {
    void *a = GPTR(ctrl, 0x10, void);
    void *b = GPTR(a, 0x14, void);
    return FLD(b, 0x08, float);
}

float func_0053EE30(int ctrl) {
    return albw_anim_frame(gp_ptr((uint32_t)ctrl));
}
