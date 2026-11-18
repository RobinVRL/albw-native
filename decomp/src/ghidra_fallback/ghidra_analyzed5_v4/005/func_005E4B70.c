#include "ghidra_types.h"

extern int DAT_005e4b6c;
extern undefined4 *DAT_005e4b70;

// USA 005E4B70 <- EU 005E4B48 (Ghidra, non-matching)
// GLOBAL DAT_005e4b6c int
// GLOBAL DAT_005e4b70 undefined4 *

void func_005E4B70(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005e4b6c;
  *(undefined4 *)(DAT_005e4b6c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005e4b70;
  *DAT_005e4b70 = 0;
  puVar2[1] = 0;
  return;
}

