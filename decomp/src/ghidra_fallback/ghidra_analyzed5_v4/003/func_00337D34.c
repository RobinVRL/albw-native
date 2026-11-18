#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_00337df8;
extern int DAT_00337dfc;
extern float DAT_00337e00;

// USA 00337D34 <- EU 00337D10 (Ghidra, non-matching)
// GLOBAL DAT_00337df8 float
// GLOBAL DAT_00337dfc int
// GLOBAL DAT_00337e00 float

undefined4 func_00337D34(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  local_28 = *(float *)(param_1 + 0x3d0);
  local_24 = *(int *)(param_1 + 0x3d4);
  local_20 = *(int *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x788);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),&local_28);
  func_004CEAF0(*(int *)(param_1 + 0x788));
  uVar2 = *(uint *)(param_1 + 1000);
  pfVar3 = (float *)(DAT_00337dfc + (uVar2 >> 0x18) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  piVar4 = *(int **)(param_1 + 0x40c);
  uStack_18 = *(undefined4 *)(param_1 + 0x790);
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = (*pfVar3 + pfVar3[1] * fVar5 * DAT_00337df8) * DAT_00337e00;
  fStack_14 = (pfVar3[2] + pfVar3[3] * fVar6 * DAT_00337df8) * DAT_00337e00;
  func_00115C54(&local_28,&local_28,&local_1c);
  piVar4[1] = (int)ALBW_AS_U32(local_28);
  piVar4[2] = local_24;
  piVar4[3] = local_20;
  return func_004356B4(piVar4);
}

