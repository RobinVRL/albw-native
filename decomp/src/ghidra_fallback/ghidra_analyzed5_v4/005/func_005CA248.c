#include "ghidra_types.h"

extern undefined4 *DAT_005ca244;
extern undefined4 *DAT_005ca248;

// USA 005CA248 <- EU 005CA220 (Ghidra, non-matching)
// GLOBAL DAT_005ca244 undefined4 *
// GLOBAL DAT_005ca248 undefined4 *

void func_005CA248(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca244;
  *DAT_005ca244 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca248;
  *DAT_005ca248 = 0;
  puVar1[1] = 0;
  return;
}

