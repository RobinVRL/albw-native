#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_00231448(int param_1);
extern int func_00462924(int param_1);
extern float DAT_00462734;

// USA 004626DC <- EU 004626B4 (Ghidra, non-matching)
// GLOBAL DAT_00462734 float

undefined4 func_004626DC(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  func_001B6C04(param_1);
  if (DAT_00462734 < *(float *)(param_1 + 0x84)) {
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar3 = (uint)*(short *)(param_1 + 0x22);
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
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar5 + 0x20) / *(float *)(param_1 + 0x84);
  }
  func_00231448(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return func_00462924(param_1);
}

