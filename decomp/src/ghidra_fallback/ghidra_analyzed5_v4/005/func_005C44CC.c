#include "ghidra_types.h"

extern undefined4 *DAT_005c44c8;
extern undefined4 *DAT_005c44cc;

// USA 005C44CC <- EU 005C44A4 (Ghidra, non-matching)
// GLOBAL DAT_005c44c8 undefined4 *
// GLOBAL DAT_005c44cc undefined4 *

void func_005C44CC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c44c8;
  *DAT_005c44c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c44cc;
  *DAT_005c44cc = 0;
  puVar1[1] = 0;
  return;
}

