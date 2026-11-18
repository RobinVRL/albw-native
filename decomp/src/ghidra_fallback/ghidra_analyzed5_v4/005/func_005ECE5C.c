#include "ghidra_types.h"

extern undefined4 *DAT_005ece58;
extern undefined4 *DAT_005ece5c;

// USA 005ECE5C <- EU 005ECE34 (Ghidra, non-matching)
// GLOBAL DAT_005ece58 undefined4 *
// GLOBAL DAT_005ece5c undefined4 *

void func_005ECE5C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ece58;
  *DAT_005ece58 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ece5c;
  *DAT_005ece5c = 0;
  puVar1[1] = 0;
  return;
}

