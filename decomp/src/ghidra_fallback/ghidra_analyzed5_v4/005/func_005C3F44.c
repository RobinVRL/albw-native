#include "ghidra_types.h"

extern int DAT_005c3f40;
extern undefined4 *DAT_005c3f44;

// USA 005C3F44 <- EU 005C3F1C (Ghidra, non-matching)
// GLOBAL DAT_005c3f40 int
// GLOBAL DAT_005c3f44 undefined4 *

void func_005C3F44(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c3f40;
  *(undefined4 *)(DAT_005c3f40 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c3f44;
  *DAT_005c3f44 = 0;
  puVar2[1] = 0;
  return;
}

