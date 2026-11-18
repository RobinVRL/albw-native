#include "ghidra_types.h"

extern undefined4 *DAT_005f2f6c;
extern undefined4 *DAT_005f2f70;

// USA 005F2F70 <- EU 005F2F48 (Ghidra, non-matching)
// GLOBAL DAT_005f2f6c undefined4 *
// GLOBAL DAT_005f2f70 undefined4 *

void func_005F2F70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2f6c;
  *DAT_005f2f6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2f70;
  *DAT_005f2f70 = 0;
  puVar1[1] = 0;
  return;
}

