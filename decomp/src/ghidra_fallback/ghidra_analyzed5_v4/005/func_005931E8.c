#include "ghidra_types.h"

extern int DAT_005931e4;
extern undefined4 *DAT_005931e8;

// USA 005931E8 <- EU 005931C0 (Ghidra, non-matching)
// GLOBAL DAT_005931e4 int
// GLOBAL DAT_005931e8 undefined4 *

void func_005931E8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005931e4;
  *(undefined4 *)(DAT_005931e4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005931e8;
  *DAT_005931e8 = 0;
  puVar2[1] = 0;
  return;
}

