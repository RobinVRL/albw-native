#include "ghidra_types.h"

extern int DAT_005cbf2c;
extern undefined4 *DAT_005cbf30;

// USA 005CBF30 <- EU 005CBF08 (Ghidra, non-matching)
// GLOBAL DAT_005cbf2c int
// GLOBAL DAT_005cbf30 undefined4 *

void func_005CBF30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cbf2c;
  *(undefined4 *)(DAT_005cbf2c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cbf30;
  *DAT_005cbf30 = 0;
  puVar2[1] = 0;
  return;
}

