#include "ghidra_types.h"

extern undefined4 *DAT_005edc1c;
extern undefined4 *DAT_005edc20;

// USA 005EDC20 <- EU 005EDBF8 (Ghidra, non-matching)
// GLOBAL DAT_005edc1c undefined4 *
// GLOBAL DAT_005edc20 undefined4 *

void func_005EDC20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edc1c;
  *DAT_005edc1c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edc20;
  *DAT_005edc20 = 0;
  puVar1[1] = 0;
  return;
}

