#include "ghidra_types.h"

extern undefined4 *DAT_005edbf0;
extern undefined4 *DAT_005edbf4;

// USA 005EDBF4 <- EU 005EDBCC (Ghidra, non-matching)
// GLOBAL DAT_005edbf0 undefined4 *
// GLOBAL DAT_005edbf4 undefined4 *

void func_005EDBF4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edbf0;
  *DAT_005edbf0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edbf4;
  *DAT_005edbf4 = 0;
  puVar1[1] = 0;
  return;
}

