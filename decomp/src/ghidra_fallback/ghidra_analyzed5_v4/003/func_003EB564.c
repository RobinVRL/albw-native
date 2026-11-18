#include "ghidra_types.h"

extern float DAT_003eb70c;
extern int DAT_003eb710;
extern float DAT_003eb714;
extern float DAT_003eb718;

// USA 003EB564 <- EU 003EB544 (Ghidra, non-matching)
// GLOBAL DAT_003eb70c float
// GLOBAL DAT_003eb710 int
// GLOBAL DAT_003eb714 float
// GLOBAL DAT_003eb718 float

uint * func_003EB564(undefined4 param_1,int param_2,uint *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = DAT_003eb718;
  fVar2 = DAT_003eb714;
  pfVar4 = (float *)(DAT_003eb710 + (*param_3 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(*param_3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = param_3[1];
  fVar7 = *pfVar4 + pfVar4[1] * fVar6 * DAT_003eb70c;
  fVar6 = pfVar4[2] + pfVar4[3] * fVar6 * DAT_003eb70c;
  if (uVar5 == 0) {
    fVar9 = ALBW_AS_F32(param_3[2]);
    bVar1 = fVar9 != DAT_003eb718;
    fVar8 = *(float *)(param_2 + 0xc) * fVar6 + *(float *)(param_2 + 0x10) * fVar7;
    fVar6 = *(float *)(param_2 + 0x10) * fVar6 - *(float *)(param_2 + 0xc) * fVar7;
    *(float *)(param_2 + 0xc) = fVar8;
    *(float *)(param_2 + 0x10) = fVar6;
    if ((bVar1) && (fVar7 = fVar8 * fVar8 + fVar6 * fVar6, fVar3 < fVar7)) {
      fVar9 = (fVar2 / SQRT(fVar7)) * fVar9;
      *(float *)(param_2 + 0xc) = fVar8 + fVar8 * fVar9;
      *(float *)(param_2 + 0x10) = fVar6 + fVar6 * fVar9;
      return param_3 + 3;
    }
  }
  else if (uVar5 == 1) {
    fVar9 = ALBW_AS_F32(param_3[2]);
    bVar1 = fVar9 != DAT_003eb718;
    fVar8 = *(float *)(param_2 + 0x10) * fVar6 + *(float *)(param_2 + 8) * fVar7;
    fVar6 = *(float *)(param_2 + 8) * fVar6 - *(float *)(param_2 + 0x10) * fVar7;
    *(float *)(param_2 + 0x10) = fVar8;
    *(float *)(param_2 + 8) = fVar6;
    if ((bVar1) && (fVar7 = fVar8 * fVar8 + fVar6 * fVar6, fVar3 < fVar7)) {
      fVar9 = (fVar2 / SQRT(fVar7)) * fVar9;
      *(float *)(param_2 + 0x10) = fVar8 + fVar8 * fVar9;
      *(float *)(param_2 + 8) = fVar6 + fVar6 * fVar9;
    }
  }
  else if (uVar5 == 2) {
    fVar9 = ALBW_AS_F32(param_3[2]);
    bVar1 = fVar9 != DAT_003eb718;
    fVar8 = *(float *)(param_2 + 8) * fVar6 + *(float *)(param_2 + 0xc) * fVar7;
    fVar6 = *(float *)(param_2 + 0xc) * fVar6 - *(float *)(param_2 + 8) * fVar7;
    *(float *)(param_2 + 8) = fVar8;
    *(float *)(param_2 + 0xc) = fVar6;
    if ((bVar1) && (fVar7 = fVar8 * fVar8 + fVar6 * fVar6, fVar3 < fVar7)) {
      fVar9 = (fVar2 / SQRT(fVar7)) * fVar9;
      *(float *)(param_2 + 8) = fVar8 + fVar8 * fVar9;
      *(float *)(param_2 + 0xc) = fVar6 + fVar6 * fVar9;
    }
  }
  return param_3 + 3;
}

