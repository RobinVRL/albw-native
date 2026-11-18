#include "ghidra_types.h"

extern undefined4 *DAT_005ea974;
extern undefined4 *DAT_005ea978;

// USA 005EA978 <- EU 005EA950 (Ghidra, non-matching)
// GLOBAL DAT_005ea974 undefined4 *
// GLOBAL DAT_005ea978 undefined4 *

void func_005EA978(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ea974;
  *DAT_005ea974 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea978;
  *DAT_005ea978 = 0;
  puVar1[1] = 0;
  return;
}

