#include "ghidra_types.h"

extern int func_001B6CE4(int param_1);

// USA 00487A0C <- EU 004879E4 (Ghidra, non-matching)

undefined4 func_00487A0C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  
  iVar1 = func_001B6CE4(param_1);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x138);
    iVar1 = extraout_r1;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
    }
    if ((iVar2 != 0 && iVar1 != 0) && (uVar3 = (uint)*(short *)(iVar2 + 2), -1 < (int)uVar3)) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (uVar3 < *(uint *)(iVar1 + 8)) {
        iVar1 = *(int *)(iVar1 + 0xc) + uVar3 * 0x38;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
      if (*(char *)(iVar1 + 0x35) != '\0') {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

