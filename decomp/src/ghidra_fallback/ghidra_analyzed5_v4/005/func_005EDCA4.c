#include "ghidra_types.h"

extern undefined4 *DAT_005edca0;
extern undefined4 *DAT_005edca4;

// USA 005EDCA4 <- EU 005EDC7C (Ghidra, non-matching)
// GLOBAL DAT_005edca0 undefined4 *
// GLOBAL DAT_005edca4 undefined4 *

void func_005EDCA4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edca0;
  *DAT_005edca0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edca4;
  *DAT_005edca4 = 0;
  puVar1[1] = 0;
  return;
}

