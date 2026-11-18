#include "ghidra_types.h"

extern int func_0028C788(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern float DAT_0028c324;
extern float DAT_0028c328;
extern int DAT_0028c32c;
extern float DAT_0028c330;
extern int DAT_0028c334;
extern float DAT_0028c338;
extern int *DAT_0028c33c;

// USA 0028C1B0 <- EU 0028C1D8 (Ghidra, non-matching)
// GLOBAL DAT_0028c324 float
// GLOBAL DAT_0028c328 float
// GLOBAL DAT_0028c32c int
// GLOBAL DAT_0028c330 float
// GLOBAL DAT_0028c334 int
// GLOBAL DAT_0028c338 float
// GLOBAL DAT_0028c33c int *

void func_0028C1B0(int param_1)

{
  float *pfVar1;
  undefined4 in_r3;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0xf8) != -1) {
    local_20 = in_r3;
    if (*(int *)(param_1 + 0xf8) - 5U < 0x24) {
      pfVar1 = (float *)(DAT_0028c334 + (*(uint *)(param_1 + 0xf4) >> 0x18) * 0x10);
      iVar2 = 0;
      fVar5 = (float)VectorUnsignedToFloat
                               (*(uint *)(param_1 + 0xf4) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      uVar4 = VectorFloatToUnsigned
                        ((DAT_0028c328 + (*pfVar1 + pfVar1[1] * fVar5 * DAT_0028c330) * DAT_0028c324
                         ) * DAT_0028c338,3);
      local_20 = CONCAT13((char)uVar4,
                          CONCAT12(*(undefined1 *)(DAT_0028c32c + 1),
                                   CONCAT11(*(undefined1 *)(DAT_0028c32c + 2),
                                            *(undefined1 *)(DAT_0028c32c + 3))));
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
      if (0 < iVar3) {
        do {
          func_004CF5DC(*(int *)(param_1 + 0x10),iVar2,2,&local_20);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
    }
    *(int *)(param_1 + 0xf4) = *DAT_0028c33c + *(int *)(param_1 + 0xf4);
    iVar2 = *(int *)(param_1 + 0xf8) + 1;
    *(int *)(param_1 + 0xf8) = iVar2;
    if (0x28 < iVar2) {
      iVar2 = 0;
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x20) + 4);
      if (0 < iVar3) {
        do {
          func_004CF5DC(*(int *)(param_1 + 0x10),iVar2,2,(undefined4 *)(param_1 + 0x110));
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
      func_0028C788(param_1,0);
      *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
    }
  }
  return;
}

