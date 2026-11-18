#include "ghidra_types.h"

extern undefined4 *DAT_005ca270;
extern undefined4 *DAT_005ca274;

// USA 005CA274 <- EU 005CA24C (Ghidra, non-matching)
// GLOBAL DAT_005ca270 undefined4 *
// GLOBAL DAT_005ca274 undefined4 *

void func_005CA274(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca270;
  *DAT_005ca270 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca274;
  *DAT_005ca274 = 0;
  puVar1[1] = 0;
  return;
}

