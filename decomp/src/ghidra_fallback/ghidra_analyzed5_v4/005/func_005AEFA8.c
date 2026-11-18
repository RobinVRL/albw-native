#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int DAT_005af0f4;
extern undefined4 *DAT_005af0f8;
extern undefined *DAT_005af0fc;
extern int DAT_005af100;
extern int DAT_005af104;
extern undefined4 DAT_005af108;
extern undefined4 *DAT_005af10c;
extern undefined4 DAT_005af110;
extern undefined4 DAT_005af114;
extern undefined4 DAT_005af118;
extern undefined4 *DAT_005af11c;
extern undefined4 DAT_005af120;
extern int DAT_005af124;
extern undefined *DAT_005af128;

// USA 005AEFA8 <- EU 005AEF80 (Ghidra, non-matching)
// GLOBAL DAT_005af0f4 int
// GLOBAL DAT_005af0f8 undefined4 *
// GLOBAL DAT_005af0fc undefined *
// GLOBAL DAT_005af100 int
// GLOBAL DAT_005af104 int
// GLOBAL DAT_005af108 undefined4
// GLOBAL DAT_005af10c undefined4 *
// GLOBAL DAT_005af110 undefined4
// GLOBAL DAT_005af114 undefined4
// GLOBAL DAT_005af118 undefined4
// GLOBAL DAT_005af11c undefined4 *
// GLOBAL DAT_005af120 undefined4
// GLOBAL DAT_005af124 int
// GLOBAL DAT_005af128 undefined *

undefined4 func_005AEFA8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_005af0f4;
  *(undefined4 *)(DAT_005af0f4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005af0f8;
  *DAT_005af0f8 = 0;
  puVar2[1] = 0;
  func_00100118(DAT_005af100,DAT_005af0fc,0x68,2);
  func_00100118(DAT_005af104,DAT_005af0fc,0x68,0xc);
  uVar4 = DAT_005af110;
  puVar2 = DAT_005af10c;
  uVar3 = DAT_005af108;
  puVar7 = DAT_005af10c + 3;
  *DAT_005af10c = DAT_005af108;
  puVar2[1] = uVar3;
  puVar2[2] = uVar3;
  uVar5 = DAT_005af114;
  *puVar7 = uVar3;
  puVar2[4] = uVar4;
  puVar2[5] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  puVar2[8] = uVar4;
  puVar2[9] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar3;
  puVar2[0xe] = uVar4;
  puVar2[0xf] = uVar4;
  puVar2[0x10] = uVar4;
  puVar2[0x11] = uVar4;
  puVar2[0x12] = uVar4;
  puVar2[0x13] = uVar4;
  puVar2[0x14] = uVar3;
  puVar2[0x15] = uVar4;
  puVar2[0x16] = uVar3;
  puVar2[0x17] = uVar3;
  uVar4 = DAT_005af120;
  puVar2 = DAT_005af11c;
  uVar3 = DAT_005af118;
  puVar7 = DAT_005af11c + 7;
  *DAT_005af11c = uVar5;
  puVar2[1] = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar2[4] = uVar3;
  puVar2[5] = uVar3;
  puVar2[6] = uVar3;
  *puVar7 = uVar3;
  puVar2[8] = uVar4;
  puVar2[9] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar3;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = uVar4;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = uVar3;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = uVar3;
  puVar2[0x14] = uVar5;
  puVar2[0x15] = uVar3;
  puVar2[0x16] = uVar3;
  puVar2[0x17] = uVar5;
  puVar2[0x18] = uVar3;
  puVar2[0x19] = uVar5;
  puVar2[0x1a] = uVar3;
  puVar2[0x1b] = uVar3;
  puVar2[0x1c] = uVar5;
  puVar2[0x1d] = uVar3;
  puVar2[0x1e] = uVar3;
  puVar2[0x1f] = uVar4;
  puVar2[0x20] = uVar3;
  puVar6 = DAT_005af128;
  puVar2[0x21] = uVar3;
  puVar2[0x22] = uVar4;
  puVar2[0x23] = uVar3;
  return func_00100118(DAT_005af124,puVar6,8,0xd);
}

