#include "ghidra_types.h"

extern int func_00503970(int param_1,uint param_2);
extern int *DAT_0012e7e8;

// USA 0012E7BC <- EU 0012E7BC (Ghidra, non-matching)
// GLOBAL DAT_0012e7e8 int *

undefined4 func_0012E7BC(int param_1)

{
  if (*(int *)(param_1 + 0x1848) != 0) {
    *(int *)(param_1 + 0x1848) = 0;
    return func_00503970(*DAT_0012e7e8,0);
  }
  return 0;
}

