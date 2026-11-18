#include "ghidra_types.h"

extern int func_001110BC(int *param_1,int param_2);

// USA 00110DDC <- EU 00110DDC (Ghidra, non-matching)

undefined4 func_00110DDC(undefined4 *param_1,int param_2)

{
  if ((int *)*param_1 != (int *)0x0) {
    return func_001110BC((int *)*param_1,param_2);
  }
  return 0;
}

