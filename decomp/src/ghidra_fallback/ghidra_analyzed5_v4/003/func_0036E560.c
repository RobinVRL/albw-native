#include "ghidra_types.h"

extern int func_00328E30(int param_1,int param_2,uint param_3);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0036e6fc;
extern int DAT_0036e700;
extern uint DAT_0036e704;
extern int DAT_0036e708;
extern float DAT_0036e70c;
extern float DAT_0036e710;
extern float DAT_0036e714;
extern float DAT_0036e718;

// USA 0036E560 <- EU 0036E53C (Ghidra, non-matching)
// GLOBAL DAT_0036e6fc float
// GLOBAL DAT_0036e700 int
// GLOBAL DAT_0036e704 uint
// GLOBAL DAT_0036e708 int
// GLOBAL DAT_0036e70c float
// GLOBAL DAT_0036e710 float
// GLOBAL DAT_0036e714 float
// GLOBAL DAT_0036e718 float

undefined4 func_0036E560(byte *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  fVar9 = DAT_0036e6fc;
  if (*(char *)(param_2 + 0x8f8) == '\x02' || *(char *)(param_2 + 0x8f8) == '\x03') {
    return 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(param_1 + 100) == 0x3c) {
      func_00328E30(param_2,(int)(char)param_1[0x6a],0);
      param_1[0x6e] = *(int *)(param_1 + 0x44) - *(int *)(param_2 + 0x93c) != -0x80000000;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    return 0;
  }
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar2;
  uVar5 = (uint)(*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x54));
  if (param_1[0x6e] != 0) {
    iVar7 = *(int *)(param_2 + 0x93c);
    iVar3 = iVar2 - iVar7;
    if (iVar3 != -0x80000000) {
      uVar4 = 0;
      if ((uint)(iVar3 - DAT_0036e700) < (uint)(DAT_0036e700 - (DAT_0036e700 >> 1))) {
        fVar8 = (float)VectorUnsignedToFloat(0x80000000U - iVar3,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)DAT_0036e704 < (int)(fVar8 * fVar9)) {
          *(int *)(param_1 + 0x44) = (int)(fVar8 * fVar9) + iVar2;
        }
        else if (DAT_0036e704 < 0x80000000U - iVar3) {
          *(int *)(param_1 + 0x44) = iVar2 + 0xb60b60;
        }
        else {
          param_1[0x6e] = 0;
          uVar4 = 1;
          *(int *)(param_1 + 0x44) = iVar7 + -0x80000000;
        }
      }
      else {
        *(int *)(param_1 + 0x44) = iVar2 + DAT_0036e708;
      }
      uVar5 = uVar5 & uVar4;
    }
  }
  fVar8 = func_0036EAF8(param_1,param_2);
  uVar4 = func_0068C794((float *)(param_1 + 0x5c),fVar8,fVar9,DAT_0036e710,DAT_0036e70c);
  fVar8 = *(float *)(param_1 + 8);
  fVar9 = *(float *)(param_2 + 0xc) - fVar8;
  if (DAT_0036e714 < fVar9) {
    fVar9 = fVar8 + DAT_0036e714;
  }
  else {
    bVar1 = DAT_0036e718 <= fVar9;
    fVar9 = DAT_0036e714;
    if (!bVar1) {
      fVar9 = fVar8 - DAT_0036e714;
    }
    uVar6 = (uint)bVar1;
    if (bVar1) {
      *(float *)(param_1 + 8) = *(float *)(param_2 + 0xc);
      goto LAB_0036e6e0;
    }
  }
  *(float *)(param_1 + 8) = fVar9;
LAB_0036e6e0:
  if ((uVar4 & uVar5 & uVar6) == 0) {
    return 0;
  }
  return func_0036E490(param_1,0,param_2);
}

