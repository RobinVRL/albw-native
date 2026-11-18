#include "ghidra_types.h"

extern int func_004A3C5C(int param_1,int param_2);

// USA 004A3954 <- EU 004A392C (Ghidra, non-matching)

undefined4 func_004A3954(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    return func_004A3C5C(*(int *)(param_1 + 0x24),param_2);
  }
  return 0;
}

