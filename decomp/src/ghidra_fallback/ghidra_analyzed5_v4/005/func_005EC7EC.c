#include "ghidra_types.h"

extern undefined4 *DAT_005ec7e8;
extern undefined4 *DAT_005ec7ec;

// USA 005EC7EC <- EU 005EC7C4 (Ghidra, non-matching)
// GLOBAL DAT_005ec7e8 undefined4 *
// GLOBAL DAT_005ec7ec undefined4 *

void func_005EC7EC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec7e8;
  *DAT_005ec7e8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec7ec;
  *DAT_005ec7ec = 0;
  puVar1[1] = 0;
  return;
}

