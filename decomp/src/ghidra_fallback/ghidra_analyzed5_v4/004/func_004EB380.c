#include "ghidra_types.h"

extern int func_00429A78(int param_1,int param_2);

// USA 004EB380 <- EU 004EB358 (Ghidra, non-matching)

undefined4 func_004EB380(int param_1,int param_2)

{
  return func_00429A78(*(int *)(param_1 + 0x48),param_2);
}

