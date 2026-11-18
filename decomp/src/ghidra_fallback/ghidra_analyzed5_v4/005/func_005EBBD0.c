#include "ghidra_types.h"

extern undefined1 *DAT_005ebbd0;

// USA 005EBBD0 <- EU 005EBBA8 (Ghidra, non-matching)
// GLOBAL DAT_005ebbd0 undefined1 *

void func_005EBBD0(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_005ebbd0;
  *DAT_005ebbd0 = 0x7f;
  puVar1[1] = 0x7f;
  puVar1[2] = 0x7f;
  puVar1[3] = 0x7f;
  puVar1[4] = 0x7f;
  return;
}

