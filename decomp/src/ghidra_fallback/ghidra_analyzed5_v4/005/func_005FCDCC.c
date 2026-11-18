#include "ghidra_types.h"

extern undefined4 *DAT_005fcdc8;
extern undefined4 *DAT_005fcdcc;

// USA 005FCDCC <- EU 005FCDA4 (Ghidra, non-matching)
// GLOBAL DAT_005fcdc8 undefined4 *
// GLOBAL DAT_005fcdcc undefined4 *

void func_005FCDCC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fcdc8;
  *DAT_005fcdc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fcdcc;
  *DAT_005fcdcc = 0;
  puVar1[1] = 0;
  return;
}

