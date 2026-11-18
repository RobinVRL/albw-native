#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float DAT_00183ae0;
extern int DAT_00183ae4;

// USA 00183A34 <- EU 00183A34 (Ghidra, non-matching)
// GLOBAL DAT_00183ae0 float
// GLOBAL DAT_00183ae4 int

void func_00183A34(int param_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
  uVar1 = *(uint *)(param_1 + 0x9d0);
  pfVar2 = (float *)(DAT_00183ae4 + (uVar1 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_20 = *pfVar2 + pfVar2[1] * fVar3 * DAT_00183ae0 + *(float *)(param_1 + 0x3d0);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_18 = pfVar2[2] + pfVar2[3] * fVar3 * DAT_00183ae0 + *(float *)(param_1 + 0x3d8);
  func_00115C70(&local_14,&local_20,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x9ac) = local_14;
  *(undefined4 *)(param_1 + 0x9b0) = local_10;
  *(undefined4 *)(param_1 + 0x9b4) = local_c;
  return;
}

