#include "ghidra_types.h"

extern int DAT_005aea40;
extern undefined4 *DAT_005aea44;

// USA 005AEA44 <- EU 005AEA1C (Ghidra, non-matching)
// GLOBAL DAT_005aea40 int
// GLOBAL DAT_005aea44 undefined4 *

void func_005AEA44(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005aea40;
  *(undefined4 *)(DAT_005aea40 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005aea44;
  *DAT_005aea44 = 0;
  puVar2[1] = 0;
  return;
}

