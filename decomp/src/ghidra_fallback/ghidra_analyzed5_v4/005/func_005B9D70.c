#include "ghidra_types.h"

extern int DAT_005b9d6c;
extern undefined4 *DAT_005b9d70;

// USA 005B9D70 <- EU 005B9D48 (Ghidra, non-matching)
// GLOBAL DAT_005b9d6c int
// GLOBAL DAT_005b9d70 undefined4 *

void func_005B9D70(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9d6c;
  *(undefined4 *)(DAT_005b9d6c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b9d70;
  *DAT_005b9d70 = 0;
  puVar2[1] = 0;
  return;
}

