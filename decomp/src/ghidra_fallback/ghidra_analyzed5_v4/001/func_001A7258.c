#include "ghidra_types.h"

extern int func_004A3700(int param_1);

// USA 001A7258 <- EU 001A7258 (Ghidra, non-matching)

undefined4 func_001A7258(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 6) {
    *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0x61) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x960);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x964))) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
    return func_004A3700(iVar1);
  }
  return 0;
}

