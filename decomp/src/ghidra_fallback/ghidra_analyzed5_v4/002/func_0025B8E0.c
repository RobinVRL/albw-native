#include "ghidra_types.h"

extern int func_0025BDA4(int *param_1,int *param_2);

// USA 0025B8E0 <- EU 0025B908 (Ghidra, non-matching)

undefined4 func_0025B8E0(int param_1,int *param_2)

{
  if (*(char *)((int)*(int **)(param_1 + 0x40) + 0x86) != '\0') {
    return func_0025BDA4(*(int **)(param_1 + 0x40),param_2);
  }
  return 0;
}

