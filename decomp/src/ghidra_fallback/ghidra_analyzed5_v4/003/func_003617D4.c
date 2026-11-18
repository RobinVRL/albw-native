#include "ghidra_types.h"

extern int func_0029218C(int param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5);

// USA 003617D4 <- EU 0036176C (Ghidra, function missing from the decomp table)

undefined4 func_003617D4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0029218C(*(int *)(param_1 + 0x14),param_2,0,1,param_3);
  return uVar1;
}

