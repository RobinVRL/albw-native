#include "ghidra_types.h"

extern undefined4 *DAT_005a3908;
extern undefined4 *DAT_005a390c;

// USA 005A390C <- EU 005A38E4 (Ghidra, non-matching)
// GLOBAL DAT_005a3908 undefined4 *
// GLOBAL DAT_005a390c undefined4 *

void func_005A390C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a3908;
  *DAT_005a3908 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a390c;
  *DAT_005a390c = 0;
  puVar1[1] = 0;
  return;
}

