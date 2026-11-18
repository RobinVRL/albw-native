#include "ghidra_types.h"

extern undefined4 *DAT_005fa76c;
extern undefined4 *DAT_005fa770;

// USA 005FA770 <- EU 005FA748 (Ghidra, non-matching)
// GLOBAL DAT_005fa76c undefined4 *
// GLOBAL DAT_005fa770 undefined4 *

void func_005FA770(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005fa76c;
  *DAT_005fa76c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fa770;
  *DAT_005fa770 = 0;
  puVar1[1] = 0;
  return;
}

