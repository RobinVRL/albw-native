/* USA 00171510 (EU 00171510): draw the wall painting strip (Link or Yuga merged into a wall).
 * Draw item of the painting model (class at 0x30035B14; native/PAINTING.md).
 *
 *   if the model is visible and its strip has triangles:
 *     1. material setup (001708A0, as for any model); its texture = the flat-Link render texture
 *     2. the model matrix (model +0x1F0, 3x4) -> float uniforms from register *(+0x98)+0x1A
 *     3. patch the strip's command block: vertex count = triangles * 3, one more word from +0x1E4
 *     4. CALL the strip's command block (built by the wall walker, translated by the renderer:
 *        sdk/h3d.c h3d_translate_call)
 *
 * Port fix: step 2 was written as raw GPU words (0x2C0 = 0x80000000 | reg, then 12 words to
 * 0x2C1 from 001150CC). The port's renderer runs only recorded ops, so the strip was drawn with
 * whatever matrix the previous draw left. Here the matrix is recorded as a uniform op, like the
 * other model draws (sdk/h3d.c 00170558). Everything else follows the ARM (EU 171510..171664).
 * Port addition: h3d_texture_word_check before step 1 (the material was re-pointed after load). */
#include "ghidra_types.h"

extern int func_001708A0(int param_1, int *param_2, int param_3);
extern int func_003CC1E4(undefined4 *param_1, uint param_2);
extern int func_003CC230(uint *param_1, undefined4 *param_2, int param_3, uint param_4);
uint h3d_rec_matrix34(uint cmd, int reg, uint mtx);
void h3d_texture_word_check(uint word);

undefined4 func_00171510(int *param_1, undefined4 param_2, int *param_3, int param_4) {
    int ret_slot = param_4;   /* [sp]: 003CC230 stores the CALL's return slot here */
    (void)param_2;
    int model = param_1[0x2B];   /* the painting model ("m8") */
    if (!(**(code **)(*param_1 + 0x10))(param_1) || **(int **)(model + 0x178) * 3 == 0)
        return 0;   /* hidden, or no triangles this frame */

    /* 1. material. Its texture block was pointed at the flat-Link render texture after load
     * (002D175C writes the word at *(model + 0x1E8)): update the decoded block when it changed */
    h3d_texture_word_check(*(uint *)(model + 0x1E8));
    func_001708A0((int)param_1, param_3, 1);

    /* 2. model matrix -> uniforms (recorded op instead of raw words) */
    int reg = *(byte *)(param_1[0x26] + 0x1A);
    *param_3 = (int)h3d_rec_matrix34((uint)*param_3, reg, (uint)(model + 0x1F0));

    /* 3. the strip buffer drawn this frame (two buffers of 0x28 bytes at +0x17C, index +0x1CC) */
    int buf = model + 0x17C;
    if (*(uint *)(model + 0x1CC) < 2) buf += *(uint *)(model + 0x1CC) * 0x28;
    **(int **)(buf + 0x1C) = **(int **)(model + 0x178) * 3;            /* vertex count word */
    **(undefined4 **)(buf + 0x18) = **(undefined4 **)(model + 0x1E4);  /* bool uniforms word */

    /* 4. CALL the strip's command block (+0x20, +0x24 = size in 8-byte units) */
    int block = *(int *)(buf + 0x20), size8 = *(int *)(buf + 0x24);
    if (block != 0) {
        uint *p = (uint *)func_003CC1E4((undefined4 *)*param_3, (*param_3 - param_3[2] & 0xFFFFFFFCU) + 0x18);
        *param_3 = (int)p;
        p = (uint *)func_003CC230(p, (undefined4 *)&ret_slot, block, size8 << 2);
        *param_3 = (int)p;
        if ((uint *)param_3[3] != (uint *)0x0)
            *(uint *)param_3[3] = (uint)((int)p - param_3[2]) >> 3;
        param_3[2] = *param_3;
        param_3[3] = ret_slot;
        if (param_3[4] == 0)
            param_3[4] = *param_3 - param_3[1] & 0xFFFFFFFC;
    }
    return 1;
}
