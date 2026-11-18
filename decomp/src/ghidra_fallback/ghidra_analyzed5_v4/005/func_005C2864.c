#include "ghidra_types.h"

extern int DAT_005c2860;
extern undefined4 *DAT_005c2864;

// USA 005C2864 <- EU 005C283C (Ghidra, non-matching)
// GLOBAL DAT_005c2860 int
// GLOBAL DAT_005c2864 undefined4 *

void func_005C2864(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c2860;
  *(undefined4 *)(DAT_005c2860 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c2864;
  *DAT_005c2864 = 0;
  puVar2[1] = 0;
  return;
}

