#include "ghidra_types.h"

extern float func_0056F3E4(int param_1);
extern float func_0056F43C(int param_1);
extern float func_0069141C(int param_1);
extern float DAT_002cb6b0;

// USA 002CB4D8 <- EU 002CB4B4 (Ghidra, non-matching)
// GLOBAL DAT_002cb6b0 float

undefined4 func_002CB4D8(undefined4 param_1,float *param_2,int param_3,int *param_4,float fparam_0)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  
  fVar10 = DAT_002cb6b0;
  if (param_3 == 9) {
    iVar4 = *param_4;
    *param_2 = *(float *)(iVar4 + 0x10);
    iVar1 = *param_4;
    iVar11 = *(int *)(iVar1 + 0x3c);
    if (0 < iVar11) {
      if (*(char *)(iVar1 + 0x2d) == '\0') {
        fVar5 = func_0056F3E4(iVar1);
      }
      else {
        fVar5 = *(float *)(iVar1 + 0x1c);
      }
      fVar9 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat((int)((*(float *)(iVar1 + 0x10) - ALBW_AS_F32(param_4[3])) /
                                              (fVar9 * fVar5)) + 1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar1 + 0x10) = ALBW_AS_F32(param_4[3]) + fVar9 * fVar5 * fVar8;
    }
    param_2[2] = *(float *)(iVar4 + 0x10);
    param_2[1] = *(float *)(iVar4 + 0x14);
    fVar9 = func_0056F43C(iVar4);
    fVar6 = param_2[1];
    fVar9 = fVar9 + fVar6;
    param_2[3] = fVar9;
    fVar7 = *param_2;
    fVar5 = param_2[2];
    fVar8 = fVar7;
    if (fVar10 <= fVar5 - fVar7) {
      fVar8 = fVar5;
      fVar5 = fVar7;
    }
    *param_2 = fVar5;
    param_2[2] = fVar8;
    fVar5 = fVar6;
    if (fVar9 - fVar6 < fVar10) {
      fVar5 = fVar9;
      fVar9 = fVar6;
    }
    param_2[1] = fVar5;
    param_2[3] = fVar9;
    return 1;
  }
  if (param_3 == 10) {
    iVar1 = *param_4;
    param_2[2] = *(float *)(iVar1 + 0x10);
    param_2[1] = *(float *)(iVar1 + 0x14);
    iVar4 = *param_4;
    iVar11 = param_4[3];
    fVar5 = func_0069141C(iVar4);
    *(int *)(iVar4 + 0x10) = iVar11;
    *(float *)(iVar4 + 0x14) = fVar5 + *(float *)(iVar4 + 0x14);
    *param_2 = *(float *)(iVar1 + 0x10);
    fVar6 = func_0056F43C(*param_4);
    fVar6 = fVar6 + *(float *)(iVar1 + 0x14);
    param_2[3] = fVar6;
    fVar5 = param_2[2];
    fVar7 = *param_2;
    fVar9 = param_2[1];
    fVar8 = fVar7;
    if (fVar10 <= fVar5 - fVar7) {
      fVar8 = fVar5;
      fVar5 = fVar7;
    }
    *param_2 = fVar5;
    param_2[2] = fVar8;
    fVar5 = fVar6;
    if (fVar10 <= fVar6 - fVar9) {
      fVar5 = fVar9;
      fVar9 = fVar6;
    }
    param_2[1] = fVar5;
    param_2[3] = fVar9;
    return 3;
  }
  iVar1 = param_4[1];
  psVar2 = (short *)(iVar1 + -2);
  if (*psVar2 == 0xe) {
    psVar3 = (short *)((uint)*(ushort *)(iVar1 + 4) + iVar1 + 6);
  }
  else {
    if (*psVar2 != 0xf) {
      param_4[1] = (int)psVar2;
      psVar3 = psVar2;
      goto LAB_002cb69c;
    }
    psVar3 = (short *)(iVar1 + 4);
  }
  param_4[1] = (int)psVar3;
  if (psVar2 != (short *)0x0) {
    return 0;
  }
LAB_002cb69c:
  param_4[1] = (int)(psVar3 + 1);
  return 0;
}

