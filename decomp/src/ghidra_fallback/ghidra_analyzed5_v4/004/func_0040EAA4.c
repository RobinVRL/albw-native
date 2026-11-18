#include "ghidra_types.h"

extern int func_0010C180(uint *param_1);
extern int func_0040EA34(uint *param_1);

// USA 0040EAA4 <- EU 0040EA84 (Ghidra, non-matching)

uint * func_0040EAA4(uint *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    func_0040EA34(param_1);
  }
  func_0010C180(param_1);
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

