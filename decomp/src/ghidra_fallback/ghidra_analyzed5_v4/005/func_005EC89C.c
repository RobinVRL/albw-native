#include "ghidra_types.h"

extern int DAT_005ec898;
extern undefined4 *DAT_005ec89c;

// USA 005EC89C <- EU 005EC874 (Ghidra, non-matching)
// GLOBAL DAT_005ec898 int
// GLOBAL DAT_005ec89c undefined4 *

void func_005EC89C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ec898;
  *(undefined4 *)(DAT_005ec898 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ec89c;
  *DAT_005ec89c = 0;
  puVar2[1] = 0;
  return;
}

