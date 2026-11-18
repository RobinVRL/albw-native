#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);

// USA 001E5DA8 <- EU 001E5DA8 (Ghidra, non-matching)

void func_001E5DA8(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x4ac) == '\0') {
    pfVar2 = (float *)(param_1 + 0x478);
    *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x478);
    *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x47c);
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x480);
    fVar3 = *pfVar2 - *(float *)(param_1 + 0x490);
    fVar5 = *(float *)(param_1 + 0x480) - *(float *)(param_1 + 0x498);
    if (fVar3 * fVar3 + fVar5 * fVar5 <
        *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
        *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) {
      *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x490);
      *(float *)(param_1 + 0x480) = *(float *)(param_1 + 0x498);
    }
    else {
      func_00115C70(pfVar2,pfVar2,(float *)(param_1 + 0x3dc));
    }
    fVar3 = *(float *)(param_1 + 0x498);
    fVar4 = *(float *)(param_1 + 0x480);
    fVar6 = *(float *)(param_1 + 0x4a4);
    fVar5 = fVar3;
    if ((fVar3 <= fVar4) && (fVar5 = fVar4, fVar6 < fVar4)) {
      fVar5 = fVar6;
    }
    *(float *)(param_1 + 0x480) = fVar5;
    fVar5 = *(float *)(param_1 + 0x48c);
    if ((fVar3 <= fVar5) && (fVar3 = fVar5, fVar6 < fVar5)) {
      fVar3 = fVar6;
    }
    *(float *)(param_1 + 0x48c) = fVar3;
    iVar1 = *(int *)(param_1 + 0x40c);
    *(float *)(iVar1 + 4) = *pfVar2;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x47c);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x480);
  }
  return;
}

