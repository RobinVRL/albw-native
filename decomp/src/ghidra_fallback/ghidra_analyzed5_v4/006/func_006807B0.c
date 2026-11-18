#include "ghidra_types.h"

extern float func_0056F3E4(int param_1);
extern float func_0056F43C(int param_1);
extern float func_0069141C(int param_1);
extern float DAT_00680930;

// USA 006807B0 <- EU 00680788 (Ghidra, non-matching)
// GLOBAL DAT_00680930 float

undefined4 func_006807B0(undefined4 param_1,float *param_2,int param_3,int *param_4,float fparam_0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  fVar9 = DAT_00680930;
  if (param_3 != 9) {
    if (param_3 == 10) {
      iVar2 = *param_4;
      param_2[2] = *(float *)(iVar2 + 0x10);
      param_2[1] = *(float *)(iVar2 + 0x14);
      iVar3 = *param_4;
      iVar10 = param_4[3];
      fVar4 = func_0069141C(iVar3);
      *(int *)(iVar3 + 0x10) = iVar10;
      *(float *)(iVar3 + 0x14) = fVar4 + *(float *)(iVar3 + 0x14);
      *param_2 = *(float *)(iVar2 + 0x10);
      fVar5 = func_0056F43C(*param_4);
      fVar5 = fVar5 + *(float *)(iVar2 + 0x14);
      param_2[3] = fVar5;
      fVar4 = *param_2;
      fVar6 = param_2[1];
      fVar8 = param_2[2];
      fVar7 = fVar8;
      if (fVar8 - fVar4 < fVar9) {
        fVar7 = fVar4;
        fVar4 = fVar8;
      }
      *param_2 = fVar4;
      param_2[2] = fVar7;
      fVar4 = fVar6;
      if (fVar9 <= fVar5 - fVar6) {
        fVar4 = fVar5;
        fVar5 = fVar6;
      }
      param_2[1] = fVar5;
      uVar1 = 3;
      param_2[3] = fVar4;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  iVar3 = *param_4;
  *param_2 = *(float *)(iVar3 + 0x10);
  iVar2 = *param_4;
  iVar10 = *(int *)(iVar2 + 0x3c);
  if (0 < iVar10) {
    if (*(char *)(iVar2 + 0x2d) == '\0') {
      fVar4 = func_0056F3E4(iVar2);
    }
    else {
      fVar4 = *(float *)(iVar2 + 0x1c);
    }
    fVar5 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)((*(float *)(iVar2 + 0x10) - ALBW_AS_F32(param_4[3])) /
                                            (fVar5 * fVar4)) + 1,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar2 + 0x10) = ALBW_AS_F32(param_4[3]) + fVar5 * fVar4 * fVar7;
  }
  param_2[2] = *(float *)(iVar3 + 0x10);
  param_2[1] = *(float *)(iVar3 + 0x14);
  fVar5 = func_0056F43C(iVar3);
  fVar6 = param_2[1];
  fVar5 = fVar5 + fVar6;
  param_2[3] = fVar5;
  fVar8 = *param_2;
  fVar4 = param_2[2];
  fVar7 = fVar8;
  if (fVar9 <= fVar4 - fVar8) {
    fVar7 = fVar4;
    fVar4 = fVar8;
  }
  *param_2 = fVar4;
  param_2[2] = fVar7;
  fVar4 = fVar6;
  if (fVar5 - fVar6 < fVar9) {
    fVar4 = fVar5;
    fVar5 = fVar6;
  }
  param_2[1] = fVar4;
  param_2[3] = fVar5;
  return 1;
}

