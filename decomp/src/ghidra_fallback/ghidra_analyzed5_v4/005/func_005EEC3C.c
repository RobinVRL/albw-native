#include "ghidra_types.h"

extern undefined4 *DAT_005eec38;
extern undefined4 *DAT_005eec3c;

// USA 005EEC3C <- EU 005EEC14 (Ghidra, non-matching)
// GLOBAL DAT_005eec38 undefined4 *
// GLOBAL DAT_005eec3c undefined4 *

void func_005EEC3C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eec38;
  *DAT_005eec38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eec3c;
  *DAT_005eec3c = 0;
  puVar1[1] = 0;
  return;
}

