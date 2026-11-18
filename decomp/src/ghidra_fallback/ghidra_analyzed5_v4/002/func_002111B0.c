#include "ghidra_types.h"

extern int func_0065D774(undefined4 *param_1,undefined1 param_2);

// USA 002111B0 <- EU 002111B0 (Ghidra, non-matching)

undefined4 func_002111B0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x8bc) < 0x5b) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x98c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x990))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  return func_0065D774((undefined4 *)(param_1 + 0x8bc),5);
}

