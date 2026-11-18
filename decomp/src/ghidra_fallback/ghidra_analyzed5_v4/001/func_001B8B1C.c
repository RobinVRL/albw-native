#include "ghidra_types.h"

extern undefined4 DAT_001b8c6c;
extern undefined4 *DAT_001b8c70;
extern undefined4 *DAT_001b8c74;

// USA 001B8B1C <- EU 001B8B1C (Ghidra, non-matching)
// GLOBAL DAT_001b8c6c undefined4
// GLOBAL DAT_001b8c70 undefined4 *
// GLOBAL DAT_001b8c74 undefined4 *

void * func_001B8B1C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined1 *)(param_1 + 0x57d) = 0;
  *(undefined2 *)(param_1 + 0x582) = 0;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  *(undefined1 *)(param_1 + 0x57c) = 0;
  *(undefined1 *)(param_1 + 0x57b) = 0;
  *(undefined2 *)(param_1 + 0x574) = 0xffff;
  *(undefined2 *)(param_1 + 0x576) = 0;
  *(undefined1 *)(param_1 + 0x579) = 1;
  uVar1 = DAT_001b8c6c;
  *(undefined1 *)(param_1 + 0x578) = 0xff;
  *(undefined1 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x568) = uVar1;
  *(undefined4 *)(param_1 + 0x56c) = uVar1;
  *(undefined4 *)(param_1 + 0x570) = uVar1;
  uVar3 = 0;
  do {
    iVar4 = param_1 + 0x50;
    if (uVar3 < 3) {
      iVar4 = iVar4 + uVar3 * 0x4c;
    }
    uVar3 = uVar3 + 1;
    **(undefined1 **)(iVar4 + 4) = 0;
  } while ((int)uVar3 < 3);
  uVar3 = 0;
  do {
    iVar4 = param_1 + 0x134;
    if (uVar3 < 3) {
      iVar4 = iVar4 + uVar3 * 0x4c;
    }
    uVar3 = uVar3 + 1;
    **(undefined1 **)(iVar4 + 4) = 0;
  } while ((int)uVar3 < 3);
  uVar3 = 0;
  do {
    iVar4 = param_1 + 0x218;
    if (uVar3 < 2) {
      iVar4 = iVar4 + uVar3 * 0x4c;
    }
    uVar3 = uVar3 + 1;
    **(undefined1 **)(iVar4 + 4) = 0;
    puVar2 = DAT_001b8c74;
  } while ((int)uVar3 < 2);
  **(undefined1 **)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x57a) = 0;
  **(undefined1 **)(param_1 + 0x2b4) = 0;
  uVar5 = *DAT_001b8c70;
  uVar6 = DAT_001b8c70[1];
  uVar7 = DAT_001b8c70[2];
  *(undefined4 *)(param_1 + 0x364) = DAT_001b8c70[3];
  *(undefined4 *)(param_1 + 0x364) = uVar1;
  *(undefined4 *)(param_1 + 0x358) = uVar5;
  *(undefined4 *)(param_1 + 0x35c) = uVar6;
  *(undefined4 *)(param_1 + 0x360) = uVar7;
  *(undefined4 *)(param_1 + 0x368) = *puVar2;
  *(undefined4 *)(param_1 + 0x36c) = puVar2[1];
  *(undefined4 *)(param_1 + 0x370) = puVar2[2];
  *(undefined4 *)(param_1 + 0x374) = *puVar2;
  *(undefined4 *)(param_1 + 0x378) = puVar2[1];
  *(undefined4 *)(param_1 + 0x37c) = puVar2[2];
  *(undefined1 *)(param_1 + 0x584) = 0;
  return (void *)param_1;
}

