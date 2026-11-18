#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001FFD34(undefined4 *param_1);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_004F17F8(int *param_1);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b9144;
extern undefined8 *DAT_004b9148;
extern undefined4 DAT_004b914c;
extern undefined4 DAT_004b9150;
extern undefined DAT_004b9154;
extern int DAT_004b9158;
extern undefined4 DAT_004b915c;
extern undefined4 DAT_004b9160;
extern int DAT_004b9164;
extern undefined *DAT_004b9168;
extern undefined *DAT_004b916c;
extern undefined4 DAT_004b9170;
extern undefined *DAT_004b9174;
extern undefined4 DAT_004b9178;
extern undefined4 DAT_004b917c;
extern undefined4 DAT_004b9180;
extern undefined4 DAT_004b9184;
extern undefined *DAT_004b9188;
extern undefined4 *DAT_004b918c;

// USA 004B8D94 <- EU 004B8D6C (Ghidra, non-matching)
// GLOBAL DAT_004b9144 undefined4
// GLOBAL DAT_004b9148 undefined8 *
// GLOBAL DAT_004b914c undefined4
// GLOBAL DAT_004b9150 undefined4
// GLOBAL DAT_004b9154 undefined
// GLOBAL DAT_004b9158 int
// GLOBAL DAT_004b915c undefined4
// GLOBAL DAT_004b9160 undefined4
// GLOBAL DAT_004b9164 int
// GLOBAL DAT_004b9168 undefined *
// GLOBAL DAT_004b916c undefined *
// GLOBAL DAT_004b9170 undefined4
// GLOBAL DAT_004b9174 undefined *
// GLOBAL DAT_004b9178 undefined4
// GLOBAL DAT_004b917c undefined4
// GLOBAL DAT_004b9180 undefined4
// GLOBAL DAT_004b9184 undefined4
// GLOBAL DAT_004b9188 undefined *
// GLOBAL DAT_004b918c undefined4 *

