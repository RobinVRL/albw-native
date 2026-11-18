/* USA 0056E5D0 (EU 0056E5A8..0056EB20): nw::snd MML sequence parser, one command of a track.
 * Written from the ARM (BOOT_LOG 160g). The Ghidra text kept the command-handler call (parser
 * vtable +8) only for 0x88 (open track): program change 0x81, jump 0x89, call 0x8A, the 0x9x and
 * 0xBx..0xFx commands read their arguments and dropped them, so every note used program 0 (no
 * instrument: sequence sounds - sword swing and most effects - stayed silent) and jumps / loops /
 * calls never moved the cursor.
 *   parser (r7): vt +8 = command(parser, track, cmd, arg, extra), +0xC = note on(parser, track,
 *   key, velocity, length or -1, s8 track+0x26).  track (r11; r4 = track + 0x1C): +0x20 cursor,
 *   +0x24 condition flag (prefix 0xA2), +0x25 wait-for-note, +0x26, +0x7A mute, +0x7C wait,
 *   +0x80, +0xF4 s8 transpose, +0x12C player.
 *   Prefixes: 0xA2 = only if the condition flag is set; 0xA3 / 0xA4 / 0xA5 = the extra argument
 *   is read with type 2 / 4 / 5; 0xA0 / 0xA1 = the main argument is read with type 4 / 5 (random /
 *   variable) instead of the command's default. Arguments are read by 0056EB4C(parser, &cursor,
 *   player, track, type) (type 1 u8, 2 s16, 3 varlen, 4 random, 5 variable).
 * Confidence: high (instruction-level; jump tables from the ROM words at EU 56E6DC / 56EB3C). */
#include <stdint.h>

uint32_t func_0056EB4C(void *parser, uint32_t *cursor, uint32_t player, void *track, int type);

#define U8(p, o)  (*(uint8_t *)((char *)(p) + (o)))
#define S8(p, o)  (*(int8_t *)((char *)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((char *)(p) + (o)))

typedef void (*cmd_fn)(void *parser, void *track, uint32_t cmd, uint32_t arg, uint32_t extra);
typedef void (*note_fn)(void *parser, void *track, uint32_t key, uint32_t vel, int32_t len, int32_t x);

static inline uint8_t next(char *tr)
{
    uint8_t *c = (uint8_t *)(uintptr_t)U32(tr, 0x20);
    U32(tr, 0x20) = (uint32_t)(uintptr_t)(c + 1);
    return *c;
}

static inline void command(char *parser, char *tr, uint32_t cmd, uint32_t arg, uint32_t extra)
{
    cmd_fn f = (cmd_fn)(uintptr_t)U32((uintptr_t)U32(parser, 0), 0x8);
    f(parser, tr, cmd, arg, extra);
}

