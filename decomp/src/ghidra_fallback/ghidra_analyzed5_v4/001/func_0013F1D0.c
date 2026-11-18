#include "ghidra_types.h"

extern int func_004A3700(int param_1);

// USA 0013F1D0 <- EU 0013F1D0 (Ghidra, non-matching)

void func_0013F1D0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x508) == 2) {
    iVar2 = *(int *)(param_1 + 0x4ec);
    if (param_2 == 0) {
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
        iVar1 = *(int *)(iVar2 + 0x20);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
          *(undefined1 *)(iVar1 + 0x280) = 1;
        }
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
      }
    }
    else if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar2);
    }
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  return;
}

