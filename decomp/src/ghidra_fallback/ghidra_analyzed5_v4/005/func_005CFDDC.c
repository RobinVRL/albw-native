#include "ghidra_types.h"

extern undefined4 *DAT_005cfdd8;
extern undefined4 *DAT_005cfddc;

// USA 005CFDDC <- EU 005CFDB4 (Ghidra, non-matching)
// GLOBAL DAT_005cfdd8 undefined4 *
// GLOBAL DAT_005cfddc undefined4 *

void func_005CFDDC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfdd8;
  *DAT_005cfdd8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfddc;
  *DAT_005cfddc = 0;
  puVar1[1] = 0;
  return;
}

