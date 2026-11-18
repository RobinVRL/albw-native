#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_002E0274(undefined4 *param_1,uint *param_2);
extern int func_004ECF6C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00668D00(undefined4 *param_1,undefined1 param_2);
extern int DAT_003a4bac;
extern undefined4 DAT_003a4bb0;
extern undefined4 DAT_003a4bb4;
extern undefined4 *DAT_003a4bb8;
extern undefined *DAT_003a4bbc;
extern int DAT_003a4bc0;
extern int DAT_003a4bd8;
extern char s_cState_CloseStay_003a4bc4[];
extern char s_cState_Open_003a4bdc[];

// USA 003A4864 <- EU 003A4840 (Ghidra, non-matching)
// GLOBAL DAT_003a4bac int
// GLOBAL DAT_003a4bb0 undefined4
// GLOBAL DAT_003a4bb4 undefined4
// GLOBAL DAT_003a4bb8 undefined4 *
// GLOBAL DAT_003a4bbc undefined *
// GLOBAL DAT_003a4bc0 int
// GLOBAL DAT_003a4bd8 int
// GLOBAL s_cState_CloseStay_003a4bc4 string
// GLOBAL s_cState_Open_003a4bdc string

undefined4 * func_003A4864(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar5 = func_002E0274(param_1,param_2);
  iVar7 = DAT_003a4bac;
  *piVar5 = DAT_003a4bac;
  piVar5[200] = iVar7 + 0x5c;
  puVar6 = func_0010A794(piVar5 + 0x130);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  uVar17 = DAT_003a4bb0;
  puVar6[10] = 0;
  puVar6[0xb] = uVar17;
  puVar13 = puVar6 + -0x130;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  bVar4 = func_00588BF0((int)puVar13,1);
  if (bVar4) {
    *(undefined1 *)((int)puVar6 + -0x1e9) = 1;
  }
  else {
    func_001E40F4((int)puVar13,1);
    func_00169678((int)puVar13,0,DAT_003a4bb4);
    func_001E4378((int)puVar13);
    puVar6[5] = puVar13;
    *(undefined1 *)((int)puVar6 + 6) = 2;
    iVar7 = func_0010BA78(0x20);
    puVar2 = DAT_003a4bb8;
    puVar6[6] = iVar7;
    puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
    iVar10 = 2;
    puVar8 = (undefined4 *)(iVar7 + -8);
    do {
      uVar17 = puVar2[1];
      puVar8[2] = *puVar2;
      puVar8[3] = uVar17;
      iVar10 = iVar10 + -1;
      uVar17 = puVar2[1];
      puVar8[4] = *puVar2;
      puVar8[5] = uVar17;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)puVar6 + 6);
    uVar14 = (uint)bVar1;
    puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
    puVar6[8] = puVar8;
    if (uVar14 != 0) {
      puVar9 = puVar8 + -2;
      if ((bVar1 & 1) != 0) {
        uVar17 = puVar2[5];
        *puVar8 = puVar2[4];
        puVar8[1] = uVar17;
        puVar9 = puVar8;
      }
      for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar17 = puVar2[5];
        puVar9[2] = puVar2[4];
        puVar9[3] = uVar17;
        uVar17 = puVar2[5];
        puVar9[4] = puVar2[4];
        puVar9[5] = uVar17;
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
    puVar3 = DAT_003a4bbc;
    iVar7 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[1] = 2;
      *puVar8 = 0x24;
      iVar7 = func_00100118((int)(puVar8 + 2),puVar3,0x24,2);
    }
    if (iVar7 != 0) {
      puVar6[2] = 2;
      puVar6[3] = iVar7;
    }
    iVar7 = DAT_003a4bc0;
    puVar6[-0x5b] = puVar6;
    iVar10 = DAT_003a4bd8;
    *(undefined2 *)(iVar7 + (int)puVar13) = 2;
    local_2c = (uint *)s_cState_CloseStay_003a4bc4;
    local_30 = iVar10;
    iVar7 = puVar6[3];
    puVar16 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar10 + 8))(&local_30);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_2c + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_003a4a50;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_003a4a50:
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 <= (int)uVar14) {
      uVar14 = iVar7 - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar16,local_2c,uVar14);
    *(undefined1 *)((int)puVar16 + uVar14) = 0;
    puVar8 = (undefined4 *)puVar6[6];
    uVar12 = puVar2[1];
    uVar17 = puVar2[2];
    uVar18 = puVar2[3];
    uVar11 = puVar2[4];
    uVar15 = puVar2[5];
    *puVar8 = *puVar2;
    puVar8[1] = uVar12;
    puVar8 = (undefined4 *)puVar6[7];
    *puVar8 = uVar17;
    puVar8[1] = uVar18;
    puVar8 = (undefined4 *)puVar6[8];
    *puVar8 = uVar11;
    puVar8[1] = uVar15;
    local_2c = (uint *)s_cState_Open_003a4bdc;
    local_30 = iVar10;
    if ((uint)puVar6[2] < 2) {
      iVar7 = puVar6[3];
    }
    else {
      iVar7 = puVar6[3] + 0x24;
    }
    puVar16 = *(uint **)(iVar7 + 4);
    (**(code **)(iVar10 + 8))(&local_30);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_2c + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_003a4b10;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_003a4b10:
    if (*(int *)(iVar7 + 8) <= (int)uVar14) {
      uVar14 = *(int *)(iVar7 + 8) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar16,local_2c,uVar14);
    *(undefined1 *)((int)puVar16 + uVar14) = 0;
    iVar7 = puVar6[6];
    uVar12 = puVar2[7];
    uVar17 = puVar2[8];
    uVar11 = puVar2[9];
    uVar15 = puVar2[5];
    uVar18 = puVar2[4];
    *(undefined4 *)(iVar7 + 8) = puVar2[6];
    *(undefined4 *)(iVar7 + 0xc) = uVar12;
    iVar7 = puVar6[7];
    *(undefined4 *)(iVar7 + 8) = uVar17;
    *(undefined4 *)(iVar7 + 0xc) = uVar11;
    iVar7 = puVar6[8];
    *(undefined4 *)(iVar7 + 8) = uVar18;
    *(undefined4 *)(iVar7 + 0xc) = uVar15;
    func_00668D00(puVar6,0);
    func_004ECF6C((int)puVar13);
    puVar6[-0x78] = puVar6[-0x78] | 4;
  }
  return puVar13;
}

