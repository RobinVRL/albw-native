#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0053A554(int param_1,float *param_2,float *param_3);

// USA 0053A4CC <- EU 0053A4A4 (Ghidra, non-matching)

undefined4 func_0053A4CC(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  pfVar2 = (float *)(param_1 + 0xb18);
  pfVar3 = pfVar2 + param_3 * 5;
  if (4 < param_3) {
    pfVar3 = pfVar2;
  }
  pfVar1 = pfVar2 + param_3 * 5;
  if (4 < param_3) {
    pfVar1 = pfVar2;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + (int)ALBW_AS_U32(pfVar3[3]) * 0x30;
  *param_2 = *(float *)(iVar4 + 0xc);
  param_2[1] = *(float *)(iVar4 + 0x1c);
  param_2[2] = *(float *)(iVar4 + 0x2c);
  func_0053A554(param_1,afStack_18,pfVar1);
  return func_00115C54(param_2,param_2,afStack_18);
}

