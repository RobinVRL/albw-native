#include "ghidra_types.h"

extern int func_0010AF08(void);

// USA 003E34D8 <- EU 003E34B8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4

void func_003E34D8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  
  iVar2 = func_0010AF08();
  if (param_1 < 2) {
    pbVar4 = *(byte **)(iVar2 + 0x5c + param_1 * 4);
    uVar3 = 1 - *pbVar4 & 0xff;
    pbVar4 = pbVar4 + uVar3 * 0x1c + 4;
    *(undefined4 *)pbVar4 = param_2;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    *(undefined4 *)(pbVar4 + 4) = param_3;
    *(undefined4 *)(pbVar4 + 8) = param_4;
    *(undefined4 *)(pbVar4 + 0xc) = param_5;
    *(undefined4 *)(pbVar4 + 0x10) = param_6;
    *(undefined4 *)(pbVar4 + 0x14) = param_7;
    coproc_moveto_Data_Synchronization(0);
    do {
      puVar5 = *(uint **)(iVar2 + 0x5c + param_1 * 4);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = *puVar5 & 0xffff0000 | uVar3 | 0x100;
  }
  return;
}

