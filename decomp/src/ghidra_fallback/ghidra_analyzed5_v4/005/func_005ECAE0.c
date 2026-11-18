#include "ghidra_types.h"

extern undefined4 *DAT_005ecadc;
extern undefined4 *DAT_005ecae0;

// USA 005ECAE0 <- EU 005ECAB8 (Ghidra, non-matching)
// GLOBAL DAT_005ecadc undefined4 *
// GLOBAL DAT_005ecae0 undefined4 *

void func_005ECAE0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ecadc;
  *DAT_005ecadc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ecae0;
  *DAT_005ecae0 = 0;
  puVar1[1] = 0;
  return;
}

