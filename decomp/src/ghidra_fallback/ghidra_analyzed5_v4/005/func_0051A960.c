#include "ghidra_types.h"

extern int func_00450180(int param_1,int param_2);

// USA 0051A960 <- EU 0051A938 (Ghidra, non-matching)

undefined4 func_0051A960(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    return func_00450180(*(int *)(param_1 + 0xd8),param_2);
  }
  return 0;
}

