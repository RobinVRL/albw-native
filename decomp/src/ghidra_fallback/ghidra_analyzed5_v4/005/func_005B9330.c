#include "ghidra_types.h"

extern undefined4 *DAT_005b9318;
extern undefined4 DAT_005b931c;

// USA 005B9330 <- EU 005B9308 (Ghidra, non-matching)
// GLOBAL DAT_005b9318 undefined4 *
// GLOBAL DAT_005b931c undefined4

void func_005B9330(void)

{
  *DAT_005b9318 = DAT_005b931c;
  return;
}

