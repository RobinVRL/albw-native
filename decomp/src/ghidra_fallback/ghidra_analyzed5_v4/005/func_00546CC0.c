#include "ghidra_types.h"

extern int func_005467C0(int param_1,undefined4 *param_2);

// USA 00546CC0 <- EU 00546C98 (Ghidra, non-matching)

undefined4 func_00546CC0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((int)*(short *)(*(int *)(param_1 + 0x2c) + 0x42) - 0x89U < 5) {
    *param_2 = *(undefined4 *)(param_1 + 0x100);
    param_2[1] = *(undefined4 *)(param_1 + 0x104);
    param_2[2] = *(undefined4 *)(param_1 + 0x108);
    return 0;
  }
  uVar1 = func_005467C0(param_1,param_2);
  return uVar1;
}

