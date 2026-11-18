#include "ghidra_types.h"

extern undefined4 *DAT_005d0f44;
extern undefined4 DAT_005d0f48;

// USA 005D0F5C <- EU 005D0F34 (Ghidra, non-matching)
// GLOBAL DAT_005d0f44 undefined4 *
// GLOBAL DAT_005d0f48 undefined4

void func_005D0F5C(void)

{
  *DAT_005d0f44 = DAT_005d0f48;
  return;
}

