#include "ghidra_types.h"

extern undefined4 *DAT_005934fc;
extern undefined4 *DAT_00593500;

// USA 00593500 <- EU 005934D8 (Ghidra, non-matching)
// GLOBAL DAT_005934fc undefined4 *
// GLOBAL DAT_00593500 undefined4 *

void func_00593500(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005934fc;
  *DAT_005934fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_00593500;
  *DAT_00593500 = 0;
  puVar1[1] = 0;
  return;
}

