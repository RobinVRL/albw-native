#include "ghidra_types.h"


// USA 002B1FF4 <- EU 002B1FD0 (Ghidra, non-matching)

void func_002B1FF4(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 2;
  }
  *(char *)(*(int *)(param_1 + 0x510) + 0x159) = (char)param_2;
  return;
}

