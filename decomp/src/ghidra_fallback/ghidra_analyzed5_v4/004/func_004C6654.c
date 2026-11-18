#include "ghidra_types.h"

extern int func_002E2074(int param_1,uint param_2);

// USA 004C6654 <- EU 004C662C (Ghidra, non-matching)

undefined4 func_004C6654(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x5b0) != 0) {
    return func_002E2074(*(int *)(param_1 + 0x5b0),param_2);
  }
  return 0;
}

