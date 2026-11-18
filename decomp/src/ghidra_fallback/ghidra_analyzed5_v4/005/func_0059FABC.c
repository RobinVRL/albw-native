#include "ghidra_types.h"

extern undefined4 *DAT_0059fab8;
extern undefined4 *DAT_0059fabc;

// USA 0059FABC <- EU 0059FA94 (Ghidra, non-matching)
// GLOBAL DAT_0059fab8 undefined4 *
// GLOBAL DAT_0059fabc undefined4 *

void func_0059FABC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059fab8;
  *DAT_0059fab8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059fabc;
  *DAT_0059fabc = 0;
  puVar1[1] = 0;
  return;
}

