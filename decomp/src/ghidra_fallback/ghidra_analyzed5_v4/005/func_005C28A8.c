#include "ghidra_types.h"

extern int DAT_005c28a4;
extern undefined4 *DAT_005c28a8;

// USA 005C28A8 <- EU 005C2880 (Ghidra, non-matching)
// GLOBAL DAT_005c28a4 int
// GLOBAL DAT_005c28a8 undefined4 *

void func_005C28A8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c28a4;
  *(undefined4 *)(DAT_005c28a4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c28a8;
  *DAT_005c28a8 = 0;
  puVar2[1] = 0;
  return;
}

