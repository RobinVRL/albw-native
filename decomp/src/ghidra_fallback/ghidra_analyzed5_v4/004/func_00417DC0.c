#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_00417dc0;

// USA 00417DC0 <- EU 00417DA0 (Ghidra, non-matching)
// GLOBAL DAT_00417dc0 undefined *

int func_00417DC0(int param_1)

{
  int iVar1;
  
  iVar1 = func_00100118(param_1 + 0x34,DAT_00417dc0,0x18,0x20);
  return iVar1 + -0x34;
}

