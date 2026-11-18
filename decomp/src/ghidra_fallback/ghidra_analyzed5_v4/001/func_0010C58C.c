#include "ghidra_types.h"


// USA 0010C58C <- EU 0010C58C (Ghidra, non-matching)

void func_0010C58C(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48) = *param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4c) = param_2[1];
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x50) = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x54) = param_2[3];
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x58) = param_2[4];
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c) = param_2[5];
  return;
}

