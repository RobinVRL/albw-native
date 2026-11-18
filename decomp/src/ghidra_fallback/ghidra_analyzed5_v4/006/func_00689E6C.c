#include "ghidra_types.h"

extern float DAT_00689f20;
extern float DAT_00689f24;
extern float DAT_00689f28;
extern float DAT_00689f2c;
extern float DAT_00689f30;

// USA 00689E6C <- EU 00689E44 (Ghidra, non-matching)
// GLOBAL DAT_00689f20 float
// GLOBAL DAT_00689f24 float
// GLOBAL DAT_00689f28 float
// GLOBAL DAT_00689f2c float
// GLOBAL DAT_00689f30 float

void func_00689E6C(int param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = DAT_00689f20;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00689f20 <= fparam_0) << 0x1d;
    if (SUB41(uVar1 >> 0x1d,0)) {
      iVar3 = (*(byte *)(param_1 + 3) >> 1) - 1;
      fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
      pfVar4 = (float *)(int)(fparam_0 * fVar6);
      pfVar2 = pfVar4;
      if (iVar3 <= (int)pfVar4) {
        pfVar2 = param_2 + (int)pfVar4 * 2;
      }
      fVar6 = (float)VectorSignedToFloat(pfVar4,(byte)(uVar1 >> 0x15) & 3);
      fVar6 = fparam_0 * fVar5 - fVar6;
      if ((int)pfVar4 < iVar3) {
        pfVar2 = param_2 + (int)pfVar2 * 2;
        fVar5 = fVar6 * fVar6 * fVar6;
        fVar5 = *pfVar2 * ((fVar6 * DAT_00689f24 * fVar6 * fVar6 - fVar6 * DAT_00689f2c * fVar6) +
                          DAT_00689f30) +
                pfVar2[2] * (fVar6 * DAT_00689f28 * fVar6 * fVar6 + fVar6 * DAT_00689f2c * fVar6) +
                pfVar2[1] * ((fVar5 - fVar6 * DAT_00689f24 * fVar6) + fVar6) +
                pfVar2[3] * (fVar5 - fVar6 * fVar6);
      }
      else {
        fVar5 = *pfVar2;
      }
    }
    else {
      fVar5 = *param_2;
    }
  }
  return;
}

