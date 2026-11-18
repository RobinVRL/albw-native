#include "ghidra_types.h"

extern float DAT_002b04ec;

// USA 002B04F4 <- EU 002B04D0 (Ghidra, non-matching)
// GLOBAL DAT_002b04ec float

void func_002B04F4(int param_1,float fparam_0)

{
  if (DAT_002b04ec < fparam_0) {
    *(float *)(*(int *)(param_1 + 0x510) + 400) = fparam_0;
  }
  return;
}

