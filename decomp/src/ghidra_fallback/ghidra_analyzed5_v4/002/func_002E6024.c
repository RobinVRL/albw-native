#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_00520FC0(void);
extern undefined4 uRam002e60b8;
extern undefined4 uRam002e60bc;
extern undefined4 uRam002e60c0;
extern float DAT_002e60b4;

// USA 002E6024 <- EU 002E6000 (Ghidra, non-matching)
// GLOBAL DAT_002e60b4 float
// GLOBAL UNK_002e60b8 undefined4
// GLOBAL UNK_002e60bc undefined4
// GLOBAL UNK_002e60c0 undefined4

void func_002E6024(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fparam_0;
  
  fparam_0 = DAT_002e60b4;
  *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x22) = 2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  func_004FABDC(param_1,*(undefined4 *)(param_1 + 0xa50),0xffffffff,0);
  func_004FB4E0(param_1,fparam_0);
  uVar3 = uRam002e60c0;
  *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_1 + 0x3d0);
  uVar2 = uRam002e60bc;
  *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(param_1 + 0x3d4);
  uVar1 = uRam002e60b8;
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0xa28) = uVar3;
  *(float *)(param_1 + 0xa2c) = fparam_0;
  *(undefined4 *)(param_1 + 0xa30) = uVar2;
  *(undefined4 *)(param_1 + 0xa38) = uVar3;
  *(undefined4 *)(param_1 + 0xa34) = uVar1;
  puVar4 = (undefined4 *)func_00520FC0();
  *(undefined4 *)(param_1 + 0xa70) = *puVar4;
  *(undefined4 *)(param_1 + 0xa74) = puVar4[1];
  *(undefined4 *)(param_1 + 0xa78) = puVar4[2];
  return;
}

