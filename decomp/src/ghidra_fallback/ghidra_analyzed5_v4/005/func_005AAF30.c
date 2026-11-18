#include "ghidra_types.h"

extern undefined4 *DAT_005aaf2c;
extern undefined4 *DAT_005aaf30;

// USA 005AAF30 <- EU 005AAF08 (Ghidra, non-matching)
// GLOBAL DAT_005aaf2c undefined4 *
// GLOBAL DAT_005aaf30 undefined4 *

void func_005AAF30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aaf2c;
  *DAT_005aaf2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aaf30;
  *DAT_005aaf30 = 0;
  puVar1[1] = 0;
  return;
}

