#include "ghidra_types.h"

extern undefined4 *DAT_005b84f4;
extern undefined4 *DAT_005b84f8;
extern undefined4 *DAT_005b84fc;
extern undefined4 *DAT_005b8500;
extern undefined4 *DAT_005b8504;
extern undefined4 *DAT_005b8508;

// USA 005B84B8 <- EU 005B8490 (Ghidra, non-matching)
// GLOBAL DAT_005b84f4 undefined4 *
// GLOBAL DAT_005b84f8 undefined4 *
// GLOBAL DAT_005b84fc undefined4 *
// GLOBAL DAT_005b8500 undefined4 *
// GLOBAL DAT_005b8504 undefined4 *
// GLOBAL DAT_005b8508 undefined4 *

void func_005B84B8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_005b84f4;
  *DAT_005b84f4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b84f8;
  *DAT_005b84f8 = 0;
  puVar1[1] = 0;
  puVar2 = DAT_005b8500;
  puVar1 = DAT_005b84fc;
  *DAT_005b8500 = *DAT_005b84fc;
  puVar2[1] = *puVar1;
  puVar2[2] = *puVar1;
  puVar2[3] = *puVar1;
  puVar2[4] = *DAT_005b8504;
  puVar2[5] = *DAT_005b8508;
  return;
}

