#include "ghidra_types.h"

extern undefined4 *DAT_005aaf58;
extern undefined4 *DAT_005aaf5c;

// USA 005AAF5C <- EU 005AAF34 (Ghidra, non-matching)
// GLOBAL DAT_005aaf58 undefined4 *
// GLOBAL DAT_005aaf5c undefined4 *

void func_005AAF5C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aaf58;
  *DAT_005aaf58 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aaf5c;
  *DAT_005aaf5c = 0;
  puVar1[1] = 0;
  return;
}

