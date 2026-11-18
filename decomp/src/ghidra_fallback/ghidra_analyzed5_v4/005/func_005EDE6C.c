#include "ghidra_types.h"

extern undefined4 *DAT_005ede68;
extern undefined4 *DAT_005ede6c;

// USA 005EDE6C <- EU 005EDE44 (Ghidra, non-matching)
// GLOBAL DAT_005ede68 undefined4 *
// GLOBAL DAT_005ede6c undefined4 *

void func_005EDE6C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ede68;
  *DAT_005ede68 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ede6c;
  *DAT_005ede6c = 0;
  puVar1[1] = 0;
  return;
}

