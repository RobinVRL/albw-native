// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B74C(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);

// USA 004EB350 <- EU 004EB328 (Ghidra, non-matching)

void func_004EB350(int param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  func_0025B74C(iVar1 + 0x78,param_2,param_3,param_4);
  *(undefined1 *)(iVar1 + 0xdb) = param_2;
  return;
}

