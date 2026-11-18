#include "ghidra_types.h"

extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern float DAT_0036e7fc;

// USA 0036E740 <- EU 0036E71C (Ghidra, non-matching)
// GLOBAL DAT_0036e7fc float

undefined4 func_0036E740(byte *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  if ((*(int *)(param_1 + 100) == 0) ||
     (uVar2 = *(int *)(param_1 + 100) - 1, *(uint *)(param_1 + 100) = uVar2, uVar2 < 0x11)) {
    fVar6 = func_0036EAF8(param_1,param_2);
    fVar1 = DAT_0036e7fc;
    iVar3 = *(int *)(param_1 + 100);
    iVar4 = iVar3;
    if (iVar3 < 2) {
      iVar4 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_1 + 0x5c) + (fVar6 - *(float *)(param_1 + 0x5c)) * (DAT_0036e7fc / fVar7);
    iVar5 = iVar3;
    if (iVar3 < 2) {
      iVar5 = 1;
    }
    fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 4) =
         *(float *)(param_1 + 4) +
         (*(float *)(param_2 + 0x3d0) - *(float *)(param_1 + 4)) * (fVar1 / fVar6);
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0xc) +
         (*(float *)(param_2 + 0x3d8) - *(float *)(param_1 + 0xc)) * (fVar1 / fVar6);
    func_0051D39C((int *)(param_1 + 0x44),*(int *)(param_1 + 0x50),iVar3);
    if (*(int *)(param_1 + 100) == 0) {
      return func_0036E490(param_1,8,param_2);
    }
  }
  return 0;
}

