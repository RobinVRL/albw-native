#include "ghidra_types.h"

extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern float func_004F898C(void);
extern undefined4 *DAT_002eb2d8;
extern float DAT_002eb2dc;
extern int DAT_002eb2e0;

// USA 002EB28C <- EU 002EB268 (Ghidra, non-matching)
// GLOBAL DAT_002eb2d8 undefined4 *
// GLOBAL DAT_002eb2dc float
// GLOBAL DAT_002eb2e0 int

void func_002EB28C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  
  puVar3 = DAT_002eb2d8;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0xb0;
  func_004F8864(param_1,puVar3,0,DAT_002eb2dc);
  fVar5 = func_004F898C();
  iVar1 = DAT_002eb2e0;
  puVar3 = (undefined4 *)(DAT_002eb2e0 + 0x36c);
  *(float *)(param_1 + 0xb98) = fVar5;
  uVar2 = *puVar3;
  uVar4 = *(undefined4 *)(iVar1 + 0x370);
  *(int *)(param_1 + 0xcbc) = param_1;
  *(undefined4 *)(param_1 + 0xcc0) = uVar2;
  *(undefined4 *)(param_1 + 0xcc4) = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 0x374);
  uVar2 = *(undefined4 *)(iVar1 + 0x378);
  *(int *)(param_1 + 0xccc) = param_1;
  *(undefined4 *)(param_1 + 0xcd0) = uVar4;
  *(undefined4 *)(param_1 + 0xcd4) = uVar2;
  return;
}

