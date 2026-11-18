#include "ghidra_types.h"

extern undefined4 *DAT_005f2fac;
extern undefined4 *DAT_005f2fb0;

// USA 005F2FB0 <- EU 005F2F88 (Ghidra, non-matching)
// GLOBAL DAT_005f2fac undefined4 *
// GLOBAL DAT_005f2fb0 undefined4 *

void func_005F2FB0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2fac;
  *DAT_005f2fac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2fb0;
  *DAT_005f2fb0 = 0;
  puVar1[1] = 0;
  return;
}

