#include "ghidra_types.h"

extern int func_0043DB7C(int param_1,int param_2);

// USA 0051B874 <- EU 0051B84C (Ghidra, non-matching)

undefined4 func_0051B874(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    return func_0043DB7C(*(int *)(param_1 + 0x80),param_2);
  }
  return 0;
}

