#include "ghidra_types.h"

extern undefined4 *DAT_005c205c;
extern undefined4 *DAT_005c2060;

// USA 005C2060 <- EU 005C2038 (Ghidra, non-matching)
// GLOBAL DAT_005c205c undefined4 *
// GLOBAL DAT_005c2060 undefined4 *

void func_005C2060(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c205c;
  *DAT_005c205c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2060;
  *DAT_005c2060 = 0;
  puVar1[1] = 0;
  return;
}

