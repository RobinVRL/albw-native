#include "ghidra_types.h"

extern int *DAT_00101520;
extern int *DAT_00101524;

// USA 001014EC <- EU 001014EC (Ghidra, non-matching)
// GLOBAL DAT_00101520 int *
// GLOBAL DAT_00101524 int *

int func_001014EC(void)

{
  int iVar1;
  
  iVar1 = *DAT_00101520;
  if (iVar1 != 0) {
    software_interrupt(0x23);
    if (iVar1 < 0) {
      return iVar1;
    }
    *DAT_00101520 = *DAT_00101524;
  }
  return 0;
}

