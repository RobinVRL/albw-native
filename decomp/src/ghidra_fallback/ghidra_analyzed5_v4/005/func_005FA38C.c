#include "ghidra_types.h"

extern undefined4 *DAT_005fa388;
extern undefined4 *DAT_005fa38c;

// USA 005FA38C <- EU 005FA364 (Ghidra, non-matching)
// GLOBAL DAT_005fa388 undefined4 *
// GLOBAL DAT_005fa38c undefined4 *

void func_005FA38C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fa388;
  *DAT_005fa388 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fa38c;
  *DAT_005fa38c = 0;
  puVar1[1] = 0;
  return;
}

