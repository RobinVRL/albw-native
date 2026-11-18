#include "ghidra_types.h"

extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_001e284c;

// USA 001E2804 <- EU 001E2804 (Ghidra, non-matching)
// GLOBAL DAT_001e284c int *

void func_001E2804(int param_1)

{
  if ((*(int *)(*DAT_001e284c + 0x44) == 0) || (*(int *)(*DAT_001e284c + 0x44) != param_1 + 0x7ac))
  {
    func_00588C14(param_1,1,1);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

