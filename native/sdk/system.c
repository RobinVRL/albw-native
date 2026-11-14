/* Native replacements for SDK functions that read the 3DS kernel's configuration/shared pages
 * (fixed hardware addresses 0x1FF80000 / 0x1FF81000, which do not exist on a PC). Each returns
 * what the function means for a retail console. Literal-pool users of those pages (EU = USA in this
 * range): 0010229C (memory.c), 0010246C/001024DC (here), 0010A9F4 (os.c), 003DB628, 003DBBFC,
 * 003DE15C, 003DFD08, 003E27A4, 003E2ADC, 003E2E40, 00564698 (to do as the boot reaches them). */
#include <stdint.h>

/* USA 00102470: if UNITINFO bit 0 (config page +0x14) is clear, read system setting block 0x130000
 * and return its byte 2; otherwise 0. The caller (00101300) multiplies it by 10 and stores it as a
 * delay. Retail console: no such setting -> 0. Signature from Ghidra (3 pass-through args). */
uint32_t func_00102470(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return 0;
}

/* USA 001023F8: same check as 00102470, returns bit 0 of byte 1 of setting block 0x130000.
 * Retail console: 0 (flag off). */
uint32_t func_001023F8(uint32_t a, uint32_t b, uint32_t c) {
    (void)a; (void)b; (void)c;
    return 0;
}

/* 3D slider (shared page 0x1FF81080 float, 0x1FF81084 u8 3D-LED state), read inline by the stereo
 * camera code (003E27CC: if LED byte == 0 the slider value replaces `keep`). A PC shows one image:
 * slider at 0 (no parallax), as a 3DS with the slider down. */
float albw_3d_slider(float keep) {
    (void)keep;
    return 0.0f;
}
