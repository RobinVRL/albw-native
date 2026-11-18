#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int DAT_0021961c;
extern float DAT_00219620;
extern int DAT_00219624;
extern float DAT_00219628;
extern int DAT_0021962c;

// USA 00219548 <- EU 00219548 (Ghidra, non-matching)
// GLOBAL DAT_0021961c int
// GLOBAL DAT_00219620 float
// GLOBAL DAT_00219624 int
// GLOBAL DAT_00219628 float
// GLOBAL DAT_0021962c int

float func_00219548(int param_1,float fparam_0)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x8d8),DAT_0021961c >> 2,DAT_0021961c,
                DAT_00219620);
  *(int *)(param_1 + 0x8dc) = DAT_00219624 + *(int *)(param_1 + 0x8dc);
  uVar3 = func_0058E2B8((int *)(param_1 + 0x8dc));
  iVar2 = DAT_0021962c;
  fVar1 = DAT_00219628;
  *(uint *)(param_1 + 0x8dc) = uVar3;
  fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar4 = (float *)(iVar2 + (uVar3 >> 0x18) * 0x10);
  uVar3 = *(uint *)(param_1 + 1000);
  pfVar5 = (float *)(iVar2 + (uVar3 >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fparam_0 * (*pfVar4 + pfVar4[1] * fVar6 * fVar1);
  *(float *)(param_1 + 0x3dc) = (*pfVar5 + pfVar5[1] * fVar7 * fVar1) * fVar6;
  fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3e4) = (pfVar5[2] + pfVar5[3] * fVar7 * fVar1) * fVar6;
  return fVar6;
}

