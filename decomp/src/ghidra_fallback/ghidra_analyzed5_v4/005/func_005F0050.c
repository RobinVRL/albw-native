#include "ghidra_types.h"

extern undefined4 *DAT_005f004c;
extern undefined4 *DAT_005f0050;

// USA 005F0050 <- EU 005F0028 (Ghidra, non-matching)
// GLOBAL DAT_005f004c undefined4 *
// GLOBAL DAT_005f0050 undefined4 *

void func_005F0050(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f004c;
  *DAT_005f004c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f0050;
  *DAT_005f0050 = 0;
  puVar1[1] = 0;
  return;
}

