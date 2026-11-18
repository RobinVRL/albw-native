#include "ghidra_types.h"

extern undefined4 *DAT_005cfb1c;
extern undefined4 *DAT_005cfb20;

// USA 005CFB20 <- EU 005CFAF8 (Ghidra, non-matching)
// GLOBAL DAT_005cfb1c undefined4 *
// GLOBAL DAT_005cfb20 undefined4 *

void func_005CFB20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfb1c;
  *DAT_005cfb1c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfb20;
  *DAT_005cfb20 = 0;
  puVar1[1] = 0;
  return;
}

