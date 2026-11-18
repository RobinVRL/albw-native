#include "ghidra_types.h"

extern int DAT_005b9c8c;
extern undefined4 *DAT_005b9c90;

// USA 005B9C90 <- EU 005B9C68 (Ghidra, non-matching)
// GLOBAL DAT_005b9c8c int
// GLOBAL DAT_005b9c90 undefined4 *

void func_005B9C90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9c8c;
  *(undefined4 *)(DAT_005b9c8c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b9c90;
  *DAT_005b9c90 = 0;
  puVar2[1] = 0;
  return;
}

