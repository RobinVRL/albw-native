#include "ghidra_types.h"

extern int DAT_005b8b4c;
extern undefined4 *DAT_005b8b50;

// USA 005B8B50 <- EU 005B8B28 (Ghidra, non-matching)
// GLOBAL DAT_005b8b4c int
// GLOBAL DAT_005b8b50 undefined4 *

void func_005B8B50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b8b4c;
  *(undefined4 *)(DAT_005b8b4c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b8b50;
  *DAT_005b8b50 = 0;
  puVar2[1] = 0;
  return;
}

