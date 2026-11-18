#include "ghidra_types.h"

extern int func_00108250(int *param_1);

// USA 003D374C <- EU 003D3728 (Ghidra, non-matching)

int * func_003D374C(int *param_1)

{
  func_00108250(param_1 + 0xb);
  if (param_1[0x10] != 0) {
    software_interrupt(0x23);
    param_1[0x10] = 0;
  }
  if (param_1[9] != 0) {
    software_interrupt(0x23);
    param_1[9] = 0;
  }
  if (param_1[7] != 0) {
    software_interrupt(0x23);
    param_1[7] = 0;
  }
  if (param_1[4] != 0) {
    software_interrupt(0x23);
    param_1[4] = 0;
  }
  if (param_1[2] != 0) {
    software_interrupt(0x23);
    param_1[2] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

