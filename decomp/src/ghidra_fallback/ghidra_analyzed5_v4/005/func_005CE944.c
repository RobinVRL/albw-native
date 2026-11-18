#include "ghidra_types.h"

extern int DAT_005ce94c;
extern undefined4 *DAT_005ce950;
extern undefined4 DAT_005ce954;

// USA 005CE944 <- EU 005CE91C (Ghidra, non-matching)
// GLOBAL DAT_005ce94c int
// GLOBAL DAT_005ce950 undefined4 *
// GLOBAL DAT_005ce954 undefined4

void func_005CE944(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ce94c;
  *(undefined4 *)(DAT_005ce94c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ce950;
  *DAT_005ce950 = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005ce954;
  return;
}

