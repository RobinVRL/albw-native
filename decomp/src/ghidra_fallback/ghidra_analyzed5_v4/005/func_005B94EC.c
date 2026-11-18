#include "ghidra_types.h"

extern undefined4 *DAT_005b94e8;
extern undefined4 *DAT_005b94ec;

// USA 005B94EC <- EU 005B94C4 (Ghidra, non-matching)
// GLOBAL DAT_005b94e8 undefined4 *
// GLOBAL DAT_005b94ec undefined4 *

void func_005B94EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b94e8;
  *DAT_005b94e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b94ec;
  *DAT_005b94ec = 0;
  puVar1[1] = 0;
  return;
}

