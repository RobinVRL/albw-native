#include "ghidra_types.h"

extern int func_00407CB8(int param_1,int param_2);

// USA 00418B00 <- EU 00418AE0 (Ghidra, non-matching)

undefined4 func_00418B00(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    return func_00407CB8(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x3c));
  }
  return 0;
}

