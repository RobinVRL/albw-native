#include "ghidra_types.h"

extern int DAT_005d0e7c;
extern undefined4 *DAT_005d0e80;
extern undefined4 DAT_005d0e84;

// USA 005D0E74 <- EU 005D0E4C (Ghidra, non-matching)
// GLOBAL DAT_005d0e7c int
// GLOBAL DAT_005d0e80 undefined4 *
// GLOBAL DAT_005d0e84 undefined4

void func_005D0E74(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d0e7c;
  *(undefined4 *)(DAT_005d0e7c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0e80;
  *DAT_005d0e80 = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005d0e84;
  return;
}

