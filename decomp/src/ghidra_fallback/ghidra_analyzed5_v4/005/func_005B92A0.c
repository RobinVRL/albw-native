#include "ghidra_types.h"

extern undefined4 *DAT_005b929c;
extern undefined4 *DAT_005b92a0;

// USA 005B92A0 <- EU 005B9278 (Ghidra, non-matching)
// GLOBAL DAT_005b929c undefined4 *
// GLOBAL DAT_005b92a0 undefined4 *

void func_005B92A0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b929c;
  *DAT_005b929c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b92a0;
  *DAT_005b92a0 = 0;
  puVar1[1] = 0;
  return;
}

