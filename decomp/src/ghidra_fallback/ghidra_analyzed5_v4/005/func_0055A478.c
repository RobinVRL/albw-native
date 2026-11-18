#include "ghidra_types.h"

extern int func_00494EAC(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_0057D258(int *param_1);
extern float DAT_0055a4fc;
extern float DAT_0055a500;

// USA 0055A478 <- EU 0055A450 (Ghidra, non-matching)
// GLOBAL DAT_0055a4fc float
// GLOBAL DAT_0055a500 float

void func_0055A478(int param_1,int param_2,int param_3,float fparam_0,float fparam_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_1 + 0x5fc);
  }
  else {
    piVar1 = (int *)(param_1 + 0x528);
  }
  pfVar2 = (float *)func_0057D258(piVar1);
  fVar5 = pfVar2[0xb] / pfVar2[10];
  fVar4 = (fVar5 * (pfVar2[2] + DAT_0055a4fc)) / *pfVar2;
  fVar3 = (fVar5 * (pfVar2[6] + DAT_0055a4fc)) / pfVar2[5];
  fVar6 = fparam_0 / fVar5;
  func_00494EAC(param_2,fVar6 * fVar3,fVar6 * (fVar3 - (fVar5 * DAT_0055a500) / pfVar2[5]),
                fVar6 * (fVar4 - (fVar5 * DAT_0055a500) / *pfVar2),fVar6 * fVar4);
  *(float *)(param_2 + 0x94) = fparam_0;
  *(undefined1 *)(param_2 + 4) = 1;
  *(float *)(param_2 + 0x98) = fparam_1;
  return;
}

