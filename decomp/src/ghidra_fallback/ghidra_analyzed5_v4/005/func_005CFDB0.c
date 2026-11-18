#include "ghidra_types.h"

extern undefined4 *DAT_005cfdac;
extern undefined4 *DAT_005cfdb0;

// USA 005CFDB0 <- EU 005CFD88 (Ghidra, non-matching)
// GLOBAL DAT_005cfdac undefined4 *
// GLOBAL DAT_005cfdb0 undefined4 *

void func_005CFDB0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfdac;
  *DAT_005cfdac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfdb0;
  *DAT_005cfdb0 = 0;
  puVar1[1] = 0;
  return;
}

