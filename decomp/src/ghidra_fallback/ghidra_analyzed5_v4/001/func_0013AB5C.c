#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0013afec;
extern undefined4 *DAT_0013aff0;
extern undefined4 DAT_0013aff4;
extern int *DAT_0013aff8;
extern undefined *DAT_0013affc;
extern int DAT_0013b000;
extern uint DAT_0013b010;
extern char s_cState_Wait_0013b004[];

// USA 0013AB5C <- EU 0013AB5C (Ghidra, non-matching)
// GLOBAL DAT_0013afec int
// GLOBAL DAT_0013aff0 undefined4 *
// GLOBAL DAT_0013aff4 undefined4
// GLOBAL DAT_0013aff8 int *
// GLOBAL DAT_0013affc undefined *
// GLOBAL DAT_0013b000 int
// GLOBAL DAT_0013b010 uint
// GLOBAL s_cState_Wait_0013b004 string

/* WARNING: Variable defined which should be unmapped: objStack_4c */

undefined4 * func_0013AB5C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_4c ((uint *)(albw_frame + 0x4))
  #define uStack_40 (*(uint *)(albw_frame + 0x10))
  #define iStack_3c (*(int *)(albw_frame + 0x14))
  #define local_30 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(uint * *)(albw_frame + 0x24))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0013afec + 0x54;
  *piVar3 = DAT_0013afec;
  piVar3[200] = iVar4;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  piVar3[0x103] = (int)puVar6;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x104] = iVar4;
  piVar3[0x105] = 0;
  iVar4 = func_0054D89C((int)piVar3,0);
  piVar3[0x106] = iVar4;
  puVar7 = func_0010A794(piVar3 + 0x107);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar6 = DAT_0013aff0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  *(undefined2 *)(puVar7 + 9) = 0;
  uVar10 = puVar6[1];
  puVar12 = puVar7 + -0x107;
  puVar7[0xf] = *puVar6;
  puVar7[0x10] = uVar10;
  puVar7[0xd] = DAT_0013aff4;
  puVar7[0xe] = puVar12;
  objStack_4c[0] = 0;
  objStack_4c[1] = 0;
  uVar10 = func_0014E428((int)puVar12,1,0,0,1,0,0);
  puVar7[-2] = uVar10;
  *(undefined4 *)(puVar7[-4] + 0x18) = puVar7[-3];
  objStack_4c[0] = puVar7[-0x54];
  func_004EDAD0(puVar7[-4],objStack_4c);
  *(undefined2 *)(*(int *)(puVar7[-4] + 0x18) + 0x28) = 100;
  func_004ED9C8(puVar7[-4]);
  *(undefined2 *)(puVar7[-4] + 0x2c) = *(undefined2 *)(puVar7 + -0xf2);
  func_004A7F00(*DAT_0013aff8,puVar7[-4],2);
  *(undefined1 *)((int)puVar7 + 6) = 1;
  puVar7[5] = puVar12;
  iVar4 = func_0010BA78(0x10);
  puVar7[6] = iVar4;
  puVar7[7] = iVar4 + (uint)*(byte *)((int)puVar7 + 6) * 8;
  iVar9 = 1;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar6[9];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar6[8];
    puVar5[3] = uVar10;
    uVar10 = puVar6[9];
    puVar5[4] = puVar6[8];
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar7 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar7[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar6[7];
      *puVar5 = puVar6[6];
      puVar5[1] = uVar10;
      puVar8 = puVar5;
    }
    for (iVar4 = (int)uVar13 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = puVar6[7];
      puVar8[2] = puVar6[6];
      puVar8[3] = uVar10;
      uVar10 = puVar6[7];
      puVar8[4] = puVar6[6];
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x2c,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 1;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0013affc,0x24,1);
  }
  if (iVar4 != 0) {
    puVar7[2] = 1;
    puVar7[3] = iVar4;
  }
  iVar4 = DAT_0013b000;
  puVar7[-0x32] = puVar7;
  objStack_4c[2] = DAT_0013b010;
  *(undefined2 *)(iVar4 + (int)puVar12) = 1;
  local_2c = (uint *)s_cState_Wait_0013b004;
  local_30 = objStack_4c[2];
  iVar4 = puVar7[3];
  puVar14 = *(uint **)(iVar4 + 4);
  (**(code **)(objStack_4c[2] + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0013ae20;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0013ae20:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar13) {
    uVar13 = iVar4 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar5 = (undefined4 *)puVar7[6];
  uVar10 = puVar6[3];
  uVar15 = puVar6[4];
  uVar16 = puVar6[5];
  uVar17 = puVar6[6];
  uVar18 = puVar6[7];
  *puVar5 = puVar6[2];
  puVar5[1] = uVar10;
  puVar6 = (undefined4 *)puVar7[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar7[8];
  *puVar6 = uVar17;
  puVar6[1] = uVar18;
  iVar4 = (int)*(char *)(puVar7 + 1);
  if (iVar4 != -1) {
    iVar9 = puVar7[8];
    pcVar11 = *(code **)(iVar9 + iVar4 * 8);
    if ((pcVar11 != (code *)0x0) ||
       ((uVar13 = *(uint *)(iVar9 + iVar4 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
      uVar13 = *(uint *)(iVar9 + iVar4 * 8 + 4);
      piVar3 = (int *)(puVar7[5] + ((int)uVar13 >> 1));
      if ((uVar13 & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *piVar3);
      }
      (*pcVar11)(piVar3,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar7 + 1);
  *(undefined1 *)(puVar7 + 1) = 0;
  *puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 5) = uVar2;
  if (puVar7[4] != 0) {
    piVar3 = (int *)puVar7[3];
    (**(code **)(*piVar3 + 8))(piVar3);
    iStack_3c = piVar3[1];
    uStack_40 = objStack_4c[2];
    func_0010BEB4(puVar7[4],(int *)&uStack_40);
  }
  iVar9 = (int)*(char *)(puVar7 + 1);
  iVar4 = puVar7[6];
  pcVar11 = *(code **)(iVar4 + iVar9 * 8);
  if ((pcVar11 != (code *)0x0) ||
     ((uVar13 = *(uint *)(iVar4 + iVar9 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
    uVar13 = *(uint *)(iVar4 + iVar9 * 8 + 4);
    if ((uVar13 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(int *)(puVar7[5] + ((int)uVar13 >> 1)));
    }
    (*pcVar11)((int)(puVar7[5]) + ((int)uVar13 >> 1));
  }
  iVar4 = puVar7[-2];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar4 + 0x80),0,puVar7[-0xd],0);
  iVar4 = puVar7[-2];
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar4 + 0x8c) = puVar7[-0x13];
  *(undefined4 *)(iVar4 + 0x9c) = puVar7[-0x12];
  *(undefined4 *)(iVar4 + 0xac) = puVar7[-0x11];
  func_004CEAF0(puVar7[-2]);
  func_001512B4(puVar7[-1],(float *)(puVar7 + -0x13));
  return puVar12;
}

