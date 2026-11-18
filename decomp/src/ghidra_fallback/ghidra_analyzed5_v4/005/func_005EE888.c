#include "ghidra_types.h"

extern undefined4 *DAT_005ee884;
extern undefined4 *DAT_005ee888;

// USA 005EE888 <- EU 005EE860 (Ghidra, non-matching)
// GLOBAL DAT_005ee884 undefined4 *
// GLOBAL DAT_005ee888 undefined4 *

void func_005EE888(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005ee884;
  *DAT_005ee884 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ee888;
  *DAT_005ee888 = 0;
  puVar1[1] = 0;
  return;
}

