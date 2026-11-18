#include "ghidra_types.h"

extern int func_003705A0(int param_1,uint param_2);

// USA 004C6C50 <- EU 004C6C28 (Ghidra, non-matching)

undefined4 func_004C6C50(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x51c) != 0) {
    return func_003705A0(*(int *)(param_1 + 0x51c),param_2);
  }
  return 0;
}

