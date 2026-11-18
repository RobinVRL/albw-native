#include "ghidra_types.h"

extern undefined4 *DAT_0059fa8c;
extern undefined4 *DAT_0059fa90;

// USA 0059FA90 <- EU 0059FA68 (Ghidra, non-matching)
// GLOBAL DAT_0059fa8c undefined4 *
// GLOBAL DAT_0059fa90 undefined4 *

void func_0059FA90(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059fa8c;
  *DAT_0059fa8c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059fa90;
  *DAT_0059fa90 = 0;
  puVar1[1] = 0;
  return;
}

