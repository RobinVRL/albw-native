#include "ghidra_types.h"

extern undefined4 *DAT_005ca29c;
extern undefined4 *DAT_005ca2a0;

// USA 005CA2A0 <- EU 005CA278 (Ghidra, non-matching)
// GLOBAL DAT_005ca29c undefined4 *
// GLOBAL DAT_005ca2a0 undefined4 *

void func_005CA2A0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca29c;
  *DAT_005ca29c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca2a0;
  *DAT_005ca2a0 = 0;
  puVar1[1] = 0;
  return;
}

