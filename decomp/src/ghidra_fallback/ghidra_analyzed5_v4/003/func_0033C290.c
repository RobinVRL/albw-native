#include "ghidra_types.h"

extern int func_005811E8(int *param_1);

// USA 0033C290 <- EU 0033C26C (Ghidra, non-matching)

void func_0033C290(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_005811E8((int *)(param_1 + 0x4fc));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x4fc);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  iVar1 = func_005811E8((int *)(param_1 + 0x504));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x504);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x508))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

