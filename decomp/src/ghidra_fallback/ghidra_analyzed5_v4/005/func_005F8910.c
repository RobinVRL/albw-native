#include "ghidra_types.h"

extern undefined4 *DAT_005f890c;
extern undefined4 *DAT_005f8910;

// USA 005F8910 <- EU 005F88E8 (Ghidra, non-matching)
// GLOBAL DAT_005f890c undefined4 *
// GLOBAL DAT_005f8910 undefined4 *

void func_005F8910(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f890c;
  *DAT_005f890c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8910;
  *DAT_005f8910 = 0;
  puVar1[1] = 0;
  return;
}

