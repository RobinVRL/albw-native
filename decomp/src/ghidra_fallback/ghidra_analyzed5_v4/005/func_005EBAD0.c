#include "ghidra_types.h"

extern undefined4 *DAT_005ebacc;
extern undefined4 *DAT_005ebad0;

// USA 005EBAD0 <- EU 005EBAA8 (Ghidra, non-matching)
// GLOBAL DAT_005ebacc undefined4 *
// GLOBAL DAT_005ebad0 undefined4 *

void func_005EBAD0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ebacc;
  *DAT_005ebacc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ebad0;
  *DAT_005ebad0 = 0;
  puVar1[1] = 0;
  return;
}

