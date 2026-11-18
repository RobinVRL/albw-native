#include "ghidra_types.h"


// USA 0054E3D8 <- EU 0054E3B0 (Ghidra, non-matching)

void func_0054E3D8(int *param_1,float *param_2,int param_3,float fparam_0)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = fparam_0;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar2 = pfVar1[2];
  if (param_3 == 0) {
    fparam_0 = fVar2;
  }
  param_2[2] = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar4;
  if (param_3 != 0) {
    if (param_3 == 1) {
      fVar3 = fVar3 + fVar5;
    }
    else {
      if (param_3 == 2) {
        fVar5 = fVar2 - fVar5;
        goto LAB_0054e42c;
      }
      if (param_3 != 3) {
        return;
      }
      fVar3 = fVar3 - fVar5;
    }
    *param_2 = fVar3;
    return;
  }
  fVar5 = fparam_0 + fVar5;
LAB_0054e42c:
  param_2[2] = fVar5;
  return;
}

