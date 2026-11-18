#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0023F8D8(int param_1);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0023ff64;
extern undefined4 *DAT_0023ff68;
extern undefined4 DAT_0023ff6c;
extern undefined4 DAT_0023ff70;
extern int *DAT_0023ff74;
extern undefined4 DAT_0023ff78;
extern undefined4 DAT_0023ff7c;
extern undefined4 DAT_0023ff80;
extern undefined *DAT_0023ff84;
extern int DAT_0023ff88;
extern uint DAT_0023ff9c;
extern uint *DAT_002400e8;
extern undefined4 *DAT_002400ec;
extern undefined4 DAT_002400f0;
extern char s_cState_Appear_0023ff8c[];
extern char s_cState_Disappear_0023ffa0[];

// USA 0023FAD4 <- EU 0023FAD4 (Ghidra, non-matching)
// GLOBAL DAT_0023ff64 int
// GLOBAL DAT_0023ff68 undefined4 *
// GLOBAL DAT_0023ff6c undefined4
// GLOBAL DAT_0023ff70 undefined4
// GLOBAL DAT_0023ff74 int *
// GLOBAL DAT_0023ff78 undefined4
// GLOBAL DAT_0023ff7c undefined4
// GLOBAL DAT_0023ff80 undefined4
// GLOBAL DAT_0023ff84 undefined *
// GLOBAL DAT_0023ff88 int
// GLOBAL DAT_0023ff9c uint
// GLOBAL DAT_002400e8 uint *
// GLOBAL DAT_002400ec undefined4 *
// GLOBAL DAT_002400f0 undefined4
// GLOBAL s_cState_Appear_0023ff8c string
// GLOBAL s_cState_Disappear_0023ffa0 string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 * func_0023FAD4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  code *pcVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint in_r12;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(uint * *)(albw_frame + 0x14))
  #define local_88 ((uint *)(albw_frame + 0x18))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(uint *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x70))
  piVar5 = func_00150E40(param_1,param_2);
  iVar9 = DAT_0023ff64;
  *piVar5 = DAT_0023ff64;
  piVar5[200] = iVar9 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar3 = DAT_0023ff68;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xd] = 0;
  uVar11 = puVar3[0xf];
  puVar6[0xe] = puVar3[0xe];
  puVar6[0xf] = uVar11;
  puVar14 = puVar6 + -0x103;
  puVar6[0xc] = DAT_0023ff6c;
  objStack_a0[1] = 0;
  objStack_a0[0] = 1;
  objStack_a0[2] = 0;
  uVar11 = func_0014E428((int)puVar14,0,0,0,1,0,0);
  puVar6[9] = uVar11;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (uint *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_0023ff70,1);
  }
  puVar6[0xb] = puVar8;
  func_00169608(puVar8,0,DAT_0023ff74,*(int *)(puVar6[-0x4f] + 0x1c8));
  func_0016A02C(puVar6[0xb],-1,(int *)0xffffffff,0);
  local_80 = &local_7c;
  local_88[1] = 3;
  local_34 = 10;
  local_30 = 0;
  local_7c = 0;
  local_88[0] = 1;
  local_68 = in_r12 | 0xff;
  local_78 = DAT_0023ff7c;
  uStack_74 = DAT_0023ff78;
  uStack_70 = DAT_0023ff80;
  uStack_6c = DAT_0023ff78;
  uVar11 = DAT_0023ff78;
  func_0016898C(puVar6[0xb],local_88);
  *(undefined4 *)(*(int *)(puVar6[0xb] + 0x14) + 0x10) = uVar11;
  *(undefined1 *)((int)puVar6 + 6) = 2;
  puVar6[5] = puVar14;
  iVar9 = func_0010BA78(0x20);
  puVar6[6] = iVar9;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 2;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar11 = puVar3[0xd];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar3[0xc];
    puVar7[3] = uVar11;
    uVar11 = puVar3[0xd];
    puVar7[4] = puVar3[0xc];
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar7;
  if (uVar15 != 0) {
    puVar10 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar3[5];
      *puVar7 = puVar3[4];
      puVar7[1] = uVar11;
      puVar10 = puVar7;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar11 = puVar3[5];
      puVar10[2] = puVar3[4];
      puVar10[3] = uVar11;
      uVar11 = puVar3[5];
      puVar10[4] = puVar3[4];
      puVar10[5] = uVar11;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar4 = DAT_0023ff84;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 2;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar4,0x24,2);
  }
  if (iVar9 != 0) {
    puVar6[3] = iVar9;
    puVar6[2] = 2;
  }
  iVar9 = DAT_0023ff88;
  puVar6[-0x2e] = puVar6;
  uVar15 = DAT_0023ff9c;
  *(undefined2 *)(iVar9 + (int)puVar14) = 2;
  local_8c = (uint *)s_cState_Appear_0023ff8c;
  local_90 = uVar15;
  iVar9 = puVar6[3];
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar15 + 8))(&local_90);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_8c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0023fd9c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0023fd9c:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar16) {
    uVar16 = iVar9 - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar8,local_8c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  puVar7 = (undefined4 *)puVar6[6];
  uVar11 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  uVar19 = puVar3[4];
  uVar20 = puVar3[5];
  *puVar7 = *puVar3;
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  local_8c = (uint *)s_cState_Disappear_0023ffa0;
  local_90 = uVar15;
  if ((uint)puVar6[2] < 2) {
    iVar9 = puVar6[3];
  }
  else {
    iVar9 = puVar6[3] + 0x24;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(uVar15 + 8))(&local_90);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_8c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0023fe50;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0023fe50:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar8,local_8c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  iVar9 = puVar6[6];
  uVar11 = puVar3[4];
  uVar17 = puVar3[5];
  uVar18 = puVar3[7];
  uVar19 = puVar3[8];
  uVar20 = puVar3[9];
  *(undefined4 *)(iVar9 + 8) = puVar3[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 8) = uVar11;
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = (int)*(char *)(puVar6 + 1);
  if (iVar9 != -1) {
    iVar12 = puVar6[8];
    pcVar13 = *(code **)(iVar12 + iVar9 * 8);
    if ((pcVar13 != (code *)0x0) ||
       ((uVar16 = *(uint *)(iVar12 + iVar9 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
      uVar16 = *(uint *)(iVar12 + iVar9 * 8 + 4);
      piVar5 = (int *)(puVar6[5] + ((int)uVar16 >> 1));
      if ((uVar16 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *piVar5);
      }
      (*pcVar13)(piVar5,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar6 + 1);
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 5) = uVar2;
  if (puVar6[4] != 0) {
    piVar5 = (int *)puVar6[3];
    (**(code **)(*piVar5 + 8))(piVar5);
    objStack_a0[1] = piVar5[1];
    objStack_a0[0] = uVar15;
    func_0010BEB4(puVar6[4],(int *)objStack_a0);
  }
  iVar12 = (int)*(char *)(puVar6 + 1);
  iVar9 = puVar6[6];
  pcVar13 = *(code **)(iVar9 + iVar12 * 8);
  if ((pcVar13 != (code *)0x0) ||
     ((uVar15 = *(uint *)(iVar9 + iVar12 * 8 + 4), (uVar15 & 1) != 0 && (uVar15 != 0)))) {
    uVar15 = *(uint *)(iVar9 + iVar12 * 8 + 4);
    piVar5 = (int *)(puVar6[5] + ((int)uVar15 >> 1));
    if ((uVar15 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *piVar5);
    }
    (*pcVar13)(piVar5);
  }
  puVar7 = (undefined4 *)func_0054D964((int)puVar14,0);
  if (((*DAT_002400e8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_002400e8), iVar9 != 0)) {
    *DAT_002400ec = DAT_002400f0;
  }
  if ((puVar7 == (undefined4 *)0x0) ||
     (iVar9 = (**(code **)*puVar7)(puVar7,DAT_002400ec), iVar9 == 0)) {
    puVar7 = (undefined4 *)0x0;
  }
  puVar6[10] = puVar7;
  objStack_a0[0] = 0x240;
  *(undefined2 *)(puVar7 + 10) = 0x240;
  iVar9 = puVar6[10];
  *(undefined4 *)(iVar9 + 4) = puVar6[-0xf];
  *(undefined4 *)(iVar9 + 8) = puVar6[-0xe];
  *(undefined4 *)(iVar9 + 0xc) = puVar6[-0xd];
  func_004356B4((int *)puVar6[10]);
  uVar11 = puVar3[10];
  uVar17 = puVar3[0xb];
  puVar6[0xd] = puVar14;
  puVar6[0xe] = uVar11;
  puVar6[0xf] = uVar17;
  func_0023F8D8((int)puVar14);
  return puVar14;
}

