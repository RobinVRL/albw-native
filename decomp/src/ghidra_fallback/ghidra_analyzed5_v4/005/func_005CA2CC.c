#include "ghidra_types.h"

extern undefined4 *DAT_005ca2c8;
extern undefined4 *DAT_005ca2cc;

// USA 005CA2CC <- EU 005CA2A4 (Ghidra, non-matching)
// GLOBAL DAT_005ca2c8 undefined4 *
// GLOBAL DAT_005ca2cc undefined4 *

void func_005CA2CC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ca2c8;
  *DAT_005ca2c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca2cc;
  *DAT_005ca2cc = 0;
  puVar1[1] = 0;
  return;
}

