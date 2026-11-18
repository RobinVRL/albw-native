#include "ghidra_types.h"

extern int DAT_0059a29c;
extern undefined4 *DAT_0059a2a0;
extern undefined4 *DAT_0059a2a4;
extern undefined4 DAT_0059a2a8;

// USA 0059A278 <- EU 0059A250 (Ghidra, non-matching)
// GLOBAL DAT_0059a29c int
// GLOBAL DAT_0059a2a0 undefined4 *
// GLOBAL DAT_0059a2a4 undefined4 *
// GLOBAL DAT_0059a2a8 undefined4

void func_0059A278(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0059a29c;
  *(undefined4 *)(DAT_0059a29c + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  puVar2 = DAT_0059a2a0;
  *DAT_0059a2a0 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_0059a2a8;
  puVar2[-5] = 0;
  puVar2 = DAT_0059a2a4;
  puVar4 = DAT_0059a2a4 + 1;
  *DAT_0059a2a4 = 0;
  *puVar4 = 0;
  puVar2[2] = uVar3;
  puVar2[3] = 0;
  puVar2[4] = 0x8000;
  return;
}

