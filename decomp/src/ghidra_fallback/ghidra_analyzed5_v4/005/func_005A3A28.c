#include "ghidra_types.h"

extern int DAT_005a3b48;
extern undefined4 *DAT_005a3b4c;
extern undefined4 DAT_005a3b50;
extern uint DAT_005a3b54;
extern undefined4 DAT_005a3b58;
extern undefined4 DAT_005a3b5c;
extern undefined4 DAT_005a3b60;
extern undefined4 *DAT_005a3b64;
extern undefined4 DAT_005a3b68;

// USA 005A3A28 <- EU 005A3A00 (Ghidra, non-matching)
// GLOBAL DAT_005a3b48 int
// GLOBAL DAT_005a3b4c undefined4 *
// GLOBAL DAT_005a3b50 undefined4
// GLOBAL DAT_005a3b54 uint
// GLOBAL DAT_005a3b58 undefined4
// GLOBAL DAT_005a3b5c undefined4
// GLOBAL DAT_005a3b60 undefined4
// GLOBAL DAT_005a3b64 undefined4 *
// GLOBAL DAT_005a3b68 undefined4

void func_005A3A28(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = DAT_005a3b5c;
  iVar1 = DAT_005a3b48;
  *(undefined4 *)(DAT_005a3b48 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  uVar5 = DAT_005a3b60;
  puVar2 = DAT_005a3b4c;
  *DAT_005a3b4c = 0;
  puVar2[1] = 0;
  puVar2[-0xc] = 0xff;
  uVar6 = DAT_005a3b68;
  puVar2[-0xb] = DAT_005a3b50;
  puVar2[-10] = 0xffffffff;
  uVar3 = DAT_005a3b54;
  puVar2[-9] = DAT_005a3b54;
  puVar2[-8] = uVar3 ^ (int)uVar3 >> 8;
  puVar2[-7] = DAT_005a3b58;
  puVar2[-6] = 0xffff00ff;
  puVar2[-5] = 0xff00ffff;
  puVar2[-4] = 0xffffff;
  puVar2 = DAT_005a3b64;
  *DAT_005a3b64 = uVar4;
  puVar2[1] = uVar4;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar6;
  puVar2[6] = uVar6;
  puVar2[7] = uVar5;
  puVar2[8] = uVar5;
  puVar2[9] = uVar5;
  puVar2[10] = uVar5;
  puVar2[0xb] = uVar5;
  puVar2[0xc] = uVar5;
  puVar2[0xd] = uVar4;
  puVar2[0xe] = uVar4;
  puVar2[0xf] = uVar5;
  puVar2[0x10] = uVar4;
  puVar2[0x11] = uVar5;
  puVar2[0x12] = uVar4;
  puVar2[0x13] = uVar5;
  puVar2[0x14] = uVar4;
  puVar2[0x15] = uVar4;
  puVar2[0x16] = uVar5;
  puVar2[0x17] = uVar5;
  puVar2[0x18] = uVar5;
  puVar2[0x19] = uVar5;
  puVar2[0x1a] = uVar4;
  puVar2[0x1b] = uVar5;
  puVar2[0x1c] = uVar5;
  puVar2[0x1d] = uVar4;
  puVar2[0x1e] = uVar5;
  puVar2[0x1f] = uVar5;
  puVar2[0x20] = uVar4;
  puVar2[0x21] = uVar5;
  puVar2[0x22] = uVar5;
  puVar2[0x23] = uVar5;
  return;
}

