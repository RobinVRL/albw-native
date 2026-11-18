#include "ghidra_types.h"


// USA 004D00E4 <- EU 004D00BC (Ghidra, non-matching)

void func_004D00E4(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x20) + param_2 * 0x154 + param_3 * 4;
  *(uint *)(iVar1 + 0x24) = *param_4 & 0xffffff | *(uint *)(iVar1 + 0x24) & 0xff000000;
  return;
}

