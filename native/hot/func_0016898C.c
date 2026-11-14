/* USA 0016898C <- EU 0016898C: SkelAnim::request(const AnimReq *req)
 * The skeletal-animation player's "play this request" entry: every actor state that starts a
 * model animation builds a 0x5C-byte AnimReq on the stack (e.g. 001D87DC Obj1D8::playAnimReq,
 * Req5C ctor 002C11E8) and calls this. 375 caller files.
 *
 * self (anim player): +0x0C layer count, +0x14 layers (0x28 bytes each), +0x18/+0x1C/+0x20
 *   previous (blend-source) layers count/capacity/array, +0x24 cleared on exit,
 *   +0x88 blend weight, +0x8C blend step, +0x90/+0x94 group table count/array (0x14 bytes,
 *   byte +0x10 = active), +0xA4 listener (0010DBB4(listener, &SafeString name, frame)).
 * layer: +0 anim id, +4 -> -> anim res (+4 flags byte, bit 0 loop; +8 end frame), +8 start,
 *   +0xC start copy, +0x10 rate, +0x14 frame, +0x18 time, +0x1C loop, +0x20 user word,
 *   +0x24 s8 group, +0x25/+0x26 flags.
 * req: +0 count, +8 entries (0x18: +0 id, +4 start, +8 rate, +0xC frame, +0x10 word,
 *   +0x14 s8 loop), +0x54 blend frames, +0x58 byte "keep weights".
 *
 * Flow (EU 0016898C-00168D5C, every indexed access clamps out-of-range indices to element 0
 * with an unsigned `hi` compare, as the ARM does):
 *   if (!req.count) goto out;
 *   if (self.count == 0) { weight = 0; step = 1; goto start; }
 *   if (self.count == req.count && all layer ids equal) {
 *       per entry i: update the layer in place (frame, loop flag, start, rate, word);
 *       goto notify;
 *   }
 *   transition: if weight `bls` 0 (false for NaN) or bits(weight) < bits(0.5) (signed):
 *       deactivate the groups of the previous layers; previous = copy of current layers
 *       (memcpy 0010E3C4, count kept only if it fits); weight = 1;
 *   else deactivate the groups of the current layers;
 *   if (!req.keep) previous layers' +0x10 = 0;  step = req.frames > 0 ? 1/(float)frames : 1;
 * start: self.count = 0; 00169344(self, req);
 * notify: if (self.listener) 0010DBB4(listener, &SafeString{vtbl, ***(layer0+4)}, layer0.start)
 * out: self[0x24] = 0
 * Return (r0, no caller uses it): self on the early exit, 0 when there is no listener,
 * else 0010DBB4's r0.
 *
 * Ghidra vs ARM: the flow is right; differences: (1) the weight test is rebuilt from FPSCR
 * flags with an UNDEFINED `in_fpscr` and computes C as (0 <= w), so a positive NaN weight takes
 * the reset path (ARM: the "keep" path, bits 0x7FC00000 >= 0x3F000000); (2) the frames->float
 * conversion takes its rounding mode from that undefined FPSCR (the converted helper ignores
 * it: harmless); (3) `in_r2` read uninitialised (dead). Confidence: high (flow), medium (names). */
#include "skelanim.h"

int func_0016898C(uint32_t self_w, uint32_t req_w)
{
    return sk_request(self_w, (uint32_t *)P(req_w));
}
