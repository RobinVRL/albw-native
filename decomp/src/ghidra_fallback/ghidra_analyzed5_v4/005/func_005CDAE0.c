#include "ghidra_types.h"

extern undefined4 *DAT_005cdadc;
extern undefined4 *DAT_005cdae0;

// USA 005CDAE0 <- EU 005CDAB8 (Ghidra, non-matching)
// GLOBAL DAT_005cdadc undefined4 *
// GLOBAL DAT_005cdae0 undefined4 *

void func_005CDAE0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cdadc;
  *DAT_005cdadc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cdae0;
  *DAT_005cdae0 = 0;
  puVar1[1] = 0;
  return;
}

