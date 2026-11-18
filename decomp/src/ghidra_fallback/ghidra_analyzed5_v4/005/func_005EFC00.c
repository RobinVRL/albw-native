#include "ghidra_types.h"

extern undefined4 *DAT_005efbfc;
extern undefined4 *DAT_005efc00;

// USA 005EFC00 <- EU 005EFBD8 (Ghidra, non-matching)
// GLOBAL DAT_005efbfc undefined4 *
// GLOBAL DAT_005efc00 undefined4 *

void func_005EFC00(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005efbfc;
  *DAT_005efbfc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005efc00;
  *DAT_005efc00 = 0;
  puVar1[1] = 0;
  return;
}

