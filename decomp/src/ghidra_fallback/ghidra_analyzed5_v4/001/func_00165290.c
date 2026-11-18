#include "ghidra_types.h"

extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern undefined4 DAT_0016534c;
extern float DAT_00165350;
extern float DAT_00165354;
extern float DAT_00165358;
extern undefined4 DAT_0016535c;

// USA 00165290 <- EU 00165294 (Ghidra, non-matching)
// GLOBAL DAT_0016534c undefined4
// GLOBAL DAT_00165350 float
// GLOBAL DAT_00165354 float
// GLOBAL DAT_00165358 float
// GLOBAL DAT_0016535c undefined4

undefined4 func_00165290(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0016534c;
  *(undefined4 *)(param_1 + 0x908) = 0x50;
  *(undefined4 *)(param_1 + 0x90c) = uVar3;
  *(undefined4 *)(param_1 + 0x904) = 0;
  func_004FAD90(param_1);
  iVar1 = func_00520FC0();
  uVar3 = DAT_0016535c;
  fVar2 = DAT_00165354 + *(float *)(iVar1 + 4) * DAT_00165350;
  if (DAT_00165358 < fVar2) {
    fVar2 = DAT_00165358;
  }
  *(float *)(param_1 + 0x8e4) = fVar2;
  iVar1 = func_00520FC0();
  fVar2 = *(float *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  *(float *)(param_1 + 0x468) = fVar2 - *(float *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  return func_004FC07C(param_1,10,0xffffffff,0);
}

