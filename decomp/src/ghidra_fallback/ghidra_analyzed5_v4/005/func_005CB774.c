#include "ghidra_types.h"

extern undefined4 *DAT_005cb770;
extern undefined4 *DAT_005cb774;

// USA 005CB774 <- EU 005CB74C (Ghidra, non-matching)
// GLOBAL DAT_005cb770 undefined4 *
// GLOBAL DAT_005cb774 undefined4 *

void func_005CB774(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb770;
  *DAT_005cb770 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb774;
  *DAT_005cb774 = 0;
  puVar1[1] = 0;
  return;
}

