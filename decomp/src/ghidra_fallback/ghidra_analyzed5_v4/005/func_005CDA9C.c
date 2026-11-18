#include "ghidra_types.h"

extern undefined4 *DAT_005cdaa8;
extern undefined4 *DAT_005cdaac;
extern undefined4 DAT_005cdab0;
extern undefined4 DAT_005cdab4;

// USA 005CDA9C <- EU 005CDA74 (Ghidra, non-matching)
// GLOBAL DAT_005cdaa8 undefined4 *
// GLOBAL DAT_005cdaac undefined4 *
// GLOBAL DAT_005cdab0 undefined4
// GLOBAL DAT_005cdab4 undefined4

void func_005CDA9C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_005cdab0;
  puVar1 = DAT_005cdaa8;
  *DAT_005cdaa8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = DAT_005cdab4;
  puVar1 = DAT_005cdaac;
  *DAT_005cdaac = 0;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  return;
}

