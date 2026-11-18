#include "ghidra_types.h"

extern undefined4 DAT_005b92f4;
extern undefined4 DAT_005b92f8;
extern undefined4 *DAT_005b92fc;
extern undefined4 DAT_005b9300;
extern undefined4 DAT_005b9304;

// USA 005B92F8 <- EU 005B92D0 (Ghidra, non-matching)
// GLOBAL DAT_005b92f4 undefined4
// GLOBAL DAT_005b92f8 undefined4
// GLOBAL DAT_005b92fc undefined4 *
// GLOBAL DAT_005b9300 undefined4
// GLOBAL DAT_005b9304 undefined4

void func_005B92F8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_005b92fc;
  uVar1 = DAT_005b92f8;
  *DAT_005b92fc = DAT_005b92f4;
  puVar2[1] = uVar1;
  uVar1 = DAT_005b9304;
  puVar2[-2] = DAT_005b9300;
  puVar2[-1] = uVar1;
  return;
}

