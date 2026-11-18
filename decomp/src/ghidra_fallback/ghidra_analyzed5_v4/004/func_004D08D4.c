#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0026F124(int param_1);
extern undefined4 DAT_004d0a14;
extern undefined4 *DAT_004d0a18;
extern undefined4 *DAT_004d0a1c;
extern undefined4 *DAT_004d0a20;
extern undefined4 DAT_004d0a24;
extern undefined4 DAT_004d0a28;
extern undefined4 *DAT_004d0a2c;
extern undefined4 DAT_004d0a30;

// USA 004D08D4 <- EU 004D08AC (Ghidra, non-matching)
// GLOBAL DAT_004d0a14 undefined4
// GLOBAL DAT_004d0a18 undefined4 *
// GLOBAL DAT_004d0a1c undefined4 *
// GLOBAL DAT_004d0a20 undefined4 *
// GLOBAL DAT_004d0a24 undefined4
// GLOBAL DAT_004d0a28 undefined4
// GLOBAL DAT_004d0a2c undefined4 *
// GLOBAL DAT_004d0a30 undefined4

undefined4 * func_004D08D4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar3 = func_0010DA7C(param_1,0,3);
  *puVar3 = DAT_004d0a14;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *(undefined1 *)(puVar3 + 0xc) = 1;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = puVar3;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar1 = DAT_004d0a18;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  puVar3[0x1f] = puVar1[2];
  puVar3[0x1d] = uVar4;
  puVar3[0x1e] = uVar7;
  func_001119F4(puVar3 + 0x20,DAT_004d0a1c);
  func_001119F4(puVar3 + 0x2c,DAT_004d0a1c);
  puVar2 = DAT_004d0a20;
  uVar4 = DAT_004d0a20[1];
  uVar7 = DAT_004d0a20[2];
  uVar8 = DAT_004d0a20[3];
  uVar9 = DAT_004d0a20[4];
  uVar10 = DAT_004d0a20[5];
  uVar11 = DAT_004d0a20[6];
  uVar12 = DAT_004d0a20[7];
  puVar3[0x38] = *DAT_004d0a20;
  puVar3[0x39] = uVar4;
  puVar3[0x3a] = uVar7;
  puVar3[0x3b] = uVar8;
  puVar3[0x3c] = uVar9;
  puVar3[0x3d] = uVar10;
  puVar3[0x3e] = uVar11;
  puVar3[0x3f] = uVar12;
  puVar1 = DAT_004d0a1c;
  puVar3[0x40] = puVar2[8];
  func_001119F4(puVar3 + 0x41,puVar1);
  puVar1 = DAT_004d0a2c;
  uVar7 = DAT_004d0a28;
  uVar4 = DAT_004d0a24;
  puVar3[0x4d] = DAT_004d0a24;
  puVar3[0x4e] = uVar7;
  puVar3[0x4f] = 0xffffffff;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  puVar3[0x50] = *puVar1;
  puVar3[0x51] = uVar7;
  puVar3[0x52] = uVar8;
  puVar3[0x53] = uVar4;
  iVar5 = func_0010BAB4(0x28);
  pvVar6 = (void *)0x0;
  if (iVar5 != 0) {
    pvVar6 = func_0026F124(iVar5);
  }
  puVar3[0x54] = pvVar6;
  uVar4 = DAT_004d0a30;
  puVar3[0x55] = DAT_004d0a30;
  puVar3[0x56] = uVar4;
  puVar3[0x58] = 0;
  puVar3[0x59] = 0x4000003f;
  puVar3[0x57] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x5a) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x169) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x16a) = 0xc4;
  *(undefined1 *)((int)puVar3 + 0x16b) = 0;
  puVar3[0x5b] = 0;
  puVar3[0x5c] = 0;
  puVar3[0x5d] = 0;
  return puVar3;
}

