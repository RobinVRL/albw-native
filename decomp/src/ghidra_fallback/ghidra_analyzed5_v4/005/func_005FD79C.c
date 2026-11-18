#include "ghidra_types.h"

extern undefined4 *DAT_005fd798;
extern undefined4 *DAT_005fd79c;

// USA 005FD79C <- EU 005FD774 (Ghidra, non-matching)
// GLOBAL DAT_005fd798 undefined4 *
// GLOBAL DAT_005fd79c undefined4 *

void func_005FD79C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fd798;
  *DAT_005fd798 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fd79c;
  *DAT_005fd79c = 0;
  puVar1[1] = 0;
  return;
}

