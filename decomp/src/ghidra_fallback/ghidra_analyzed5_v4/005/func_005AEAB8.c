#include "ghidra_types.h"

extern undefined4 *DAT_005aeab4;
extern undefined4 *DAT_005aeab8;

// USA 005AEAB8 <- EU 005AEA90 (Ghidra, non-matching)
// GLOBAL DAT_005aeab4 undefined4 *
// GLOBAL DAT_005aeab8 undefined4 *

void func_005AEAB8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aeab4;
  *DAT_005aeab4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aeab8;
  *DAT_005aeab8 = 0;
  puVar1[1] = 0;
  return;
}

