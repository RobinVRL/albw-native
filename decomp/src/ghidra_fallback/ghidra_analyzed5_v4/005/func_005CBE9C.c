#include "ghidra_types.h"

extern int DAT_005cbea8;
extern undefined4 *DAT_005cbeac;

// USA 005CBE9C <- EU 005CBE74 (Ghidra, non-matching)
// GLOBAL DAT_005cbea8 int
// GLOBAL DAT_005cbeac undefined4 *

void func_005CBE9C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cbea8;
  *(undefined4 *)(DAT_005cbea8 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005cbeac;
  *DAT_005cbeac = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -8) = 0;
  *(undefined1 *)((int)puVar2 + -0x1f) = 0;
  return;
}

