#include "ghidra_types.h"

extern int DAT_00100940;
extern int DAT_00100944;

// GLOBAL DAT_00100940 int
// GLOBAL DAT_00100944 int
// USA 00100924 <- EU 00100924 (Ghidra, function missing from the decomp table)

void func_00100924(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_00100944 + 0x100930);
  for (piVar1 = (int *)(DAT_00100940 + 0x10092c); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    (*(code *)(*piVar1 + (int)piVar1))();
  }
  return;
}

