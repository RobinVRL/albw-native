/* USA 00568B68 (EU 00568B40): nw::lyt::Pane::GetVtxPos() -> Vec2 (s0 = x, s1 = y): the
 * top-left corner of the pane rect relative to its origin, from the base position byte +0x47
 * (bits 0-1 horizontal: 0 centre -> -w/2, 1 left -> 0, 2 right -> -w; bits 2-3 vertical:
 * 0 centre -> +h/2, 1 top -> 0, 2 bottom -> +h) and the size +0x3C / +0x40.
 * The return is a VFP register pair; Ghidra typed it `float` (s0 only), and its callers stored a
 * stale variable or `in_s1` as y (e.g. 00400AB4 wrote pos.y = a modelview word: the title's wood
 * panel was drawn with its top edge at the screen centre, boot stop 86). Callers that need y call
 * albw_lyt_vtx_pos_y (native/compilefix copies). Rewritten from the EU disassembly
 * (constants 0.0, -0.5, 0.5 at 00568B70..00568B78). Confidence: high. */
#include <stdint.h>

static float fsize(const uint8_t *p, int o) { return *(const float *)(p + o); }

float func_00568B68(const uint8_t *pane)
{
    switch (pane[0x47] & 3) {
    case 0: return fsize(pane, 0x3C) * -0.5f;
    case 2: return -fsize(pane, 0x3C);
    default: return 0.0f;
    }
}

float albw_lyt_vtx_pos_y(const uint8_t *pane)
{
    switch ((pane[0x47] >> 2) & 3) {
    case 0: return fsize(pane, 0x40) * 0.5f;
    case 2: return fsize(pane, 0x40);
    default: return 0.0f;
    }
}

/* USA 00569264 (EU 0056923C): nw::lyt::TextBox text position offset (pane, const Vec2 *size,
 * bool round) -> Vec2 (s0 = x, s1 = y), from the text position byte +0xD0 (bits 0-1 horizontal,
 * bits 2-3 vertical: 0 centre -> size * 0.5, rounded by 0059090C when `round`; 2 -> size;
 * else 0). Same VFP-pair class as 00568B68: Ghidra kept x and its callers read y from in_s1
 * (005694A0: y = GetVtxPos.y - in_s1, NaN once GetVtxPos.y was right, so "Press (A)" vanished,
 * boot stop 86). Rewritten from the EU disassembly (constants 0.0 / 0.5 at 005692D0 / 005692D4).
 * Confidence: high. */
extern float func_0059090C(float x);

static float text_pos(const uint8_t *pane, float size, int round, int shift)
{
    switch ((pane[0xD0] >> shift) & 3) {
    case 0: return round ? func_0059090C(size * 0.5f) : size * 0.5f;
    case 2: return size;
    default: return 0.0f;
    }
}

float func_00569264(const uint8_t *pane, const float *size, int round)
{
    return text_pos(pane, size[0], round, 0);
}

float albw_lyt_text_pos_y(const uint8_t *pane, const float *size, int round)
{
    return text_pos(pane, size[1], round, 2);
}
