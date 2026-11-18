#include "ghidra_types.h"

extern undefined4 *DAT_005a8578;
extern undefined4 *DAT_005a857c;

// USA 005A857C <- EU 005A8554 (Ghidra, non-matching)
// GLOBAL DAT_005a8578 undefined4 *
// GLOBAL DAT_005a857c undefined4 *

void func_005A857C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005a8578;
  *DAT_005a8578 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a857c;
  *DAT_005a857c = 0;
  puVar1[1] = 0;
  return;
}

