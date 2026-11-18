#include "ghidra_types.h"

extern undefined4 *DAT_005f1d18;
extern undefined4 *DAT_005f1d1c;

// USA 005F1D1C <- EU 005F1CF4 (Ghidra, non-matching)
// GLOBAL DAT_005f1d18 undefined4 *
// GLOBAL DAT_005f1d1c undefined4 *

void func_005F1D1C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f1d18;
  *DAT_005f1d18 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1d1c;
  *DAT_005f1d1c = 0;
  puVar1[1] = 0;
  return;
}

