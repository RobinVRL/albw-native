#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern float DAT_0054d0d4;
extern float DAT_0054d0d8;
extern int *DAT_0054d0dc;

// USA 0054D04C <- EU 0054D024 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_0054d0d4 float
// GLOBAL DAT_0054d0d8 float
// GLOBAL DAT_0054d0dc int *

void func_0054D04C(int param_1,float *param_2,float *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = DAT_0054d0d4;
  if (*(int *)(param_1 + 0x18) == 0) {
    fVar4 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    *param_3 = fVar4;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar4)) {
      fVar4 = DAT_0054d0d8;
    }
    *param_3 = fVar4;
    uVar3 = *(uint *)(param_1 + 0x1c);
    if ((uVar3 == 0) || (uVar1 = *(uint *)(param_1 + 0x20), uVar1 < uVar3)) goto LAB_0054d0a0;
    fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorUnsignedToFloat(uVar1 - uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (fVar6 / fVar5) * fVar4;
  }
  *param_3 = fVar4;
LAB_0054d0a0:
  iVar2 = func_004904CC(param_2[1],*param_2);
  *param_5 = iVar2 + 0x40000000;
  *param_4 = *(int *)(*(int *)(*DAT_0054d0dc + 0x18) + 0x1a8) + *param_5;
  return;
}