int func_0056E5D0(char *parser, char *tr, int do_note_on)
{
    uint32_t player = U32(tr, 0x12C);
    uint32_t *cursor = (uint32_t *)(tr + 0x20);
    int type = 0, has_type = 0, extra_type = 0, cond = 1;
    uint32_t extra = 0;

    uint32_t cmd = next(tr);
    if (cmd == 0xA2) {
        cmd = next(tr);
        cond = U8(tr, 0x24) != 0;
    }
    if (cmd == 0xA3)      { extra_type = 2; cmd = next(tr); }
    else if (cmd == 0xA4) { extra_type = 4; cmd = next(tr); }
    else if (cmd == 0xA5) { extra_type = 5; cmd = next(tr); }
    if (cmd == 0xA0)      { cmd = next(tr); type = 4; has_type = 1; }
    else if (cmd == 0xA1) { cmd = next(tr); type = 5; has_type = 1; }

    if (!(cmd & 0x80)) {                                     /* note: key cmd, velocity, length */
        uint32_t vel = next(tr);
        if (!has_type) type = 3;
        int32_t len = (int32_t)func_0056EB4C(parser, cursor, player, tr, type);
        int32_t key = S8(tr, 0xF4) + (int32_t)cmd;
        if (!cond)
            return 0;
        if (U8(tr, 0x7A) == 0 && do_note_on) {
            uint32_t k = key < 0 ? 0 : key > 127 ? 127 : (uint32_t)key;   /* usat #7 */
            note_fn f = (note_fn)(uintptr_t)U32((uintptr_t)U32(parser, 0), 0xC);
            f(parser, tr, k, vel, len > 0 ? len : -1, S8(tr, 0x26));
        }
        if (U8(tr, 0x25)) {
            U32(tr, 0x7C) = (uint32_t)len;
            if (len == 0) U8(tr, 0x80) = 1;
        }
        return 0;
    }

    switch (cmd >> 4) {
    case 0x8:
        if (cmd == 0x88) {                                   /* open track: u8 track, 24-bit offset */
            uint32_t t = next(tr);
            uint32_t off = (uint32_t)next(tr) << 16;
            off |= (uint32_t)next(tr) << 8;
            off |= next(tr);
            if (cond) command(parser, tr, cmd, t, off);
            return 0;
        }
        if (cmd == 0x80) {                                   /* wait */
            if (!has_type) type = 3;
            uint32_t v = func_0056EB4C(parser, cursor, player, tr, type);
            if (cond) U32(tr, 0x7C) = v;
            return 0;
        }
        if (cmd == 0x81) {                                   /* program change */
            if (!has_type) type = 3;
            uint32_t v = func_0056EB4C(parser, cursor, player, tr, type);
            if (cond) command(parser, tr, cmd, v, 0);
            return 0;
        }
        if (cmd == 0x89 || cmd == 0x8A) {                    /* jump / call: 24-bit offset */
            uint32_t off = (uint32_t)next(tr) << 16;
            off |= (uint32_t)next(tr) << 8;
            off |= next(tr);
            if (cond) command(parser, tr, cmd, off, 0);
            return 0;
        }
        return 0;
    case 0x9:
        if (cond) command(parser, tr, cmd, 0, 0);
        return 0;
    case 0xA:
        return 0;
    case 0xB: case 0xC: case 0xD: {                         /* u8 argument (+ optional extra) */
        if (!has_type) type = 1;
        uint32_t v = func_0056EB4C(parser, cursor, player, tr, type) & 0xFF;
        if (extra_type)
            extra = func_0056EB4C(parser, cursor, player, tr, extra_type);
        if (!cond)
            return 0;
        uint32_t arg = (cmd == 0xC3 || cmd == 0xC4) ? (uint32_t)(int32_t)(int8_t)v : v;
        command(parser, tr, cmd, arg, extra);
        return 0;
    }
    case 0xE: {                                              /* s16 argument */
        if (!has_type) type = 2;
        uint32_t v = func_0056EB4C(parser, cursor, player, tr, type);
        if (cond) command(parser, tr, cmd, (uint32_t)(int32_t)(int16_t)v, 0);
        return 0;
    }
    default:                                                 /* 0xFx */
        if (cmd == 0xF0) {                                   /* extended command */
            uint32_t c2 = next(tr);
            uint32_t hi = c2 & 0xF0;
            if (hi == 0xA0 || hi == 0xB0) {
                uint32_t v = next(tr);
                if (cond) command(parser, tr, c2 + 0xF000, v, 0);
                return 0;
            }
            if (hi == 0xE0) {
                if (!has_type) type = 2;
                uint32_t v = func_0056EB4C(parser, cursor, player, tr, type) & 0xFFFF;
                if (cond) command(parser, tr, c2 + 0xF000, v, 0);
                return 0;
            }
            if (hi == 0x80 || hi == 0x90) {
                uint32_t var = next(tr);
                if (!has_type) type = 2;
                int32_t v = (int16_t)func_0056EB4C(parser, cursor, player, tr, type);
                if (cond) command(parser, tr, c2 + 0xF000, var, (uint32_t)v);
                return 0;
            }
            return 0;
        }
        if (cmd == 0xFE) {                                   /* allocate tracks: skip u16 */
            U32(tr, 0x20) += 2;
            return 0;
        }
        if (cmd == 0xFF)                                     /* end of track */
            return cond ? 1 : 0;
        if (cond) command(parser, tr, cmd, 0, 0);
        return 0;
    }
}
