#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0029205C <- EU 00292084 (Ghidra, non-matching)

void func_0029205C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x4f);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}

