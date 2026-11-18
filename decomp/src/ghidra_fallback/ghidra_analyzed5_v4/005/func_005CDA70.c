#include "ghidra_types.h"

extern undefined4 *DAT_005cda6c;
extern undefined4 *DAT_005cda70;

// USA 005CDA70 <- EU 005CDA48 (Ghidra, non-matching)
// GLOBAL DAT_005cda6c undefined4 *
// GLOBAL DAT_005cda70 undefined4 *

void func_005CDA70(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cda6c;
  *DAT_005cda6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cda70;
  *DAT_005cda70 = 0;
  puVar1[1] = 0;
  return;
}

