#include "ghidra_types.h"

extern undefined4 *DAT_005a36cc;
extern undefined4 *DAT_005a36d0;

// USA 005A36D0 <- EU 005A36A8 (Ghidra, non-matching)
// GLOBAL DAT_005a36cc undefined4 *
// GLOBAL DAT_005a36d0 undefined4 *

void func_005A36D0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a36cc;
  *DAT_005a36cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a36d0;
  *DAT_005a36d0 = 0;
  puVar1[1] = 0;
  return;
}

