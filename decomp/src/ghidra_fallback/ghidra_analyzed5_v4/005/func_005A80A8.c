#include "ghidra_types.h"

extern int DAT_005a80d8;
extern undefined4 *DAT_005a80dc;
extern undefined4 *DAT_005a80e0;
extern undefined4 DAT_005a80e4;
extern undefined4 DAT_005a80e8;
extern undefined4 DAT_005a80ec;
extern undefined4 *DAT_005a80f0;

// USA 005A80A8 <- EU 005A8080 (Ghidra, non-matching)
// GLOBAL DAT_005a80d8 int
// GLOBAL DAT_005a80dc undefined4 *
// GLOBAL DAT_005a80e0 undefined4 *
// GLOBAL DAT_005a80e4 undefined4
// GLOBAL DAT_005a80e8 undefined4
// GLOBAL DAT_005a80ec undefined4
// GLOBAL DAT_005a80f0 undefined4 *

void func_005A80A8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a80d8;
  *(undefined4 *)(DAT_005a80d8 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005a80dc;
  *DAT_005a80dc = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005a80e0;
  DAT_005a80e0[2] = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  *puVar2 = DAT_005a80e4;
  *DAT_005a80f0 = 0;
  return;
}

