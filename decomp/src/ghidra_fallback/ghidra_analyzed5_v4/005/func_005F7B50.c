#include "ghidra_types.h"

extern undefined4 *DAT_005f7b4c;
extern undefined4 *DAT_005f7b50;

// USA 005F7B50 <- EU 005F7B28 (Ghidra, non-matching)
// GLOBAL DAT_005f7b4c undefined4 *
// GLOBAL DAT_005f7b50 undefined4 *

void func_005F7B50(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7b4c;
  *DAT_005f7b4c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f7b50;
  *DAT_005f7b50 = 0;
  puVar1[1] = 0;
  return;
}

