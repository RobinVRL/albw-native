#include "ghidra_types.h"

extern undefined4 *DAT_005d0e24;
extern undefined4 *DAT_005d0e28;
extern undefined4 DAT_005d0e2c;
extern undefined4 DAT_005d0e30;
extern undefined4 DAT_005d0e34;
extern undefined4 *DAT_005d0e38;
extern undefined4 DAT_005d0e3c;
extern undefined4 DAT_005d0e40;
extern undefined4 DAT_005d0e44;
extern undefined4 DAT_005d0e48;

// USA 005D0DC8 <- EU 005D0DA0 (Ghidra, non-matching)
// GLOBAL DAT_005d0e24 undefined4 *
// GLOBAL DAT_005d0e28 undefined4 *
// GLOBAL DAT_005d0e2c undefined4
// GLOBAL DAT_005d0e30 undefined4
// GLOBAL DAT_005d0e34 undefined4
// GLOBAL DAT_005d0e38 undefined4 *
// GLOBAL DAT_005d0e3c undefined4
// GLOBAL DAT_005d0e40 undefined4
// GLOBAL DAT_005d0e44 undefined4
// GLOBAL DAT_005d0e48 undefined4

void func_005D0DC8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = DAT_005d0e3c;
  puVar1 = DAT_005d0e24;
  *DAT_005d0e24 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005d0e2c;
  puVar1 = DAT_005d0e28;
  *DAT_005d0e28 = 0;
  puVar1[1] = 0;
  uVar6 = DAT_005d0e48;
  puVar1 = DAT_005d0e38;
  uVar4 = DAT_005d0e34;
  uVar3 = DAT_005d0e30;
  *DAT_005d0e38 = uVar5;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar3;
  puVar1[6] = uVar2;
  puVar1[7] = uVar6;
  puVar1[8] = uVar4;
  uVar5 = DAT_005d0e44;
  uVar2 = DAT_005d0e40;
  puVar1[9] = uVar4;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  puVar1[0xe] = uVar4;
  puVar1[0xf] = uVar4;
  puVar1[4] = uVar2;
  puVar1[5] = uVar5;
  return;
}

