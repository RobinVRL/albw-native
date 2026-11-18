#include "ghidra_types.h"

extern int DAT_005de4b4;
extern undefined4 *DAT_005de4b8;
extern undefined4 DAT_005de4bc;

// USA 005DE4A8 <- EU 005DE480 (Ghidra, non-matching)
// GLOBAL DAT_005de4b4 int
// GLOBAL DAT_005de4b8 undefined4 *
// GLOBAL DAT_005de4bc undefined4

void func_005DE4A8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005de4bc;
  iVar1 = DAT_005de4b4;
  *(undefined4 *)(DAT_005de4b4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005de4b8;
  *DAT_005de4b8 = 0;
  puVar2[1] = 0;
  puVar2[-3] = uVar3;
  puVar2[-4] = uVar3;
  return;
}

