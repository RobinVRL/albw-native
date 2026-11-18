#include "ghidra_types.h"

extern undefined4 *DAT_005efd88;
extern undefined4 *DAT_005efd8c;

// USA 005EFD8C <- EU 005EFD64 (Ghidra, non-matching)
// GLOBAL DAT_005efd88 undefined4 *
// GLOBAL DAT_005efd8c undefined4 *

void func_005EFD8C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efd88;
  *DAT_005efd88 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efd8c;
  *DAT_005efd8c = 0;
  puVar1[1] = 0;
  return;
}

