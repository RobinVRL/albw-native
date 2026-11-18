#include "ghidra_types.h"

extern undefined4 *DAT_005eda7c;
extern undefined4 *DAT_005eda80;

// USA 005EDA80 <- EU 005EDA58 (Ghidra, non-matching)
// GLOBAL DAT_005eda7c undefined4 *
// GLOBAL DAT_005eda80 undefined4 *

void func_005EDA80(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eda7c;
  *DAT_005eda7c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eda80;
  *DAT_005eda80 = 0;
  puVar1[1] = 0;
  return;
}

