#include "ghidra_types.h"

extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);

// USA 002FC480 <- EU 002FC45C (Ghidra, non-matching)

void func_002FC480(int param_1)

{
  float fparam_0;
  longlong lVar1;
  
  fparam_0 = func_0058AC38(param_1);
  lVar1 = func_0058ACC8(param_1,fparam_0);
  if ((int)lVar1 != 0) {
    if (*(uint *)(param_1 + 0x8f8) < *(uint *)(param_1 + 0x8fc)) {
      *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8f8) + 1;
    }
    else {
      func_006644B8((undefined4 *)(param_1 + 0x8bc),4);
    }
  }
  return;
}

