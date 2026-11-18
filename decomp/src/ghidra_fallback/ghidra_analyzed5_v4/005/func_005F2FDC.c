#include "ghidra_types.h"

extern undefined4 *DAT_005f2fd8;
extern undefined4 *DAT_005f2fdc;

// USA 005F2FDC <- EU 005F2FB4 (Ghidra, non-matching)
// GLOBAL DAT_005f2fd8 undefined4 *
// GLOBAL DAT_005f2fdc undefined4 *

void func_005F2FDC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f2fd8;
  *DAT_005f2fd8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2fdc;
  *DAT_005f2fdc = 0;
  puVar1[1] = 0;
  return;
}

