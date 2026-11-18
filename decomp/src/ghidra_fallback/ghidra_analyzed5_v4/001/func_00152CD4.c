#include "ghidra_types.h"

extern int func_00657BD4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00152d40;

// USA 00152CD4 <- EU 00152CD8 (Ghidra, non-matching)
// GLOBAL DAT_00152d40 int *

undefined4 func_00152CD4(int param_1)

{
  if (*(int *)(*DAT_00152d40 + 0x44) == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x829) = 1;
    if (*(char *)(param_1 + 0x931) == '\0') {
      return 0;
    }
    if (*(int *)(param_1 + 0x8fc) != 0) {
      *(int *)(param_1 + 0x8fc) = *(int *)(param_1 + 0x8fc) + -1;
      return 0;
    }
  }
  return func_00657BD4((undefined4 *)(param_1 + 0x90c),4);
}

