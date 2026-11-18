#include "ghidra_types.h"

extern undefined4 *DAT_005edae8;
extern undefined4 *DAT_005edaec;

// USA 005EDAEC <- EU 005EDAC4 (Ghidra, non-matching)
// GLOBAL DAT_005edae8 undefined4 *
// GLOBAL DAT_005edaec undefined4 *

void func_005EDAEC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edae8;
  *DAT_005edae8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edaec;
  *DAT_005edaec = 0;
  puVar1[1] = 0;
  return;
}

