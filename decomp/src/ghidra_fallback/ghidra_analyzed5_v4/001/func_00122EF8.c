#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern float DAT_00122fc0;
extern float DAT_00122fc4;

// USA 00122EF8 <- EU 00122EF8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_00122fc0 float
// GLOBAL DAT_00122fc4 float

void func_00122EF8(int param_1,float *param_2,float *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x8f0) != 0) {
    *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8f0) + -1;
  }
  if (*(int *)(param_1 + 0x8f4) != 0) {
    *(int *)(param_1 + 0x8f4) = *(int *)(param_1 + 0x8f4) + -1;
  }
  if (*(int *)(param_1 + 0x8f0) == 0) {
    fVar4 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    *param_3 = fVar4;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar4)) {
      fVar4 = DAT_00122fc4;
    }
    *param_3 = fVar4;
    uVar3 = *(uint *)(param_1 + 0x8f4);
    if ((uVar3 != 0) && (uVar1 = *(uint *)(param_1 + 0x8f8), uVar3 <= uVar1)) {
      fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (float)VectorUnsignedToFloat(uVar1 - uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *param_3 = (fVar6 / fVar5) * fVar4;
    }
  }
  else {
    *param_3 = DAT_00122fc0;
  }
  iVar2 = func_004904CC(param_2[1],*param_2);
  *param_5 = iVar2 + 0x40000000;
  *param_4 = iVar2 + 0x40000000;
  return;
}

