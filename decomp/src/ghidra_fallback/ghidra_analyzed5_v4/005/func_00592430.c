#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_005902C4(int param_1,uint param_2,undefined4 param_3);
extern int func_0059038C(uint param_1,uint param_2,int param_3);
extern uint *DAT_00592c08;
extern uint *DAT_00592c0c;
extern undefined4 DAT_00592c10;
extern undefined4 DAT_00592c14;
extern undefined4 DAT_00592c18;
extern undefined4 DAT_00592c1c;
extern undefined4 DAT_00592c20;
extern undefined4 DAT_00592c24;
extern undefined4 DAT_00592c28;
extern undefined4 DAT_00592c2c;
extern undefined4 DAT_00592c30;
extern undefined4 DAT_00592c34;
extern undefined4 DAT_00592c38;
extern undefined4 DAT_00592c3c;
extern undefined4 DAT_00592c40;
extern int DAT_00592c44;
extern undefined4 DAT_00592c48;
extern undefined4 DAT_00592c4c;
extern undefined4 DAT_00592c50;
extern undefined4 DAT_00592c54;
extern undefined4 DAT_00592c58;
extern undefined4 DAT_00592c5c;
extern undefined4 DAT_00592c60;
extern undefined4 DAT_00592c64;
extern undefined4 DAT_00592c68;
extern undefined4 DAT_00592c6c;
extern undefined4 DAT_00592c70;
extern undefined4 DAT_00592c74;
extern undefined4 DAT_00592c78;
extern undefined4 DAT_00592c7c;
extern undefined4 DAT_00592c80;
extern undefined4 DAT_00592c84;
extern undefined4 DAT_00592c88;
extern undefined4 DAT_00592c8c;
extern undefined4 DAT_00592c90;
extern undefined4 DAT_00592c94;
extern undefined4 DAT_00592c98;
extern undefined4 DAT_00592c9c;
extern undefined4 DAT_00592ca0;
extern undefined4 DAT_00592ca4;
extern undefined4 DAT_00592ca8;
extern int DAT_00592cac;
extern undefined4 DAT_00592cb0;
extern int DAT_00592cb4;
extern undefined4 *DAT_00592cb8;
extern undefined4 DAT_00592cbc;
extern undefined4 DAT_00592cc0;
extern undefined4 DAT_00592cc4;
extern undefined4 *DAT_00592cc8;
extern int DAT_00592ccc;
extern undefined4 DAT_00592cd0;
extern undefined4 DAT_00592cd4;
extern undefined4 DAT_00592cd8;
extern int DAT_00592cdc;
extern int DAT_00592ce0;

// USA 00592430 <- EU 00592408 (Ghidra, non-matching)
// GLOBAL DAT_00592c08 uint *
// GLOBAL DAT_00592c0c uint *
// GLOBAL DAT_00592c10 undefined4
// GLOBAL DAT_00592c14 undefined4
// GLOBAL DAT_00592c18 undefined4
// GLOBAL DAT_00592c1c undefined4
// GLOBAL DAT_00592c20 undefined4
// GLOBAL DAT_00592c24 undefined4
// GLOBAL DAT_00592c28 undefined4
// GLOBAL DAT_00592c2c undefined4
// GLOBAL DAT_00592c30 undefined4
// GLOBAL DAT_00592c34 undefined4
// GLOBAL DAT_00592c38 undefined4
// GLOBAL DAT_00592c3c undefined4
// GLOBAL DAT_00592c40 undefined4
// GLOBAL DAT_00592c44 int
// GLOBAL DAT_00592c48 undefined4
// GLOBAL DAT_00592c4c undefined4
// GLOBAL DAT_00592c50 undefined4
// GLOBAL DAT_00592c54 undefined4
// GLOBAL DAT_00592c58 undefined4
// GLOBAL DAT_00592c5c undefined4
// GLOBAL DAT_00592c60 undefined4
// GLOBAL DAT_00592c64 undefined4
// GLOBAL DAT_00592c68 undefined4
// GLOBAL DAT_00592c6c undefined4
// GLOBAL DAT_00592c70 undefined4
// GLOBAL DAT_00592c74 undefined4
// GLOBAL DAT_00592c78 undefined4
// GLOBAL DAT_00592c7c undefined4
// GLOBAL DAT_00592c80 undefined4
// GLOBAL DAT_00592c84 undefined4
// GLOBAL DAT_00592c88 undefined4
// GLOBAL DAT_00592c8c undefined4
// GLOBAL DAT_00592c90 undefined4
// GLOBAL DAT_00592c94 undefined4
// GLOBAL DAT_00592c98 undefined4
// GLOBAL DAT_00592c9c undefined4
// GLOBAL DAT_00592ca0 undefined4
// GLOBAL DAT_00592ca4 undefined4
// GLOBAL DAT_00592ca8 undefined4
// GLOBAL DAT_00592cac int
// GLOBAL DAT_00592cb0 undefined4
// GLOBAL DAT_00592cb4 int
// GLOBAL DAT_00592cb8 undefined4 *
// GLOBAL DAT_00592cbc undefined4
// GLOBAL DAT_00592cc0 undefined4
// GLOBAL DAT_00592cc4 undefined4
// GLOBAL DAT_00592cc8 undefined4 *
// GLOBAL DAT_00592ccc int
// GLOBAL DAT_00592cd0 undefined4
// GLOBAL DAT_00592cd4 undefined4
// GLOBAL DAT_00592cd8 undefined4
// GLOBAL DAT_00592cdc int
// GLOBAL DAT_00592ce0 int

