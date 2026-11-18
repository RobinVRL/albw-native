#include "ghidra_types.h"

extern int func_004FB0A4(int param_1,float fparam_0);
extern int *DAT_0065561c;
extern float DAT_00655620;
extern float DAT_00655624;
extern float DAT_00655628;
extern float DAT_0065562c;

// USA 0065558C <- EU 00655564 (Ghidra, non-matching)
// GLOBAL DAT_0065561c int *
// GLOBAL DAT_00655620 float
// GLOBAL DAT_00655624 float
// GLOBAL DAT_00655628 float
// GLOBAL DAT_0065562c float

undefined4 func_0065558C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  piVar1 = (int *)(*(int *)(*DAT_0065561c + 0x3dbe8) + 0x10);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (iVar2 == *(int *)(param_1 + 0x2cc))) {
    *piVar1 = 0;
  }
  if (param_2 != 0) {
    return func_004FB0A4(param_1,DAT_00655620);
  }
  fVar4 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x8bc);
  fVar3 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x8c4);
  fVar4 = DAT_00655624 - SQRT(fVar4 * fVar4 + fVar3 * fVar3) * DAT_00655628;
  fVar3 = DAT_00655620;
  if ((DAT_00655620 <= fVar4) && (fVar3 = fVar4, 0x3f800000 < (int)ALBW_AS_U32(fVar4))) {
    fVar3 = DAT_00655624;
  }
  *(short *)(param_1 + 0x8e4) = (short)(int)(fVar3 * DAT_0065562c) + 0x3c;
  return 0;
}

