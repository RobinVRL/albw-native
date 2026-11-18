#include "ghidra_types.h"

extern undefined4 *DAT_005ead88;
extern undefined4 *DAT_005ead8c;

// USA 005EAD8C <- EU 005EAD64 (Ghidra, non-matching)
// GLOBAL DAT_005ead88 undefined4 *
// GLOBAL DAT_005ead8c undefined4 *

void func_005EAD8C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ead88;
  *DAT_005ead88 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ead8c;
  *DAT_005ead8c = 0;
  puVar1[1] = 0;
  return;
}

