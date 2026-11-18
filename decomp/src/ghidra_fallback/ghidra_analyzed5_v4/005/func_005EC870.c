#include "ghidra_types.h"

extern undefined4 *DAT_005ec86c;
extern undefined4 *DAT_005ec870;

// USA 005EC870 <- EU 005EC848 (Ghidra, non-matching)
// GLOBAL DAT_005ec86c undefined4 *
// GLOBAL DAT_005ec870 undefined4 *

void func_005EC870(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec86c;
  *DAT_005ec86c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec870;
  *DAT_005ec870 = 0;
  puVar1[1] = 0;
  return;
}

