#include "ghidra_types.h"

extern int DAT_005de904;
extern undefined4 *DAT_005de908;
extern undefined4 *DAT_005de90c;
extern undefined4 DAT_005de910;
extern undefined4 *DAT_005de914;

// USA 005DE8E0 <- EU 005DE8B8 (Ghidra, non-matching)
// GLOBAL DAT_005de904 int
// GLOBAL DAT_005de908 undefined4 *
// GLOBAL DAT_005de90c undefined4 *
// GLOBAL DAT_005de910 undefined4
// GLOBAL DAT_005de914 undefined4 *

void func_005DE8E0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005de910;
  iVar1 = DAT_005de904;
  *(undefined4 *)(DAT_005de904 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005de908;
  *DAT_005de908 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005de90c;
  *DAT_005de90c = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = uVar3;
  *DAT_005de914 = 0;
  return;
}

