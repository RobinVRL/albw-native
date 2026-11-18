#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005e0ac4;
extern undefined4 DAT_005e0ac8;
extern undefined4 *DAT_005e0acc;
extern undefined4 *DAT_005e0ad0;
extern undefined4 DAT_005e0ad4;

// USA 005E0A84 <- EU 005E0A5C (Ghidra, non-matching)
// GLOBAL DAT_005e0ac4 undefined4 *
// GLOBAL DAT_005e0ac8 undefined4
// GLOBAL DAT_005e0acc undefined4 *
// GLOBAL DAT_005e0ad0 undefined4 *
// GLOBAL DAT_005e0ad4 undefined4

void func_005E0A84(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = DAT_005e0ac4;
  DAT_005e0ac4[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = DAT_005e0acc;
  uVar4 = DAT_005e0ac8;
  *DAT_005e0acc = DAT_005e0ac8;
  puVar2[1] = uVar4;
  puVar2[2] = uVar4;
  puVar2[3] = uVar4;
  uVar5 = func_00114608(0x4f000000,0);
  *puVar1 = (int)uVar5;
  uVar3 = DAT_005e0ad4;
  puVar1 = DAT_005e0ad0;
  *DAT_005e0ad0 = uVar4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  return;
}

