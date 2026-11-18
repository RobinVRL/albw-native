#include "ghidra_types.h"

extern undefined4 *DAT_005cbe6c;
extern undefined4 *DAT_005cbe70;

// USA 005CBE70 <- EU 005CBE48 (Ghidra, non-matching)
// GLOBAL DAT_005cbe6c undefined4 *
// GLOBAL DAT_005cbe70 undefined4 *

void func_005CBE70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cbe6c;
  *DAT_005cbe6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbe70;
  *DAT_005cbe70 = 0;
  puVar1[1] = 0;
  return;
}

