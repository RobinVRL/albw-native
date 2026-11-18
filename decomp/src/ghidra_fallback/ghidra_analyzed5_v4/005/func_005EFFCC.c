#include "ghidra_types.h"

extern undefined4 *DAT_005effc8;
extern undefined4 *DAT_005effcc;

// USA 005EFFCC <- EU 005EFFA4 (Ghidra, non-matching)
// GLOBAL DAT_005effc8 undefined4 *
// GLOBAL DAT_005effcc undefined4 *

void func_005EFFCC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005effc8;
  *DAT_005effc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005effcc;
  *DAT_005effcc = 0;
  puVar1[1] = 0;
  return;
}

