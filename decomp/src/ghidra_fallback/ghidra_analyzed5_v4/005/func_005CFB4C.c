#include "ghidra_types.h"

extern undefined4 *DAT_005cfb48;
extern undefined4 *DAT_005cfb4c;

// USA 005CFB4C <- EU 005CFB24 (Ghidra, non-matching)
// GLOBAL DAT_005cfb48 undefined4 *
// GLOBAL DAT_005cfb4c undefined4 *

void func_005CFB4C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cfb48;
  *DAT_005cfb48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfb4c;
  *DAT_005cfb4c = 0;
  puVar1[1] = 0;
  return;
}

