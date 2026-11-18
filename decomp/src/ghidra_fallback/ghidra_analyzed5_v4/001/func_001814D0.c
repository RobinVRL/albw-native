#include "ghidra_types.h"

extern int DAT_00181530;
extern int DAT_00181534;

// USA 001814D0 <- EU 001814D0 (Ghidra, non-matching)
// GLOBAL DAT_00181530 int
// GLOBAL DAT_00181534 int

void func_001814D0(int *param_1)

{
  int iVar1;
  
  param_1[0xb8] = param_1[0xb8] | 2;
  (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
  iVar1 = DAT_00181530;
  param_1[0x26a] = 0x5a;
  param_1[0x26b] = iVar1;
  iVar1 = DAT_00181534;
  param_1[0x269] = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  return;
}

