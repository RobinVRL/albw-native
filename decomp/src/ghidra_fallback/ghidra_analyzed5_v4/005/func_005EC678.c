#include "ghidra_types.h"

extern undefined4 *DAT_005ec674;
extern undefined4 *DAT_005ec678;

// USA 005EC678 <- EU 005EC650 (Ghidra, non-matching)
// GLOBAL DAT_005ec674 undefined4 *
// GLOBAL DAT_005ec678 undefined4 *

void func_005EC678(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec674;
  *DAT_005ec674 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec678;
  *DAT_005ec678 = 0;
  puVar1[1] = 0;
  return;
}

