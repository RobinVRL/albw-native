#include "ghidra_types.h"

extern int func_003D30B8(int param_1,int param_2);

// USA 003D306C <- EU 003D3048 (Ghidra, non-matching)

void func_003D306C(int param_1,int param_2)

{
  func_003D30B8(param_1 + 0x18,param_2);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  return;
}

