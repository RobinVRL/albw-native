#include "ghidra_types.h"


// USA 003C9250 <- EU 003C922C (Ghidra, non-matching)

int func_003C9250(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(0x23);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}

