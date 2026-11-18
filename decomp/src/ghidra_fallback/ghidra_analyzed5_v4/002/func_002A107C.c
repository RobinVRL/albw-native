#include "ghidra_types.h"

extern undefined4 DAT_002a1094;
extern undefined4 DAT_002a1098;

// USA 002A107C <- EU 002A1058 (Ghidra, non-matching)
// GLOBAL DAT_002a1094 undefined4
// GLOBAL DAT_002a1098 undefined4

void func_002A107C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002a1094;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x81;
  *(undefined4 *)(param_1 + 0x914) = 0x78;
  *(undefined4 *)(param_1 + 0x918) = uVar1;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined4 *)(param_1 + 0x900) = DAT_002a1098;
  return;
}

