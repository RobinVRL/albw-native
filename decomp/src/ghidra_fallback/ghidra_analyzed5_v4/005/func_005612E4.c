#include "ghidra_types.h"


// USA 005612E4 <- EU 005612BC (Ghidra, non-matching)

undefined4 func_005612E4(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  param_2[1] = *(int *)(param_1 + 0x14) - (*(int *)(param_1 + 0xc) + (uint)(uVar1 < uVar2));
  *param_2 = uVar1 - uVar2;
  return 0;
}

