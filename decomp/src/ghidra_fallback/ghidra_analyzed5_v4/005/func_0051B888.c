#include "ghidra_types.h"

extern int func_0044F2BC(int param_1,int param_2);

// USA 0051B888 <- EU 0051B860 (Ghidra, non-matching)

undefined4 func_0051B888(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x110) != 0) {
    return func_0044F2BC(*(int *)(param_1 + 0x110),param_2);
  }
  return 0;
}

