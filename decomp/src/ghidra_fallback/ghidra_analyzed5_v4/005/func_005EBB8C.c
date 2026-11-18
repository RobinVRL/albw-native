#include "ghidra_types.h"

extern undefined4 *DAT_005ebb74;
extern undefined4 DAT_005ebb78;

// USA 005EBB8C <- EU 005EBB64 (Ghidra, non-matching)
// GLOBAL DAT_005ebb74 undefined4 *
// GLOBAL DAT_005ebb78 undefined4

void func_005EBB8C(void)

{
  *DAT_005ebb74 = DAT_005ebb78;
  return;
}

