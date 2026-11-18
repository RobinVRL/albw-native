#include "ghidra_types.h"

extern undefined4 DAT_0051d55c;

// USA 0051D530 <- EU 0051D508 (Ghidra, non-matching)
// GLOBAL DAT_0051d55c undefined4

void func_0051D530(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0051d55c;
  *param_2 = *(undefined4 *)(param_1 + 0xe8);
  param_2[1] = *(undefined4 *)(param_1 + 0x1a4);
  param_2[2] = *(undefined4 *)(param_1 + 0x1a8);
  param_2[3] = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0x19c);
  param_2[4] = *(undefined4 *)(param_1 + 0x198);
  param_2[5] = uVar2;
  param_2[6] = 0;
  param_2[7] = uVar1;
  param_2[8] = uVar1;
  param_2[9] = uVar1;
  *(undefined2 *)(param_2 + 10) = 0;
  *(undefined2 *)((int)param_2 + 0x2a) = 0;
  return;
}

