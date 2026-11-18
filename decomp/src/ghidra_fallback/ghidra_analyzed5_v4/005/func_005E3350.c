#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005e3370;
extern undefined4 DAT_005e3374;
extern uint DAT_005e3378;

// USA 005E3350 <- EU 005E3328 (Ghidra, non-matching)
// GLOBAL DAT_005e3370 undefined4 *
// GLOBAL DAT_005e3374 undefined4
// GLOBAL DAT_005e3378 uint

void func_005E3350(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = DAT_005e3370;
  DAT_005e3370[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  uVar2 = DAT_005e3374;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = uVar2;
  puVar1[1] = 0x80000000;
  uVar3 = func_00114608(DAT_005e3378,0x80000000);
  puVar1[2] = (int)uVar3;
  return;
}

