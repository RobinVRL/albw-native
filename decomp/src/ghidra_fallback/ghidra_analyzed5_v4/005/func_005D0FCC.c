#include "ghidra_types.h"

extern undefined4 *DAT_005d0fc8;
extern undefined4 *DAT_005d0fcc;

// USA 005D0FCC <- EU 005D0FA4 (Ghidra, non-matching)
// GLOBAL DAT_005d0fc8 undefined4 *
// GLOBAL DAT_005d0fcc undefined4 *

void func_005D0FCC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005d0fc8;
  *DAT_005d0fc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005d0fcc;
  *DAT_005d0fcc = 0;
  puVar1[1] = 0;
  return;
}

