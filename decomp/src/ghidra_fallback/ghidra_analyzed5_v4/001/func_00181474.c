#include "ghidra_types.h"

extern int DAT_001814c8;
extern int DAT_001814cc;

// USA 00181474 <- EU 00181474 (Ghidra, non-matching)
// GLOBAL DAT_001814c8 int
// GLOBAL DAT_001814cc int

void func_00181474(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xac))(param_1,10,0xffffffff);
  iVar1 = DAT_001814c8;
  param_1[0x26a] = 0x3c;
  param_1[0x26b] = iVar1;
  iVar1 = DAT_001814cc;
  param_1[0x269] = 0;
  param_1[0xf7] = iVar1;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  return;
}

