#include "ghidra_types.h"

extern undefined4 *DAT_005ec648;
extern undefined4 *DAT_005ec64c;

// USA 005EC64C <- EU 005EC624 (Ghidra, non-matching)
// GLOBAL DAT_005ec648 undefined4 *
// GLOBAL DAT_005ec64c undefined4 *

void func_005EC64C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ec648;
  *DAT_005ec648 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec64c;
  *DAT_005ec64c = 0;
  puVar1[1] = 0;
  return;
}

