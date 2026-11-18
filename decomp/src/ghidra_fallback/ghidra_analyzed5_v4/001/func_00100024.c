#include "ghidra_types.h"

extern undefined4 *DAT_00100040;
extern undefined4 *DAT_00100044;

// USA 00100024 <- EU 00100024 (Ghidra, non-matching)
// GLOBAL DAT_00100040 undefined4 *
// GLOBAL DAT_00100044 undefined4 *

undefined4 * func_00100024(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00100044;
  for (puVar2 = DAT_00100040; puVar2 < puVar1; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return puVar2;
}

