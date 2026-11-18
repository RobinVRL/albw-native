#include "ghidra_types.h"

extern int func_001B6D40(int param_1);
extern int func_00469B14(int param_1);

// USA 0046531C <- EU 004652F4 (Ghidra, non-matching)

void func_0046531C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  func_001B6D40(param_1);
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x148)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x150) + uVar3 * 4);
    }
    else {
      iVar1 = 0;
    }
    func_00469B14(iVar1);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x21);
  if (4 < *(byte *)(param_1 + 0x128)) {
    *(undefined1 *)(*(int *)(param_1 + 0x11c) + 0xe) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x120) + 0xe) = 0;
  }
  uVar3 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar2 = piVar2 + uVar3;
    }
    if (*piVar2 != 0) {
      piVar2 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar2 = piVar2 + uVar3;
      }
      *(undefined1 *)(*piVar2 + 0xe) = 0;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  piVar2 = *(int **)(param_1 + 0x118);
  (**(code **)(*piVar2 + 0x34))(piVar2);
  *(undefined1 *)((int)piVar2 + 0xe) = 0;
  *(undefined1 *)((int)piVar2 + 0xd) = 0;
  return;
}

