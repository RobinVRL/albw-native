#include "ghidra_types.h"

extern undefined4 *DAT_005f2f2c;
extern undefined4 *DAT_005f2f30;

// USA 005F2F30 <- EU 005F2F08 (Ghidra, non-matching)
// GLOBAL DAT_005f2f2c undefined4 *
// GLOBAL DAT_005f2f30 undefined4 *

void func_005F2F30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2f2c;
  *DAT_005f2f2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2f30;
  *DAT_005f2f30 = 0;
  puVar1[1] = 0;
  return;
}

