#include "ghidra_types.h"

extern int DAT_005aafb0;
extern undefined4 *DAT_005aafb4;

// USA 005AAFB4 <- EU 005AAF8C (Ghidra, non-matching)
// GLOBAL DAT_005aafb0 int
// GLOBAL DAT_005aafb4 undefined4 *

void func_005AAFB4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005aafb0;
  *(undefined4 *)(DAT_005aafb0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005aafb4;
  *DAT_005aafb4 = 0;
  puVar2[1] = 0;
  return;
}

