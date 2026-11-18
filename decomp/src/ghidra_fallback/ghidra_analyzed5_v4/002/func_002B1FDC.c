#include "ghidra_types.h"


// USA 002B1FDC <- EU 002B1FB8 (Ghidra, non-matching)

void func_002B1FDC(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 2;
  }
  *(char *)(*(int *)(param_1 + 0x510) + 0x249) = (char)param_2;
  return;
}

