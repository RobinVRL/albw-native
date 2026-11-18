#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_003c9bc4;

// USA 003C9BCC <- EU 003C9BA8 (Ghidra, non-matching)
// GLOBAL DAT_003c9bc4 int *

int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  if (*DAT_003c9bc4 == 0) {
    func_0010C1B8(0,param_2,param_3);
  }
  return *DAT_003c9bc4;
}

