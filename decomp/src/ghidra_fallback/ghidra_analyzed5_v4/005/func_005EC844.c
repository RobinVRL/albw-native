#include "ghidra_types.h"

extern undefined4 *DAT_005ec840;
extern undefined4 *DAT_005ec844;

// USA 005EC844 <- EU 005EC81C (Ghidra, non-matching)
// GLOBAL DAT_005ec840 undefined4 *
// GLOBAL DAT_005ec844 undefined4 *

void func_005EC844(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec840;
  *DAT_005ec840 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec844;
  *DAT_005ec844 = 0;
  puVar1[1] = 0;
  return;
}

