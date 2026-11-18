#include "ghidra_types.h"

extern int func_004FB0A4(int param_1,float fparam_0);
extern int *DAT_00654668;
extern float DAT_0065466c;
extern float DAT_00654670;
extern float DAT_00654674;
extern float DAT_00654678;

// USA 006545D8 <- EU 006545B0 (Ghidra, non-matching)
// GLOBAL DAT_00654668 int *
// GLOBAL DAT_0065466c float
// GLOBAL DAT_00654670 float
// GLOBAL DAT_00654674 float
// GLOBAL DAT_00654678 float

undefined4 func_006545D8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  piVar1 = (int *)(*(int *)(*DAT_00654668 + 0x3dbe8) + 0x10);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (iVar2 == *(int *)(param_1 + 0x2cc))) {
    *piVar1 = 0;
  }
  if (param_2 != 0) {
    return func_004FB0A4(param_1,DAT_0065466c);
  }
  fVar4 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x8bc);
  fVar3 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x8c4);
  fVar4 = DAT_00654670 - SQRT(fVar4 * fVar4 + fVar3 * fVar3) * DAT_00654674;
  fVar3 = DAT_0065466c;
  if ((DAT_0065466c <= fVar4) && (fVar3 = fVar4, 0x3f800000 < (int)ALBW_AS_U32(fVar4))) {
    fVar3 = DAT_00654670;
  }
  *(short *)(param_1 + 0x8e4) = (short)(int)(fVar3 * DAT_00654678) + 0x3c;
  return 0;
}