void func_00592430(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = DAT_00592c0c;
  puVar1 = DAT_00592c08;
  puVar7 = (undefined4 *)*DAT_00592c08;
  if (puVar7 < (undefined4 *)*DAT_00592c0c) {
    puVar7[1] = DAT_00592c10;
    *puVar7 = 1;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c14;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c18;
    *puVar7 = 0x80000000;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c1c;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c20;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
    puVar7 = puVar7 + 2;
  }
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c24;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c28;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c2c;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c30;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c34;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c38;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  func_005902C4(0x101,7,0);
  uVar3 = DAT_00592c3c;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c40;
    *puVar7 = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  iVar6 = DAT_00592c44;
  piVar4 = (int *)*puVar1;
  if (piVar4 < (int *)*puVar2) {
    piVar4[1] = DAT_00592c44 + -0xd50000;
    *piVar4 = iVar6;
    *puVar1 = (uint)(piVar4 + 2);
  }
  uVar3 = DAT_00592c48;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c4c;
    *puVar7 = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c50;
    *puVar7 = 8000;
    *puVar1 = (uint)(puVar7 + 2);
  }
  uVar3 = DAT_00592c54;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c58;
    *puVar7 = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c5c;
    *puVar7 = 3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c60;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c64;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c68;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c6c;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c70;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c74;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c78;
    *puVar7 = 0xffffff;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c7c;
    *puVar7 = 3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c80;
    *puVar7 = 0x3000000;
    *puVar1 = (uint)(puVar7 + 2);
  }
  func_005902C4(0x40,0x10,0);
  func_005902C4(0x50,7,DAT_00592c84);
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c88;
    *puVar7 = 0x100;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c8c;
    *puVar7 = 1;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c90;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c94;
    *puVar7 = 0;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592c98;
    *puVar7 = 0x20000;
    *puVar1 = (uint)(puVar7 + 2);
  }
  uVar3 = DAT_00592c9c;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    *puVar7 = 0xf;
    puVar7[1] = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  uVar3 = DAT_00592ca0;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    *puVar7 = 0xf;
    puVar7[1] = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592ca4;
    *puVar7 = 3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592ca8;
    *puVar7 = 3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  iVar6 = DAT_00592cac;
  iVar10 = 0;
  do {
    piVar4 = (int *)*puVar1;
    if (piVar4 < (int *)*puVar2) {
      *piVar4 = iVar10 << 8;
      piVar4[1] = iVar6;
      *puVar1 = (uint)(piVar4 + 2);
    }
    iVar9 = 0;
    do {
      func_005902C4(0x1c8,8,0);
      iVar9 = iVar9 + 8;
    } while (iVar9 < 0x100);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 7);
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592cb0;
    *puVar7 = 0x80000000;
    *puVar1 = (uint)(puVar7 + 2);
  }
  iVar6 = DAT_00592cb4;
  iVar10 = 0;
  do {
    func_005902C4(iVar6,8,0);
    iVar10 = iVar10 + 2;
  } while (iVar10 < 0x60);
  if ((code *)*DAT_00592cb8 == (code *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)(*(code *)*DAT_00592cb8)(0x10000,0x100,0,0x4000);
  }
  func_00110490(puVar7,0x4000);
  puVar5 = (undefined4 *)*puVar1;
  if (puVar5 < (undefined4 *)*puVar2) {
    puVar5[1] = DAT_00592cbc;
    *puVar5 = 0;
    *puVar1 = (uint)(puVar5 + 2);
  }
  func_0059038C(0x2cc,0x200,(int)puVar7);
  puVar5 = (undefined4 *)*puVar1;
  if (puVar5 < (undefined4 *)*puVar2) {
    puVar5[1] = DAT_00592cc0;
    *puVar5 = 0x200;
    *puVar1 = (uint)(puVar5 + 2);
  }
  func_0059038C(0x29c,0xe00,(int)puVar7);
  puVar5 = (undefined4 *)*puVar1;
  if (puVar5 < (undefined4 *)*puVar2) {
    puVar5[1] = DAT_00592cc4;
    *puVar5 = 0;
    *puVar1 = (uint)(puVar5 + 2);
  }
  if ((code *)*DAT_00592cc8 != (code *)0x0) {
    (*(code *)*DAT_00592cc8)(0x10000,0x100,0,puVar7);
  }
  iVar6 = 0;
  do {
    puVar7 = (undefined4 *)*puVar1;
    if (puVar7 < (undefined4 *)*puVar2) {
      puVar7[1] = iVar6 + 0x2b1U | 0xf0000;
      *puVar7 = 0;
      *puVar1 = (uint)(puVar7 + 2);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  func_005902C4(0x28b,2,0xffffffff);
  func_005902C4(DAT_00592ccc,0x24,0);
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592cd0;
    *puVar7 = 1;
    *puVar1 = (uint)(puVar7 + 2);
  }
  uVar3 = DAT_00592cd4;
  puVar7 = (undefined4 *)*puVar1;
  if (puVar7 < (undefined4 *)*puVar2) {
    puVar7[1] = DAT_00592cd8;
    *puVar7 = uVar3;
    *puVar1 = (uint)(puVar7 + 2);
  }
  iVar6 = DAT_00592ce0;
  iVar10 = 0;
  iVar9 = *(int *)(DAT_00592cdc + 8);
  do {
    pbVar8 = (byte *)(iVar9 + iVar10 + 0x16b1);
    if ((*pbVar8 != 0) && (puVar7 = (undefined4 *)*puVar1, puVar7 < (undefined4 *)*puVar2)) {
      *puVar7 = *(undefined4 *)(iVar9 + iVar10 * 4 + 0x1300);
      *puVar1 = (uint)(puVar7 + 1);
      puVar7[1] = *(uint *)(iVar6 + iVar10 * 4) | (uint)*pbVar8 << 0x10;
      *puVar1 = (uint)(puVar7 + 2);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xbd);
  return;
}

