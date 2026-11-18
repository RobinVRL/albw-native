#include "ghidra_types.h"

extern int func_002D455C(int *param_1,int param_2,byte param_3,int param_4);

// USA 003616E4 <- EU 00361658 (Ghidra, function missing from the decomp table)

undefined4 func_003616E4(int param_1)

{
  func_002D455C((int *)(*(int *)(param_1 + 0x10) + 0x6a0),-1,0,1);
  func_002D455C((int *)(*(int *)(param_1 + 0x10) + 0x6ac),-1,0,1);
  return 1;
}

