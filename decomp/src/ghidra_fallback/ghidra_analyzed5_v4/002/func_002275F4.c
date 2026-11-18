#include "ghidra_types.h"

extern int func_00227374(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern float DAT_002276d4;
extern undefined4 DAT_002276d8;
extern float DAT_002276dc;
extern undefined4 DAT_002276e0;
extern float DAT_002276e4;
extern undefined4 DAT_002276e8;
extern float DAT_002276ec;
extern float DAT_002276f0;

// USA 002275F4 <- EU 002275F4 (Ghidra, non-matching)
// GLOBAL DAT_002276d4 float
// GLOBAL DAT_002276d8 undefined4
// GLOBAL DAT_002276dc float
// GLOBAL DAT_002276e0 undefined4
// GLOBAL DAT_002276e4 float
// GLOBAL DAT_002276e8 undefined4
// GLOBAL DAT_002276ec float
// GLOBAL DAT_002276f0 float

void func_002275F4(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  func_003521F0(param_1 + 0x324,(uint)*(byte *)(param_1 + 0x73c));
  fVar5 = DAT_002276ec;
  fVar3 = DAT_002276d4;
  switch(*(undefined1 *)(param_1 + 0x73c)) {
  case 0:
    fVar3 = DAT_002276dc;
    uVar4 = DAT_002276d8;
    break;
  case 1:
  case 2:
    fVar3 = DAT_002276e4;
    uVar4 = DAT_002276e0;
    break;
  case 3:
  case 4:
    *(undefined4 *)(param_1 + 0x61c) = DAT_002276e8;
    fVar3 = fVar5;
  default:
    goto switchD_00227620_default;
  }
  *(undefined4 *)(param_1 + 0x61c) = uVar4;
switchD_00227620_default:
  fVar5 = fVar3 * DAT_002276f0;
  *(float *)(*(int *)(param_1 + 0x598) + 0x5c) = fVar3;
  *(float *)(param_1 + 0x600) = fVar5;
  func_00227374(param_1);
  if (*(char *)(param_1 + 0x73c) == '\0') {
    *(undefined2 *)(*(int *)(param_1 + 0x598) + 0x28) = 0xe0;
    iVar1 = *(int *)(param_1 + 0x598);
    uVar2 = *(uint *)(iVar1 + 0x2c) & 0xffffffef;
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x598) + 0x28) = 0x2a0;
    iVar1 = *(int *)(param_1 + 0x598);
    uVar2 = *(uint *)(iVar1 + 0x2c) | 0x10;
  }
  *(uint *)(iVar1 + 0x2c) = uVar2;
  return;
}

