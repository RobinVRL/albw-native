#include "ghidra_types.h"

extern undefined4 *DAT_005ed4f8;
extern undefined4 *DAT_005ed4fc;

// USA 005ED4FC <- EU 005ED4D4 (Ghidra, non-matching)
// GLOBAL DAT_005ed4f8 undefined4 *
// GLOBAL DAT_005ed4fc undefined4 *

void func_005ED4FC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ed4f8;
  *DAT_005ed4f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ed4fc;
  *DAT_005ed4fc = 0;
  puVar1[1] = 0;
  return;
}

