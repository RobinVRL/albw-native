#include "ghidra_types.h"

extern undefined4 *DAT_005b8ac8;
extern undefined4 *DAT_005b8acc;

// USA 005B8ACC <- EU 005B8AA4 (Ghidra, non-matching)
// GLOBAL DAT_005b8ac8 undefined4 *
// GLOBAL DAT_005b8acc undefined4 *

void func_005B8ACC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b8ac8;
  *DAT_005b8ac8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8acc;
  *DAT_005b8acc = 0;
  puVar1[1] = 0;
  return;
}

