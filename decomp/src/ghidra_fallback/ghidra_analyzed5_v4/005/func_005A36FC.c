#include "ghidra_types.h"

extern undefined4 *DAT_005a36f8;
extern undefined4 *DAT_005a36fc;

// USA 005A36FC <- EU 005A36D4 (Ghidra, non-matching)
// GLOBAL DAT_005a36f8 undefined4 *
// GLOBAL DAT_005a36fc undefined4 *

void func_005A36FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a36f8;
  *DAT_005a36f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a36fc;
  *DAT_005a36fc = 0;
  puVar1[1] = 0;
  return;
}

