#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001D4854(int param_1,undefined4 param_2,float fparam_0);
extern int func_001D4AE8(int param_1,undefined4 param_2,float fparam_0);
extern int func_0028FBC8(int param_1,undefined4 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001d55b4;
extern float *DAT_001d55b8;
extern float DAT_001d55bc;
extern int *DAT_001d55c0;

// USA 001D54BC <- EU 001D54BC (Ghidra, non-matching)
// GLOBAL DAT_001d55b4 int *
// GLOBAL DAT_001d55b8 float *
// GLOBAL DAT_001d55bc float
// GLOBAL DAT_001d55c0 int *

undefined4 func_001D54BC(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  iVar2 = *DAT_001d55b4;
  pfVar3 = (float *)(param_1 + 0x474);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  fVar5 = *(float *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(param_1 + 0x47c) = uVar4;
  *pfVar3 = fVar5;
  *(undefined4 *)(param_1 + 0x478) = uVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar4;
  *(float *)(param_1 + 0x3d0) = *pfVar3;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x478);
  *(float *)(param_1 + 0x468) = *pfVar3;
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x47c);
  pfVar1 = DAT_001d55b8;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + DAT_001d55b8[-5];
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + pfVar1[1];
  *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x3d0) + *pfVar1;
  *(undefined4 *)(param_1 + 1000) = 0x40000000;
  func_00115C70(afStack_20,pfVar3,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_20);
  fVar5 = DAT_001d55bc;
  *(int *)(param_1 + 0x498) = iVar2;
  *(undefined1 *)(param_1 + 0x4c1) = 5;
  func_001D4854(param_1,0,fVar5);
  func_001D4AE8(param_1,0,fVar5);
  return func_0028FBC8(*DAT_001d55c0,*(undefined4 *)(param_1 + 0x2cc));
}

