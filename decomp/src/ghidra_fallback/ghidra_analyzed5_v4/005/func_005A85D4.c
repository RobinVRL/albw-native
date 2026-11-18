#include "ghidra_types.h"

extern undefined1 *DAT_005a8600;
extern undefined4 DAT_005a8604;

// USA 005A85D4 <- EU 005A85AC (Ghidra, non-matching)
// GLOBAL DAT_005a8600 undefined1 *
// GLOBAL DAT_005a8604 undefined4

/* WARNING: Removing unreachable block (ram,0x005a85e0) */
/* WARNING: Removing unreachable block (ram,0x005a85e8) */
/* WARNING: Removing unreachable block (ram,0x005a85f4) */

void func_005A85D4(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_005a8600;
  *(undefined4 *)(DAT_005a8600 + 8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *puVar1 = 1;
  return;
}

