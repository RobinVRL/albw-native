#include "ghidra_types.h"

extern int func_00328634(int param_1);

// USA 0032FD98 <- EU 0032FD74 (Ghidra, non-matching)

undefined4 func_0032FD98(int param_1)

{
  return func_00328634(*(int *)(*(int *)(param_1 + 0x80) + 0x2f0));
}

