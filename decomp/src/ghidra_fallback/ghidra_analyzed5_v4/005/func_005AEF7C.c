#include "ghidra_types.h"

extern undefined4 *DAT_005aef78;
extern undefined4 *DAT_005aef7c;

// USA 005AEF7C <- EU 005AEF54 (Ghidra, non-matching)
// GLOBAL DAT_005aef78 undefined4 *
// GLOBAL DAT_005aef7c undefined4 *

void func_005AEF7C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aef78;
  *DAT_005aef78 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aef7c;
  *DAT_005aef7c = 0;
  puVar1[1] = 0;
  return;
}

