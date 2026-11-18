#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int DAT_0015185c;
extern undefined4 *DAT_00151860;
extern float DAT_00151864;
extern int *DAT_00151868;
extern undefined4 DAT_0015186c;

// USA 00151788 <- EU 00151788 (Ghidra, non-matching)
// GLOBAL DAT_0015185c int
// GLOBAL DAT_00151860 undefined4 *
// GLOBAL DAT_00151864 float
// GLOBAL DAT_00151868 int *
// GLOBAL DAT_0015186c undefined4

void func_00151788(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  func_00588C14(param_1,0,1);
  if (-1 < *(int *)(param_1 + 0x43c)) {
    *(undefined4 *)(param_1 + 0x444) =
         **(undefined4 **)(DAT_0015185c + *(int *)(param_1 + 0x43c) * 8 + 4);
  }
  puVar3 = (uint *)*DAT_00151860;
  uVar2 = func_00111A64(puVar3);
  *(int *)(param_1 + 0x430) = (int)((ulonglong)uVar2 * 0x1e >> 0x20) + 0xf;
  fVar7 = *(float *)(param_1 + 0x14);
  fVar5 = fVar7 + fVar7;
  uVar2 = func_00111A64(puVar3);
  fVar6 = DAT_00151864;
  fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d0) = fVar4 * DAT_00151864 * fVar5 - fVar7;
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar5 = fVar7 + fVar7;
  uVar2 = func_00111A64(puVar3);
  piVar1 = DAT_00151868;
  fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d8) = fVar4 * fVar6 * fVar5 - fVar7;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),*(float **)(*piVar1 + 0x1c));
  *(undefined4 *)(param_1 + 0x3d4) = DAT_0015186c;
  return;
}

