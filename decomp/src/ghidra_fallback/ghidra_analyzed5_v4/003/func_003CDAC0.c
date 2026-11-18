#include "ghidra_types.h"

extern int func_003CDC2C(int *param_1);

// USA 003CDAC0 <- EU 003CDA9C (Ghidra, non-matching)

void func_003CDAC0(int *param_1)

{
  if (param_1[5] != 0) {
    if (param_1[2] != 0) {
      if ((char)param_1[6] == '\0') {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        software_interrupt(0x20);
        func_003CDC2C(param_1);
      }
    }
    if (param_1[5] != 0) {
      software_interrupt(0x23);
      param_1[5] = 0;
    }
  }
  return;
}

