#include "ghidra_types.h"

extern undefined4 *DAT_005fbc6c;
extern undefined4 *DAT_005fbc70;

// USA 005FBC70 <- EU 005FBC48 (Ghidra, non-matching)
// GLOBAL DAT_005fbc6c undefined4 *
// GLOBAL DAT_005fbc70 undefined4 *

void func_005FBC70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fbc6c;
  *DAT_005fbc6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fbc70;
  *DAT_005fbc70 = 0;
  puVar1[1] = 0;
  return;
}

