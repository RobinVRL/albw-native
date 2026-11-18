#include "ghidra_types.h"

extern int DAT_005ccf14;
extern undefined4 *DAT_005ccf18;

// USA 005CCEDC <- EU 005CCEB4 (Ghidra, non-matching)
// GLOBAL DAT_005ccf14 int
// GLOBAL DAT_005ccf18 undefined4 *

void func_005CCEDC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ccf14;
  *(undefined4 *)(DAT_005ccf14 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005ccf18;
  *DAT_005ccf18 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -4) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xf) = 0x7f;
  *(undefined1 *)((int)puVar2 + -0xe) = 0x3f;
  *(undefined1 *)((int)puVar2 + -0xd) = 0x7f;
  *(undefined1 *)(puVar2 + -3) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xb) = 0xff;
  *(undefined1 *)((int)puVar2 + -10) = 0xcc;
  *(undefined1 *)((int)puVar2 + -9) = 0x93;
  return;
}

