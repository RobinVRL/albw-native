#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern undefined4 DAT_00655d60;
extern undefined4 DAT_00655d64;

// USA 00655D28 <- EU 00655D00 (Ghidra, non-matching)
// GLOBAL DAT_00655d60 undefined4
// GLOBAL DAT_00655d64 undefined4

void func_00655D28(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = DAT_00655d60;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00655d60;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_00655d64;
  *(undefined4 *)(param_1 + 0x8cc) = DAT_00655d64;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(local_18,pfVar2,(float *)(param_1 + 0x3d0));
  iVar3 = func_004904CC(local_18[0],local_10);
  *(int *)(param_1 + 0x8d8) = iVar3;
  return;
}

