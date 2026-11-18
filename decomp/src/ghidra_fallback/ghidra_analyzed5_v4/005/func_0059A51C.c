#include "ghidra_types.h"

extern undefined4 *DAT_0059a518;
extern undefined4 *DAT_0059a51c;

// USA 0059A51C <- EU 0059A4F4 (Ghidra, non-matching)
// GLOBAL DAT_0059a518 undefined4 *
// GLOBAL DAT_0059a51c undefined4 *

void func_0059A51C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059a518;
  *DAT_0059a518 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059a51c;
  *DAT_0059a51c = 0;
  puVar1[1] = 0;
  return;
}

