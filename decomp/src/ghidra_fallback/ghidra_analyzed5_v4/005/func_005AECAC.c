#include "ghidra_types.h"

extern undefined4 *DAT_005aeca8;
extern undefined4 *DAT_005aecac;

// USA 005AECAC <- EU 005AEC84 (Ghidra, non-matching)
// GLOBAL DAT_005aeca8 undefined4 *
// GLOBAL DAT_005aecac undefined4 *

void func_005AECAC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aeca8;
  *DAT_005aeca8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aecac;
  *DAT_005aecac = 0;
  puVar1[1] = 0;
  return;
}

