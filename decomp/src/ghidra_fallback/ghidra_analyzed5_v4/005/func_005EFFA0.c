#include "ghidra_types.h"

extern undefined4 *DAT_005eff9c;
extern undefined4 *DAT_005effa0;

// USA 005EFFA0 <- EU 005EFF78 (Ghidra, non-matching)
// GLOBAL DAT_005eff9c undefined4 *
// GLOBAL DAT_005effa0 undefined4 *

void func_005EFFA0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eff9c;
  *DAT_005eff9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005effa0;
  *DAT_005effa0 = 0;
  puVar1[1] = 0;
  return;
}

