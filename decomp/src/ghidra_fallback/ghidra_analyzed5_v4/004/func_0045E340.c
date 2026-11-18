#include "ghidra_types.h"

extern float DAT_0045e394;
extern undefined4 DAT_0045e398;
extern float DAT_0045e39c;
extern undefined4 DAT_0045e3a0;
extern float DAT_0045e3a4;
extern float DAT_0045e3a8;
extern undefined4 DAT_0045e3ac;

// USA 0045E340 <- EU 0045E318 (Ghidra, non-matching)
// GLOBAL DAT_0045e394 float
// GLOBAL DAT_0045e398 undefined4
// GLOBAL DAT_0045e39c float
// GLOBAL DAT_0045e3a0 undefined4
// GLOBAL DAT_0045e3a4 float
// GLOBAL DAT_0045e3a8 float
// GLOBAL DAT_0045e3ac undefined4

void func_0045E340(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = DAT_0045e3a0;
  uVar1 = DAT_0045e398;
  iVar5 = *(int *)(param_1 + 0x15c);
  fVar6 = *(float *)(param_1 + 0x164) + DAT_0045e394;
  *(undefined4 *)(iVar5 + 0x24) = DAT_0045e3a0;
  fVar4 = DAT_0045e3a8;
  fVar2 = DAT_0045e39c;
  *(float *)(iVar5 + 0x1c) = fVar6;
  *(undefined4 *)(iVar5 + 0x20) = uVar1;
  uVar1 = DAT_0045e3ac;
  fVar6 = DAT_0045e3a4;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  fVar7 = *(float *)(param_1 + 0x164);
  iVar5 = *(int *)(param_1 + 0x158);
  *(undefined4 *)(iVar5 + 0x24) = uVar3;
  *(float *)(iVar5 + 0x1c) = fVar7 + fVar2 + fVar6 + *(float *)(iVar5 + 0x3c) * fVar4;
  *(undefined4 *)(iVar5 + 0x20) = uVar1;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  return;
}

