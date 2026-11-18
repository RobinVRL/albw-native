#include "ghidra_types.h"

extern undefined4 *DAT_005c2784;
extern undefined4 *DAT_005c2788;

// USA 005C2788 <- EU 005C2760 (Ghidra, non-matching)
// GLOBAL DAT_005c2784 undefined4 *
// GLOBAL DAT_005c2788 undefined4 *

void func_005C2788(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005c2784;
  *DAT_005c2784 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2788;
  *DAT_005c2788 = 0;
  puVar1[1] = 0;
  return;
}

