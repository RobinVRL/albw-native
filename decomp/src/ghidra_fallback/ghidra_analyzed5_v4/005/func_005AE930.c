#include "ghidra_types.h"

extern undefined4 *DAT_005ae92c;
extern undefined4 *DAT_005ae930;

// USA 005AE930 <- EU 005AE908 (Ghidra, non-matching)
// GLOBAL DAT_005ae92c undefined4 *
// GLOBAL DAT_005ae930 undefined4 *

void func_005AE930(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ae92c;
  *DAT_005ae92c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ae930;
  *DAT_005ae930 = 0;
  puVar1[1] = 0;
  return;
}

