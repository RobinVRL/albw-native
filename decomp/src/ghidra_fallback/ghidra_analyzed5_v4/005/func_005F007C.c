#include "ghidra_types.h"

extern undefined4 *DAT_005f0078;
extern undefined4 *DAT_005f007c;

// USA 005F007C <- EU 005F0054 (Ghidra, non-matching)
// GLOBAL DAT_005f0078 undefined4 *
// GLOBAL DAT_005f007c undefined4 *

void func_005F007C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f0078;
  *DAT_005f0078 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f007c;
  *DAT_005f007c = 0;
  puVar1[1] = 0;
  return;
}

