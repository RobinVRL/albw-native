#include "ghidra_types.h"

extern float *DAT_004b0d84;
extern float DAT_004b0d88;

// USA 004B0CD8 <- EU 004B0CB0 (Ghidra, non-matching)
// GLOBAL DAT_004b0d84 float *
// GLOBAL DAT_004b0d88 float

undefined4 func_004B0CD8(int *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_004b0d88;
  pfVar1 = DAT_004b0d84;
  iVar3 = param_1[3] + 1;
  param_1[3] = iVar3;
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar3 < *param_1) {
    fVar6 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 / fVar6;
    fVar6 = fVar2;
    if ((fVar2 < fVar5) && (fVar6 = *pfVar1, (int)ALBW_AS_U32(fVar5) < 0x3f800000)) {
      fVar6 = fVar2 + *pfVar1 * fVar5;
    }
    *(float *)(param_2 + 0xc) = fVar6;
  }
  else {
    iVar4 = param_1[1];
    if (iVar3 < iVar4) {
      *(float *)(param_2 + 0xc) = *pfVar1;
    }
    else {
      if (param_1[2] <= iVar3) {
        *(float *)(param_2 + 0xc) = fVar2;
        return 0;
      }
      fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorSignedToFloat(param_1[2] - iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (fVar5 - fVar6) / fVar7;
      fVar6 = *pfVar1;
      fVar5 = fVar2;
      if ((fVar2 < fVar7) && (fVar5 = fVar6, (int)ALBW_AS_U32(fVar7) < 0x3f800000)) {
        fVar5 = fVar2 + fVar6 * fVar7;
      }
      *(float *)(param_2 + 0xc) = fVar6 - fVar5;
    }
  }
  return 1;
}

