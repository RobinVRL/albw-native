#include "ghidra_types.h"

extern int func_00407CB8(int param_1,int param_2);

// USA 0041B54C <- EU 0041B52C (Ghidra, non-matching)

undefined4 func_0041B54C(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    return func_00407CB8(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x78));
  }
  return 0;
}

