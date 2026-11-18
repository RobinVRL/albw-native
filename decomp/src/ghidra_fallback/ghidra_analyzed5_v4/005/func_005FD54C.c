#include "ghidra_types.h"

extern undefined4 *DAT_005fd548;
extern undefined4 *DAT_005fd54c;

// USA 005FD54C <- EU 005FD524 (Ghidra, non-matching)
// GLOBAL DAT_005fd548 undefined4 *
// GLOBAL DAT_005fd54c undefined4 *

void func_005FD54C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fd548;
  *DAT_005fd548 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fd54c;
  *DAT_005fd54c = 0;
  puVar1[1] = 0;
  return;
}

