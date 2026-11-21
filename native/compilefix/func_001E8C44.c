/* USA 001E8C44: forwards to the scene's wall-walk helper (*(this+0x1C8)+0xE34, virtual +0x20; e.g.
 * 0034F08C, the merged-wall camera point) with the caller's arguments. On ARM it is a tail jump
 * that leaves r1 / r2 as they are; Ghidra's text passed only the object, so the helper took a
 * stack leftover as its output pointer and wrote 0 through it - in slot 1 that was the camera
 * holder (00708998): the camera vanished and the next read crashed (160be, walking left to a
 * wall end while merged). Confidence: high (tail call, same argument registers). */
#include <stdio.h>
#include <stdlib.h>
typedef unsigned int u32;
typedef u32 (*WallFn)(int *self, u32 a, u32 b);

u32 func_001E8C44(int param_1, u32 param_2, u32 param_3)
{
    int *obj = *(int **)(*(int *)(param_1 + 0x1c8) + 0xe34);
    u32 r = ((WallFn)(*(u32 **)obj)[0x20 / 4])(obj, param_2, param_3);
    static int tr = -1;
    if (tr < 0) tr = getenv("ALBW_CAMWALL_TRACE") != NULL;
    if (tr) {
        float *p = (float *)param_2;
        char *o = (char *)obj;
        fprintf(stderr, "camwall: helper %08x out (%.3f %.3f %.3f) delta %d dir (%.3f %.3f) mode %d at38 %d\n",
                (*(u32 **)obj)[0x20 / 4], p[0], p[1], p[2], *(int *)param_3,
                *(float *)(o + 0x284), *(float *)(o + 0x28c), *(unsigned char *)(o + 0x26a), *(int *)(o + 0x38));
    }
    return r;
}
