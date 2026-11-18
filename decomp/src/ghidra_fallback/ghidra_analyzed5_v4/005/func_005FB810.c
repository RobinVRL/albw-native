#include "ghidra_types.h"

extern undefined4 *DAT_005fb80c;
extern undefined4 *DAT_005fb810;

// USA 005FB810 <- EU 005FB7E8 (Ghidra, non-matching)
// GLOBAL DAT_005fb80c undefined4 *
// GLOBAL DAT_005fb810 undefined4 *

void func_005FB810(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fb80c;
  *DAT_005fb80c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fb810;
  *DAT_005fb810 = 0;
  puVar1[1] = 0;
  return;
}

