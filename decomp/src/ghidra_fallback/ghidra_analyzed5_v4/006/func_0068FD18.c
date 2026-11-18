#include "ghidra_types.h"

extern float func_00566F70(float *param_1,float fparam_0);
extern float DAT_0068fdd0;

// USA 0068FD18 <- EU 0068FCF0 (Ghidra, non-matching)
// GLOBAL DAT_0068fdd0 float

void func_0068FD18(float *param_1,float *param_2,float fparam_0)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  
  fVar4 = func_00566F70(param_1,fparam_0);
  fVar4 = fVar4 - *param_1;
  iVar5 = VectorFloatToUnsigned(fVar4,3);
  fVar6 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar4 - fVar6;
  if (fVar6 == DAT_0068fdd0) {
    pfVar1 = (float *)((int)ALBW_AS_U32(param_1[3]) + iVar5 * 0xc);
    fVar4 = *pfVar1;
    fVar6 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = fVar4;
    param_2[1] = fVar6;
    return;
  }
  fVar3 = param_1[3];
  if (param_1[1] == fVar4) {
    pfVar1 = (float *)(iVar5 * 0xc + 0xc + (int)ALBW_AS_U32(fVar3));
    fVar4 = *pfVar1;
    fVar6 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = fVar4;
    param_2[1] = fVar6;
    return;
  }
  pfVar1 = (float *)((int)ALBW_AS_U32(fVar3) + iVar5 * 0xc);
  pfVar2 = (float *)(iVar5 * 0xc + 0xc + (int)ALBW_AS_U32(fVar3));
  *param_2 = *pfVar1 + fVar6 * (*pfVar2 - *pfVar1);
  param_2[1] = pfVar1[1] + fVar6 * (pfVar2[1] - pfVar1[1]);
  param_2[2] = pfVar1[2] + fVar6 * (pfVar2[2] - pfVar1[2]);
  return;
}

