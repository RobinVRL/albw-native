#include "ghidra_types.h"

extern int func_00588C14(int param_1,int param_2,uint param_3);

// USA 002C8F38 <- EU 002C8F14 (Ghidra, non-matching)

void func_002C8F38(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x32) == 0) {
    func_00588C14(param_1,0,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x440) + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x478) = 0;
  iVar1 = *(int *)(param_1 + 0x450);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  return;
}

