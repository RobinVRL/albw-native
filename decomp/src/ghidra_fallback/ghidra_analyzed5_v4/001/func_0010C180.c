#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);

// USA 0010C180 <- EU 0010C180 (Ghidra, non-matching)

void func_0010C180(uint *param_1)

{
  if ((char)param_1[1] == '\0') {
    software_interrupt(0x24);
    if ((int)*param_1 < 0) {
      func_0010A98C(*param_1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}

