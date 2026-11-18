#include "ghidra_types.h"

extern int func_00178D58(int param_1);
extern int func_002CB1A4(int param_1,int *param_2,int param_3);
extern float func_0056F3E4(int param_1);
extern float func_0069141C(int param_1);

// USA 002CB3B0 <- EU 002CB38C (Ghidra, non-matching)

undefined4 func_002CB3B0(int param_1,int param_2,int *param_3,uint param_4,float fparam_0)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (param_2 == 9) {
    iVar3 = *param_3;
    iVar8 = *(int *)(iVar3 + 0x3c);
    if (0 < iVar8) {
      if (*(char *)(iVar3 + 0x2d) == '\0') {
        fVar5 = func_0056F3E4(iVar3);
      }
      else {
        fVar5 = *(float *)(iVar3 + 0x1c);
      }
      fVar6 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorSignedToFloat((int)((*(float *)(iVar3 + 0x10) - ALBW_AS_F32(param_3[3])) /
                                              (fVar6 * fVar5)) + 1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x10) = ALBW_AS_F32(param_3[3]) + fVar6 * fVar5 * fVar7;
    }
    return 1;
  }
  if (param_2 == 10) {
    iVar3 = *param_3;
    iVar8 = param_3[3];
    fVar5 = func_0069141C(iVar3);
    *(int *)(iVar3 + 0x10) = iVar8;
    *(float *)(iVar3 + 0x14) = fVar5 + *(float *)(iVar3 + 0x14);
    if (*(int *)(param_1 + 0x14) != 0) {
      func_00178D58(*(int *)(param_1 + 0x14));
    }
    return 3;
  }
  iVar3 = param_3[1];
  psVar4 = (short *)(iVar3 + -2);
  if (*psVar4 == 0xe) {
    psVar1 = (short *)((uint)*(ushort *)(iVar3 + 4) + iVar3 + 6);
  }
  else {
    if (*psVar4 != 0xf) {
      param_3[1] = (int)psVar4;
      psVar1 = psVar4;
      goto LAB_002cb4a0;
    }
    psVar1 = (short *)(iVar3 + 4);
  }
  param_3[1] = (int)psVar1;
  if (psVar4 != (short *)0x0) {
    uVar2 = func_002CB1A4(param_1,param_3,(int)psVar4);
    return uVar2;
  }
LAB_002cb4a0:
  param_3[1] = (int)(psVar1 + 1);
  return 0;
}

