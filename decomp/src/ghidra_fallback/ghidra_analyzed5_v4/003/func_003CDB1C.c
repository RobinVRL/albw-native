#include "ghidra_types.h"

extern int func_003CDAC0(int *param_1);

// USA 003CDB1C <- EU 003CDAF8 (Ghidra, non-matching)

int * func_003CDB1C(int *param_1)

{
  func_003CDAC0(param_1);
  if (param_1[5] != 0) {
    software_interrupt(0x23);
    param_1[5] = 0;
  }
  return param_1;
}

