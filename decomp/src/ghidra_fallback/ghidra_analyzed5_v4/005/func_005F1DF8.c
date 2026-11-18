#include "ghidra_types.h"

extern undefined4 *DAT_005f1dfc;
extern undefined4 DAT_005f1e00;

// USA 005F1DF8 <- EU 005F1DD0 (Ghidra, non-matching)
// GLOBAL DAT_005f1dfc undefined4 *
// GLOBAL DAT_005f1e00 undefined4

void func_005F1DF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f1dfc;
  DAT_005f1dfc[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005f1e00;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = uVar2;
  return;
}

