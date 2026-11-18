#include "ghidra_types.h"

extern undefined4 *DAT_005ec814;
extern undefined4 *DAT_005ec818;

// USA 005EC818 <- EU 005EC7F0 (Ghidra, non-matching)
// GLOBAL DAT_005ec814 undefined4 *
// GLOBAL DAT_005ec818 undefined4 *

void func_005EC818(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec814;
  *DAT_005ec814 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec818;
  *DAT_005ec818 = 0;
  puVar1[1] = 0;
  return;
}

