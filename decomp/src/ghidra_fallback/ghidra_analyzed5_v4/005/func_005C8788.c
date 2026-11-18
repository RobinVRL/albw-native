#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005c87d4;
extern undefined4 *DAT_005c87d8;
extern undefined4 DAT_005c87dc;
extern undefined4 DAT_005c87e0;
extern undefined4 *DAT_005c87e4;
extern undefined4 *DAT_005c87e8;
extern undefined4 DAT_005c87ec;
extern undefined4 DAT_005c87f0;
extern undefined4 DAT_005c87f4;
extern uint DAT_005c87f8;

// USA 005C8788 <- EU 005C8760 (Ghidra, non-matching)
// GLOBAL DAT_005c87d4 undefined4 *
// GLOBAL DAT_005c87d8 undefined4 *
// GLOBAL DAT_005c87dc undefined4
// GLOBAL DAT_005c87e0 undefined4
// GLOBAL DAT_005c87e4 undefined4 *
// GLOBAL DAT_005c87e8 undefined4 *
// GLOBAL DAT_005c87ec undefined4
// GLOBAL DAT_005c87f0 undefined4
// GLOBAL DAT_005c87f4 undefined4
// GLOBAL DAT_005c87f8 uint

void func_005C8788(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_005c87d4;
  DAT_005c87d4[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005c87dc;
  puVar1 = DAT_005c87d8;
  *DAT_005c87d8 = 0;
  puVar1[1] = 0;
  uVar5 = DAT_005c87f0;
  puVar4 = DAT_005c87e4;
  uVar3 = DAT_005c87e0;
  puVar1 = DAT_005c87d4;
  *DAT_005c87e4 = uVar2;
  puVar4[1] = uVar3;
  puVar4[2] = uVar3;
  puVar4[3] = uVar2;
  uVar2 = DAT_005c87ec;
  puVar4 = DAT_005c87e8;
  *DAT_005c87e8 = uVar3;
  puVar4[1] = uVar2;
  puVar4[2] = uVar5;
  uVar2 = DAT_005c87f4;
  puVar4[3] = uVar3;
  puVar4[4] = uVar3;
  puVar4[5] = uVar2;
  uVar6 = func_00114608(DAT_005c87f8,0);
  *puVar1 = (int)uVar6;
  return;
}

