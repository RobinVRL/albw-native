#include "ghidra_types.h"

extern void func_0036DEC8(undefined1 *param_1,float *param_2,int param_3);

// USA 0032C750 <- EU 0032C72C (Ghidra, non-matching)

void func_0032C750(int param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  uVar1 = 1 << (param_3 & 0xff);
  pfVar4 = (float *)(param_1 + 4) + param_3 * 3;
  if ((*(uint *)(param_1 + 200) & uVar1) != 0) {
    if (2 < param_3) {
      pfVar4 = (float *)(param_1 + 4);
    }
    fVar2 = pfVar4[1];
    fVar3 = pfVar4[2];
    *param_2 = *pfVar4;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    return;
  }
  func_0036DEC8((undefined1 *)(param_1 + 0x34),param_2,param_3);
  if (2 < param_3) {
    pfVar4 = (float *)(param_1 + 4);
  }
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *pfVar4 = *param_2;
  pfVar4[1] = fVar2;
  pfVar4[2] = fVar3;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | uVar1;
  return;
}

