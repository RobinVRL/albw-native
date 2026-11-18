#include "ghidra_types.h"

extern int func_005467C0(int param_1,undefined4 *param_2);

// USA 0054D130 <- EU 0054D108 (Ghidra, non-matching)

undefined4 func_0054D130(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = func_005467C0(param_1,param_2);
  sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + 0x42);
  if (sVar1 == 0x2c) {
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x2d) {
      return uVar2;
    }
  }
  else if (sVar1 != 0x2e && sVar1 != 0x2f) {
    return uVar2;
  }
  return 8;
}

