#include "ghidra_types.h"

extern float DAT_00689fa0;

// USA 00689F5C <- EU 00689F34 (Ghidra, non-matching)
// GLOBAL DAT_00689fa0 float

void func_00689F5C(int param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00689fa0 <= fparam_0) << 0x1d;
  if (SUB41(uVar1 >> 0x1d,0)) {
    iVar2 = *(byte *)(param_1 + 3) - 1;
    fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    iVar4 = (int)(fparam_0 * fVar3);
    if (iVar4 < iVar2) {
      fVar3 = param_2[iVar4];
      fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(uVar1 >> 0x15) & 3);
      fVar3 = fVar3 + ((param_2 + iVar4)[1] - fVar3) * (fparam_0 * fVar5 - fVar6);
    }
    else {
      fVar3 = param_2[iVar4];
    }
  }
  else {
    fVar3 = *param_2;
  }
  return;
}

