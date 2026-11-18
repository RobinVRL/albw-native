#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern undefined4 DAT_001a7b2c;

// USA 001A7A90 <- EU 001A7A90 (Ghidra, non-matching)
// GLOBAL DAT_001a7b2c undefined4

undefined4 func_001A7A90(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = DAT_001a7b2c;
  *(undefined4 *)(param_1 + 0x3e4) = DAT_001a7b2c;
  *(undefined1 *)(param_1 + 0x937) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0x3d0));
  iVar3 = func_004904CC(local_14,SQRT(local_18 * local_18 + local_10 * local_10));
  *(int *)(param_1 + 0x91c) = -iVar3;
  func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0x3d0));
  iVar3 = func_004904CC(local_18,local_10);
  *(int *)(param_1 + 0x920) = iVar3;
  return func_004FABDC(param_1,2,0xffffffff,0);
}