int func_004B8D94(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  puVar3 = func_0010DA7C(param_1,0,3);
  *puVar3 = DAT_004b9144;
  puVar3[8] = 0;
  puVar1 = DAT_004b9148;
  puVar3[9] = 0;
  puVar3[10] = 0;
  uVar11 = *puVar1;
  puVar4 = func_0010CE7C(puVar3 + 0xb);
  *puVar4 = DAT_004b914c;
  puVar6 = puVar4 + 9;
  puVar4[4] = 0;
  puVar4[6] = puVar4;
  puVar4[5] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4[10] = puVar3;
    uVar10 = DAT_004b9150;
    puVar4[0xb] = (int)uVar11;
    puVar4[0xc] = (int)((ulonglong)uVar11 >> 0x20);
    *puVar6 = uVar10;
  }
  puVar4[8] = puVar6;
  local_24 = &DAT_004b9154;
  local_28 = DAT_004b9158;
  puVar3 = func_00689A2C(puVar4 + 0xf,puVar4 + 0x12,0xb);
  *puVar3 = DAT_004b915c;
  func_00689894((int)puVar3,&local_28,0xffffffff);
  *puVar3 = DAT_004b9160;
  piVar5 = (int *)func_004F17F8(puVar3 + 6);
  iVar8 = DAT_004b9164 + 0x3c;
  *piVar5 = DAT_004b9164;
  piVar5[0xd] = iVar8;
  piVar5[0x4e] = 0;
  piVar5[0x4f] = 0;
  piVar5[0x50] = 0;
  piVar5[0x51] = 0;
  piVar5[0x52] = 0;
  piVar5[0x53] = 0;
  iVar8 = func_00100118((int)(piVar5 + 0x54),DAT_004b9168,0x138,0xf);
  iVar8 = func_00100118(iVar8 + 0x1288,DAT_004b916c,0x4c,6);
  puVar3 = (undefined4 *)func_001FFD34((undefined4 *)(iVar8 + 0x1c8));
  *puVar3 = DAT_004b9170;
  puVar2 = DAT_004b9174;
  puVar3[0x28] = 0xffffffff;
  iVar8 = func_00100118((int)(puVar3 + 0x29),puVar2,0xa0,3);
  *(undefined4 *)(iVar8 + 0x1f0) = 0;
  *(undefined4 *)(iVar8 + 500) = 0;
  *(undefined4 *)(iVar8 + 0x1f8) = 0;
  func_0010B3EC((undefined4 *)(iVar8 + 0x1f0),0x200,iVar8 + 0x1fc);
  *(undefined4 *)(iVar8 + 0x9fc) = 0;
  *(undefined4 *)(iVar8 + 0xa00) = 0;
  *(undefined4 *)(iVar8 + 0xa04) = 0;
  func_0010B3EC((undefined4 *)(iVar8 + 0x9fc),0x28,iVar8 + 0xa08);
  *(undefined4 *)(iVar8 + 0xaa8) = 0;
  puVar3 = func_002E1BB4((undefined4 *)(iVar8 + 0xaac),0);
  uVar10 = DAT_004b9178;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = uVar10;
  puVar3[0x12] = uVar10;
  puVar3[0x13] = uVar10;
  puVar3[0x14] = uVar10;
  puVar3[0x15] = uVar10;
  puVar3[0x16] = uVar10;
  puVar3[0x17] = uVar10;
  puVar3[0x18] = uVar10;
  puVar3[0x19] = uVar10;
  puVar3[0x1a] = uVar10;
  puVar3[0x1b] = uVar10;
  puVar3[0x1c] = uVar10;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  uVar9 = DAT_004b917c;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = uVar9;
  puVar3[0x22] = uVar10;
  puVar3[0x23] = uVar9;
  *(undefined1 *)(puVar3 + 0x24) = 1;
  *(undefined1 *)((int)puVar3 + 0x91) = 0;
  puVar2 = DAT_004b9188;
  uVar9 = DAT_004b9184;
  puVar3[6] = DAT_004b9180;
  puVar3[7] = uVar9;
  iVar8 = func_00100118((int)(puVar3 + 0x25),puVar2,0x40,6);
  puVar3 = DAT_004b918c;
  uVar9 = *DAT_004b918c;
  *(undefined4 *)(iVar8 + 0x180) = uVar10;
  *(undefined4 *)(iVar8 + 0x184) = uVar10;
  *(undefined4 *)(iVar8 + 0x188) = uVar10;
  *(undefined4 *)(iVar8 + 0x18c) = uVar9;
  uVar9 = *puVar3;
  *(undefined4 *)(iVar8 + 400) = uVar10;
  *(undefined4 *)(iVar8 + 0x194) = uVar10;
  *(undefined4 *)(iVar8 + 0x198) = uVar10;
  *(undefined4 *)(iVar8 + 0x19c) = uVar9;
  *(undefined4 *)(iVar8 + 0x1a0) = 0;
  *(undefined4 *)(iVar8 + 0x1a4) = 0;
  *(undefined1 *)(iVar8 + 0x1a8) = 0;
  *(undefined4 *)(iVar8 + 0x1ac) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x1b0) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x1b4) = 0;
  *(undefined4 *)(iVar8 + 0x1b8) = 0;
  *(undefined1 *)(iVar8 + 0x1bc) = 0;
  *(undefined1 *)(iVar8 + 0x1c0) = 2;
  *(undefined4 *)(iVar8 + 0x1c4) = uVar10;
  *(undefined4 *)(iVar8 + 0x1c8) = uVar10;
  *(undefined4 *)(iVar8 + 0x1cc) = uVar10;
  *(undefined4 *)(iVar8 + 0x1d0) = 0;
  *(undefined4 *)(iVar8 + 0x1d4) = 0;
  *(undefined4 *)(iVar8 + 0x1d8) = 0;
  *(undefined4 *)(iVar8 + 0x1dc) = 0;
  *(undefined4 *)(iVar8 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x1e0) = 0;
  *(undefined4 *)(iVar8 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x1f0) = 0xffffffff;
  *(undefined4 *)(iVar8 + 500) = 2;
  *(undefined4 *)(iVar8 + 0x1f8) = 0;
  *(undefined1 *)(iVar8 + 0x1fc) = 2;
  *(undefined1 *)(iVar8 + 0x1fd) = 0;
  *(undefined1 *)(iVar8 + 0x1fe) = 0;
  *(undefined1 *)(iVar8 + 0x1ff) = 0;
  *(undefined4 *)(iVar8 + 0x200) = 0;
  *(undefined4 *)(iVar8 + 0x204) = 0;
  *(undefined4 *)(iVar8 + 0x208) = 0;
  *(undefined4 *)(iVar8 + 0x20c) = 0;
  *(undefined1 *)(iVar8 + 0x210) = 0;
  *(undefined4 *)(iVar8 + 0x214) = uVar10;
  *(undefined4 *)(iVar8 + 0x218) = uVar10;
  *(undefined4 *)(iVar8 + 0x21c) = uVar10;
  *(undefined4 *)(iVar8 + 0x220) = uVar10;
  uVar7 = 0;
  do {
    puVar3 = (undefined4 *)(iVar8 + -0xdec);
    if (uVar7 < 0x10) {
      puVar3 = (undefined4 *)(iVar8 + -0xdec) + uVar7;
    }
    uVar7 = uVar7 + 1;
    *puVar3 = 0;
  } while ((int)uVar7 < 0x10);
  uVar7 = 0;
  do {
    puVar3 = (undefined4 *)(iVar8 + -0x960);
    if (uVar7 < 4) {
      puVar3 = (undefined4 *)(iVar8 + -0x960) + uVar7;
    }
    uVar7 = uVar7 + 1;
    *puVar3 = 0;
  } while ((int)uVar7 < 4);
  return iVar8 + -0x2204;
}

