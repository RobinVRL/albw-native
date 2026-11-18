#include "ghidra_types.h"

extern float DAT_00550048;
extern int DAT_0055004c;

// USA 0054FF8C <- EU 0054FF64 (Ghidra, non-matching)
// GLOBAL DAT_00550048 float
// GLOBAL DAT_0055004c int

undefined4 func_0054FF8C(int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = DAT_0055004c;
  fVar1 = DAT_00550048;
  *param_2 = DAT_00550048;
  param_2[1] = fVar1;
  param_2[2] = fVar1;
  fVar3 = *(float *)(param_1 + 0x18) * *(float *)(param_3 + 0x20) -
          *(float *)(param_3 + 0x18) * *(float *)(param_1 + 0x20);
  fVar5 = fVar3;
  if (fVar3 <= fVar1) {
    fVar5 = -fVar3;
  }
  if ((int)ALBW_AS_U32(fVar5) < iVar2) {
    return 0;
  }
  fVar3 = (*(float *)(param_3 + 0x18) * *(float *)(param_1 + 0x24) -
          *(float *)(param_1 + 0x18) * *(float *)(param_3 + 0x24)) / fVar3;
  param_2[2] = fVar3;
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = fVar4;
  if (fVar4 <= fVar1) {
    fVar5 = -fVar4;
  }
  if ((int)ALBW_AS_U32(fVar5) < iVar2) {
    fVar4 = *(float *)(param_3 + 0x18);
    fVar5 = fVar4;
    if (fVar4 <= fVar1) {
      fVar5 = -fVar4;
    }
    if ((int)ALBW_AS_U32(fVar5) < iVar2) {
      return 0;
    }
    *param_2 = (-*(float *)(param_3 + 0x24) + -(*(float *)(param_3 + 0x20) * fVar3)) / fVar4;
  }
  else {
    *param_2 = (-*(float *)(param_1 + 0x24) + -(*(float *)(param_1 + 0x20) * fVar3)) / fVar4;
  }
  return 1;
}

