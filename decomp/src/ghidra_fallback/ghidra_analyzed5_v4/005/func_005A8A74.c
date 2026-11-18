#include "ghidra_types.h"

extern int DAT_005a8a70;
extern undefined4 *DAT_005a8a74;

// USA 005A8A74 <- EU 005A8A4C (Ghidra, non-matching)
// GLOBAL DAT_005a8a70 int
// GLOBAL DAT_005a8a74 undefined4 *

void func_005A8A74(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a8a70;
  *(undefined4 *)(DAT_005a8a70 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a8a74;
  *DAT_005a8a74 = 0;
  puVar2[1] = 0;
  return;
}

