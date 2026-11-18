#include "ghidra_types.h"

extern int DAT_0059ffe4;
extern undefined4 *DAT_0059ffe8;

// USA 0059FF94 <- EU 0059FF6C (Ghidra, non-matching)
// GLOBAL DAT_0059ffe4 int
// GLOBAL DAT_0059ffe8 undefined4 *

void func_0059FF94(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059ffe4;
  *(undefined4 *)(DAT_0059ffe4 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
  puVar2 = DAT_0059ffe8;
  *DAT_0059ffe8 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -5) = 0xa0;
  *(undefined1 *)((int)puVar2 + -0x13) = 0xff;
  *(undefined1 *)((int)puVar2 + -0x12) = 0xff;
  *(undefined1 *)((int)puVar2 + -0x11) = 0xff;
  *(undefined1 *)(puVar2 + -4) = 0xa0;
  *(undefined1 *)((int)puVar2 + -0xf) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xe) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xd) = 0xff;
  *(undefined1 *)(puVar2 + -3) = 0xff;
  *(undefined1 *)((int)puVar2 + -0xb) = 0x50;
  *(undefined1 *)((int)puVar2 + -10) = 0x46;
  *(undefined1 *)((int)puVar2 + -9) = 0x96;
  return;
}

