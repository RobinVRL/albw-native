#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_0010C864(undefined4 *param_1,float fparam_0);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void *func_0010E74C();
extern undefined *DAT_00109d5c;
extern undefined4 DAT_00109d60;
extern undefined4 DAT_00109d64;
extern undefined4 *DAT_00109d68;

// USA 00109A64 <- EU 00109A64 (Ghidra, non-matching)
// GLOBAL DAT_00109d5c undefined *
// GLOBAL DAT_00109d60 undefined4
// GLOBAL DAT_00109d64 undefined4
// GLOBAL DAT_00109d68 undefined4 *

int func_00109A64(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  float in_s0;
  undefined8 uVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0xff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar1 = func_00100118((int)(param_1 + 0x24),DAT_00109d5c,0x10,5);
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  iVar9 = iVar1 + -0x90;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0xffffff;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  uVar6 = DAT_00109d60;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = uVar6;
  *(undefined4 *)(iVar1 + 0x74) = uVar6;
  *(undefined1 *)(iVar1 + 0x78) = 0;
  *(undefined1 *)(iVar1 + 0x79) = 0;
  *(undefined1 *)(iVar1 + 0x7a) = 0;
  *(undefined1 *)(iVar1 + 0x7b) = 0;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  *(undefined1 *)(iVar1 + 0x7d) = 0;
  *(undefined1 *)(iVar1 + 0x7e) = 0;
  *(undefined1 *)(iVar1 + 0x7f) = 0;
  *(undefined1 *)(iVar1 + 0x80) = 0;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  uVar7 = DAT_00109d64;
  uVar12 = CONCAT44(uVar6,DAT_00109d64);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = uVar6;
  *(undefined4 *)(iVar1 + 0x8c) = uVar7;
  *(undefined4 *)(iVar1 + 0x90) = uVar7;
  *(undefined4 *)(iVar1 + 0x94) = uVar7;
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  puVar4 = DAT_00109d68;
  *(undefined4 *)(iVar1 + 0x9c) = uVar7;
  *(undefined4 *)(iVar1 + 0xa0) = uVar7;
  *(undefined4 *)(iVar1 + 0xa4) = uVar6;
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  *(int *)(iVar1 + 4) = iVar9;
  *(undefined4 *)(iVar1 + 8) = uVar6;
  *(undefined4 *)(iVar1 + 0xc) = uVar7;
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  *(int *)(iVar1 + 0x14) = iVar9;
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  *(undefined4 *)(iVar1 + 0x1c) = uVar7;
  uVar6 = puVar4[4];
  uVar7 = puVar4[5];
  *(int *)(iVar1 + 0x24) = iVar9;
  *(undefined4 *)(iVar1 + 0x28) = uVar6;
  *(undefined4 *)(iVar1 + 0x2c) = uVar7;
  uVar6 = puVar4[6];
  uVar7 = puVar4[7];
  *(int *)(iVar1 + 0x34) = iVar9;
  *(undefined4 *)(iVar1 + 0x38) = uVar6;
  *(undefined4 *)(iVar1 + 0x3c) = uVar7;
  uVar7 = puVar4[8];
  uVar6 = puVar4[9];
  *(int *)(iVar1 + 0x44) = iVar9;
  *(undefined4 *)(iVar1 + 0x48) = uVar7;
  *(undefined4 *)(iVar1 + 0x4c) = uVar6;
  iVar2 = func_0010CEE0(0x8c,(int *)0x0,4);
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar8 = 4;
    *(int *)(iVar1 + -8) = iVar2;
    do {
      iVar8 = iVar8 + -1;
      *(int *)(iVar2 + iVar5 * 4) = iVar2 + (iVar5 + 6) * 4;
      iVar5 = iVar5 + 6;
    } while (iVar8 != 0);
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(int *)(iVar1 + -4) = iVar2;
    func_0010B3EC((undefined4 *)(iVar1 + -0x14),5,iVar2 + 0x78);
  }
  piVar11 = (int *)(iVar1 + -0x14);
  iVar2 = func_0010B3C0(piVar11,0,5);
  if (iVar2 != 0) {
    if (0 < *piVar11) {
      func_0010E74C(*(uint **)(iVar1 + -0xc) + 5,*(uint **)(iVar1 + -0xc),*piVar11 << 2,in_s0);
    }
    iVar2 = 0;
    do {
      puVar3 = *(undefined4 **)(iVar1 + -8);
      puVar4 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar1 + -8) = *puVar3;
        puVar4 = func_0010C864(puVar3,ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)));
      }
      iVar5 = iVar2 + 1;
      *(undefined4 **)(*(int *)(iVar1 + -0xc) + iVar2 * 4) = puVar4;
      iVar2 = iVar5;
    } while (iVar5 < 5);
    *piVar11 = *piVar11 + 5;
  }
  uVar10 = 0;
  do {
    if (uVar10 < *(uint *)(iVar1 + -0x14)) {
      iVar2 = *(int *)(*(int *)(iVar1 + -0xc) + uVar10 * 4);
    }
    else {
      iVar2 = 0;
    }
    func_0010C7F8(iVar2,0,ALBW_AS_F32(uVar12));
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 5);
  uVar10 = 0;
  do {
    if (uVar10 < *(uint *)(iVar1 + -0x14)) {
      iVar2 = *(int *)(*(int *)(iVar1 + -0xc) + uVar10 * 4);
    }
    else {
      iVar2 = 0;
    }
    iVar5 = iVar1;
    if (uVar10 < 5) {
      iVar5 = iVar1 + uVar10 * 0x10;
    }
    uVar10 = uVar10 + 1;
    *(int *)(iVar2 + 0x14) = iVar5;
  } while ((int)uVar10 < 5);
  return iVar9;
}

