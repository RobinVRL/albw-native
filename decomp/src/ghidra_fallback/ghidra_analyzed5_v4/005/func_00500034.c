#include "ghidra_types.h"

extern undefined4 DAT_00500044;

// USA 00500034 <- EU 0050000C (Ghidra, non-matching)
// GLOBAL DAT_00500044 undefined4

void func_00500034(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 8;
  uVar1 = DAT_00500044;
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x8fc);
  *(undefined4 *)(param_1 + 0x910) = uVar1;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x918) = 0;
  return;
}

