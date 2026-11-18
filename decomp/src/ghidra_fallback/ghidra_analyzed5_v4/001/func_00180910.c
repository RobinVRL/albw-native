#include "ghidra_types.h"

extern int DAT_00180964;
extern int DAT_00180968;

// USA 00180910 <- EU 00180910 (Ghidra, non-matching)
// GLOBAL DAT_00180964 int
// GLOBAL DAT_00180968 int

void func_00180910(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xac))(param_1,9,0xffffffff);
  iVar1 = DAT_00180964;
  param_1[0x26a] = 0x3c;
  param_1[0x26b] = iVar1;
  iVar1 = DAT_00180968;
  param_1[0x269] = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  return;
}

