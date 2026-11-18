#include "ghidra_types.h"

extern undefined4 *DAT_005b9270;
extern undefined4 *DAT_005b9274;

// USA 005B9274 <- EU 005B924C (Ghidra, non-matching)
// GLOBAL DAT_005b9270 undefined4 *
// GLOBAL DAT_005b9274 undefined4 *

void func_005B9274(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005b9270;
  *DAT_005b9270 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b9274;
  *DAT_005b9274 = 0;
  puVar1[1] = 0;
  return;
}

