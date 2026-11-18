#include "ghidra_types.h"

extern int func_001B6D40(int param_1);
extern int func_00231448(int param_1);
extern float DAT_004628f8;

// USA 004628B0 <- EU 00462888 (Ghidra, non-matching)
// GLOBAL DAT_004628f8 float

void func_004628B0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  func_001B6D40(param_1);
  if (DAT_004628f8 < *(float *)(param_1 + 0x8c)) {
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar3 = (uint)*(short *)(param_1 + 0x2e);
    puVar1 = (uint *)(iVar4 + 8);
    if (uVar3 < *puVar1) {
      uVar2 = uVar3 * 7;
      iVar5 = *(int *)(iVar4 + 0xc) + uVar3 * 0x38;
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    else {
      iVar5 = *(int *)(iVar4 + 0xc);
      uVar2 = uVar3;
    }
    if (uVar3 < *puVar1) {
      iVar4 = iVar4 + uVar2 * 8;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar5 + 0x20) / *(float *)(param_1 + 0x8c);
  }
  func_00231448(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

