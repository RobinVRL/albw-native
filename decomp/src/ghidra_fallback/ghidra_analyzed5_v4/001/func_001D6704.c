#include "ghidra_types.h"

extern int func_00547514(int param_1);
extern int func_00556BE0(int param_1);
extern int *DAT_001d6734;

// USA 001D6704 <- EU 001D6704 (Ghidra, non-matching)
// GLOBAL DAT_001d6734 int *

void func_001D6704(int param_1)

{
  int iVar1;
  
  iVar1 = func_00556BE0(*DAT_001d6734);
  if (iVar1 == 0) {
    func_00547514(param_1 + 4);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

