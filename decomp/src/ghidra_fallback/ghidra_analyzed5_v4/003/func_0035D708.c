#include "ghidra_types.h"

extern int *DAT_0035d70c;

// USA 0035D708 <- EU 0035D6E4 (Ghidra, non-matching)
// GLOBAL DAT_0035d70c int *

undefined4 func_0035D708(int param_1,int param_2)

{
  if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(*DAT_0035d70c + 0x1c);
  }
  return 1;
}

