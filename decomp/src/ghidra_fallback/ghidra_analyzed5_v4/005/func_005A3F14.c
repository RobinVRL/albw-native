#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005a3f4c;
extern undefined4 DAT_005a3f50;
extern uint DAT_005a3f54;

// USA 005A3F14 <- EU 005A3EEC (Ghidra, non-matching)
// GLOBAL DAT_005a3f4c undefined4 *
// GLOBAL DAT_005a3f50 undefined4
// GLOBAL DAT_005a3f54 uint

void func_005A3F14(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = DAT_005a3f4c;
  DAT_005a3f4c[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0;
  uVar2 = DAT_005a3f50;
  puVar1[9] = 0;
  uVar3 = DAT_005a3f54;
  *puVar1 = uVar2;
  uVar4 = func_00114608(uVar3,0xffffffff);
  puVar1[1] = (int)uVar4;
  puVar1[2] = (int)uVar4;
  uVar4 = func_00114608(0,(uint)(puVar1 + 2));
  puVar1[3] = (int)uVar4;
  puVar1[4] = (int)uVar4;
  return;
}

