#include "ghidra_types.h"

extern int *DAT_004dd2a0;
extern float DAT_004dd2a4;
extern float DAT_004dd2a8;

// USA 004DD20C <- EU 004DD1E4 (Ghidra, non-matching)
// GLOBAL DAT_004dd2a0 int *
// GLOBAL DAT_004dd2a4 float
// GLOBAL DAT_004dd2a8 float

/* WARNING: Type propagation algorithm not settling */

undefined4 func_004DD20C(undefined4 param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = *(int *)(*DAT_004dd2a0 + 0x18);
  uVar3 = 0;
  if (iVar2 != 0) {
    fVar4 = *param_2 - *(float *)(iVar2 + 0x1b0);
    fVar5 = param_2[2] - *(float *)(iVar2 + 0x1b8);
    fVar1 = DAT_004dd2a8;
    if (param_3 != 0) {
      fVar1 = DAT_004dd2a4;
    }
    if (((((uint)ALBW_AS_U32(fVar4) <= (uint)ALBW_AS_U32(fVar1)) && ((int)ALBW_AS_U32(fVar4) <= (int)((int)ALBW_AS_U32(fVar1) + 0x80000000U))) &&
        ((uint)ALBW_AS_U32(fVar5) <= (uint)ALBW_AS_U32(fVar1))) && ((int)ALBW_AS_U32(fVar5) <= (int)((int)ALBW_AS_U32(fVar1) + 0x80000000U))) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

