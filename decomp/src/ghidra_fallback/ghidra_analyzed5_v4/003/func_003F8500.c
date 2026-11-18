#include "ghidra_types.h"


// USA 003F8500 <- EU 003F84E0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4

void func_003F8500(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  if (param_4 < (int)(uint)(param_3 < 8)) {
    *(undefined4 *)(param_1 + param_3 * 4 + 0x4c0) = param_5;
  }
  return;
}

