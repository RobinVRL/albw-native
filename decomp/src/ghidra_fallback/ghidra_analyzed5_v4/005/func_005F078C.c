#include "ghidra_types.h"

extern undefined4 *DAT_005f0788;
extern undefined4 *DAT_005f078c;

// USA 005F078C <- EU 005F0764 (Ghidra, non-matching)
// GLOBAL DAT_005f0788 undefined4 *
// GLOBAL DAT_005f078c undefined4 *

void func_005F078C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f0788;
  *DAT_005f0788 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f078c;
  *DAT_005f078c = 0;
  puVar1[1] = 0;
  return;
}

