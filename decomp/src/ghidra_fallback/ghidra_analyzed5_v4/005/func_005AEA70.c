#include "ghidra_types.h"

extern undefined4 *DAT_005aea6c;
extern undefined4 *DAT_005aea70;

// USA 005AEA70 <- EU 005AEA48 (Ghidra, non-matching)
// GLOBAL DAT_005aea6c undefined4 *
// GLOBAL DAT_005aea70 undefined4 *

void func_005AEA70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aea6c;
  *DAT_005aea6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aea70;
  *DAT_005aea70 = 0;
  puVar1[1] = 0;
  return;
}

