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
extern int func_002401B4(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00240890;
extern undefined4 *DAT_00240894;
extern undefined4 DAT_00240898;
extern undefined4 DAT_0024089c;
extern int DAT_002408a0;
extern undefined4 DAT_002408a4;
extern undefined *DAT_002408a8;
extern int DAT_002408ac;
extern int DAT_002408c0;
extern uint *DAT_00240ac0;
extern undefined4 *DAT_00240ac4;
extern undefined4 DAT_00240ac8;
extern char s_cState_Appear_002408b0[];
extern char s_cState_Disappear_002408c4[];

// USA 002403C4 <- EU 002403C4 (Ghidra, non-matching)
// GLOBAL DAT_00240890 int
// GLOBAL DAT_00240894 undefined4 *
// GLOBAL DAT_00240898 undefined4
// GLOBAL DAT_0024089c undefined4
// GLOBAL DAT_002408a0 int
// GLOBAL DAT_002408a4 undefined4
// GLOBAL DAT_002408a8 undefined *
// GLOBAL DAT_002408ac int
// GLOBAL DAT_002408c0 int
// GLOBAL DAT_00240ac0 uint *
// GLOBAL DAT_00240ac4 undefined4 *
// GLOBAL DAT_00240ac8 undefined4
// GLOBAL s_cState_Appear_002408b0 string
// GLOBAL s_cState_Disappear_002408c4 string

/* WARNING: Variable defined which should be unmapped: objStack_a8 */
/* WARNING: Variable defined which should be unmapped: objStack_a4 */

int func_002403C4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_a8 ((uint *)(albw_frame + 0x8))
  #define objStack_a4 ((uint *)(albw_frame + 0xc))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(uint * *)(albw_frame + 0x74))
  #define local_34 (*(undefined4 * *)(albw_frame + 0x7c))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x84))
  #define local_28 (*(uint * *)(albw_frame + 0x88))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar6 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00240890;
  *piVar6 = DAT_00240890;
  piVar6[200] = iVar8 + 0x54;
  puVar7 = func_0010A794(piVar6 + 0x103);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  iVar8 = func_004EE484(puVar7 + 0xb);
  puVar4 = DAT_00240894;
  local_34 = (undefined4 *)(iVar8 + 100);
  puVar7 = DAT_00240894 + 0xe;
  *(undefined4 *)(iVar8 + 0x68) = 0;
  uVar13 = puVar4[0xf];
  iVar16 = iVar8 + -0x438;
  *(undefined4 *)(iVar8 + 0x6c) = *puVar7;
  *(undefined4 *)(iVar8 + 0x70) = uVar13;
  *local_34 = DAT_00240898;
  *(undefined1 *)(iVar8 + 0x74) = 0;
  *(undefined4 *)(iVar8 + 0x78) = 0;
  objStack_a8[0] = 1;
  objStack_a4[0] = 0;
  objStack_a4[1] = 0;
  uVar13 = func_0014E428(iVar16,1,0,0,1,0,0);
  *(undefined4 *)(iVar8 + -8) = uVar13;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar9,3,DAT_0024089c,1);
  }
  iVar11 = DAT_002408a0;
  uVar17 = 0;
  *(undefined4 **)(iVar8 + 0x78) = puVar7;
  do {
    func_00169608(*(uint **)(iVar8 + 0x78),uVar17,(int *)(iVar11 + uVar17 * 8),
                  *(int *)(*(int *)(iVar8 + -0x168) + 0x1c8));
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 3);
  func_0016A02C(*(int *)(iVar8 + 0x78),-1,(int *)0xffffffff,0);
  puVar10 = (uint *)func_002C11E8((int *)objStack_a4,0,10,0);
  func_0016898C(*(int *)(iVar8 + 0x78),puVar10);
  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x78) + 0x14) + 0x10) = DAT_002408a4;
  *(undefined1 *)(iVar8 + -0x26) = 2;
  *(int *)(iVar8 + -0x18) = iVar16;
  iVar11 = func_0010BA78(0x20);
  *(int *)(iVar8 + -0x14) = iVar11;
  *(uint *)(iVar8 + -0x10) = iVar11 + (uint)*(byte *)(iVar8 + -0x26) * 8;
  iVar12 = 2;
  puVar7 = (undefined4 *)(iVar11 + -8);
  do {
    uVar13 = puVar4[0xd];
    iVar12 = iVar12 + -1;
    puVar7[2] = puVar4[0xc];
    puVar7[3] = uVar13;
    uVar13 = puVar4[0xd];
    puVar7[4] = puVar4[0xc];
    puVar7[5] = uVar13;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(iVar8 + -0x26);
  uVar17 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar17 << 3);
  *(undefined4 **)(iVar8 + -0xc) = puVar7;
  if (uVar17 != 0) {
    puVar9 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar13;
      puVar9 = puVar7;
    }
    for (iVar11 = (int)uVar17 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar13 = puVar4[5];
      puVar9[2] = puVar4[4];
      puVar9[3] = uVar13;
      uVar13 = puVar4[5];
      puVar9[4] = puVar4[4];
      puVar9[5] = uVar13;
      puVar9 = puVar9 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar5 = DAT_002408a8;
  iVar11 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 2;
    *puVar7 = 0x24;
    iVar11 = func_00100118((int)(puVar7 + 2),puVar5,0x24,2);
  }
  if (iVar11 != 0) {
    *(int *)(iVar8 + -0x20) = iVar11;
    *(undefined4 *)(iVar8 + -0x24) = 2;
  }
  iVar11 = DAT_002408ac;
  *(undefined4 **)(iVar8 + -0xe4) = (undefined4 *)(iVar8 + -0x2c);
  iVar12 = DAT_002408c0;
  *(undefined2 *)(iVar11 + iVar16) = 2;
  local_3c = (uint *)s_cState_Appear_002408b0;
  local_40 = iVar12;
  iVar11 = *(int *)(iVar8 + -0x20);
  puVar10 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar12 + 8))(&local_40);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_3c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0024068c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0024068c:
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 <= (int)uVar17) {
    uVar17 = iVar11 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar10,local_3c,uVar17);
  *(undefined1 *)((int)puVar10 + uVar17) = 0;
  puVar7 = *(undefined4 **)(iVar8 + -0x14);
  uVar13 = puVar4[4];
  uVar18 = puVar4[2];
  uVar19 = puVar4[1];
  uVar20 = puVar4[3];
  uVar21 = puVar4[5];
  *puVar7 = *puVar4;
  puVar7[1] = uVar19;
  puVar7 = *(undefined4 **)(iVar8 + -0x10);
  *puVar7 = uVar18;
  puVar7[1] = uVar20;
  puVar7 = *(undefined4 **)(iVar8 + -0xc);
  *puVar7 = uVar13;
  puVar7[1] = uVar21;
  local_3c = (uint *)s_cState_Disappear_002408c4;
  local_40 = iVar12;
  if (*(uint *)(iVar8 + -0x24) < 2) {
    iVar11 = *(int *)(iVar8 + -0x20);
  }
  else {
    iVar11 = *(int *)(iVar8 + -0x20) + 0x24;
  }
  puVar10 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar12 + 8))(&local_40);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_3c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_0024075c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_0024075c:
  if (*(int *)(iVar11 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar10,local_3c,uVar17);
  *(undefined1 *)((int)puVar10 + uVar17) = 0;
  iVar11 = *(int *)(iVar8 + -0x14);
  uVar13 = puVar4[4];
  uVar20 = puVar4[8];
  uVar19 = puVar4[7];
  uVar18 = puVar4[9];
  uVar21 = puVar4[5];
  *(undefined4 *)(iVar11 + 8) = puVar4[6];
  *(undefined4 *)(iVar11 + 0xc) = uVar19;
  iVar11 = *(int *)(iVar8 + -0x10);
  *(undefined4 *)(iVar11 + 8) = uVar20;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = *(int *)(iVar8 + -0xc);
  *(undefined4 *)(iVar11 + 8) = uVar13;
  *(undefined4 *)(iVar11 + 0xc) = uVar21;
  iVar11 = (int)*(char *)(iVar8 + -0x28);
  if (iVar11 != -1) {
    iVar15 = *(int *)(iVar8 + -0xc);
    pcVar14 = *(code **)(iVar15 + iVar11 * 8);
    if ((pcVar14 != (code *)0x0) ||
       ((uVar17 = *(uint *)(iVar15 + iVar11 * 8 + 4), (uVar17 & 1) != 0 && (uVar17 != 0)))) {
      uVar17 = *(uint *)(iVar15 + iVar11 * 8 + 4);
      piVar6 = (int *)(*(int *)(iVar8 + -0x18) + ((int)uVar17 >> 1));
      if ((uVar17 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *piVar6);
      }
      (*pcVar14)(piVar6,0);
    }
  }
  uVar2 = *(undefined1 *)(iVar8 + -0x28);
  *(undefined1 *)(iVar8 + -0x28) = 0;
  *(undefined4 *)(iVar8 + -0x2c) = 0;
  *(undefined1 *)(iVar8 + -0x27) = uVar2;
  if (*(int *)(iVar8 + -0x1c) != 0) {
    piVar6 = *(int **)(iVar8 + -0x20);
    (**(code **)(*piVar6 + 8))(piVar6);
    local_94 = piVar6[1];
    local_98 = iVar12;
    func_0010BEB4(*(int *)(iVar8 + -0x1c),&local_98);
  }
  iVar11 = (int)*(char *)(iVar8 + -0x28);
  iVar12 = *(int *)(iVar8 + -0x14);
  pcVar14 = *(code **)(iVar12 + iVar11 * 8);
  if ((pcVar14 != (code *)0x0) ||
     ((uVar17 = *(uint *)(iVar12 + iVar11 * 8 + 4), (uVar17 & 1) != 0 && (uVar17 != 0)))) {
    uVar17 = *(uint *)(iVar12 + iVar11 * 8 + 4);
    if ((uVar17 & 1) != 0) {
      pcVar14 = *(code **)(pcVar14 + *(int *)(*(int *)(iVar8 + -0x18) + ((int)uVar17 >> 1)));
    }
    (*pcVar14)((int)(*(int *)(iVar8 + -0x18)) + ((int)uVar17 >> 1));
  }
  puVar7 = (undefined4 *)func_0054D964(iVar16,0);
  if (((*DAT_00240ac0 & 1) == 0) && (iVar11 = func_00100174((int *)DAT_00240ac0), iVar11 != 0)) {
    *DAT_00240ac4 = DAT_00240ac8;
  }
  if ((puVar7 == (undefined4 *)0x0) ||
     (iVar11 = (**(code **)*puVar7)(puVar7,DAT_00240ac4), iVar11 == 0)) {
    puVar7 = (undefined4 *)0x0;
  }
  *(undefined4 **)(iVar8 + -4) = puVar7;
  objStack_a8[0] = 0x240;
  *(undefined2 *)(puVar7 + 10) = 0x240;
  iVar11 = *(int *)(iVar8 + -4);
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar8 + -0x68);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar8 + -100);
  *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar8 + -0x60);
  func_004356B4(*(int **)(iVar8 + -4));
  uVar13 = puVar4[10];
  uVar18 = puVar4[0xb];
  local_34[1] = iVar16;
  local_34[2] = uVar13;
  local_34[3] = uVar18;
  sVar3 = (short)local_28[10];
  if (sVar3 == 0) {
LAB_00240a0c:
    *(undefined1 *)(iVar8 + 0x74) = 0;
    puVar10 = (uint *)func_002C11E8((int *)objStack_a8,0,1,0);
    func_0016898C(*(int *)(iVar8 + 0x78),puVar10);
  }
  else {
    if (sVar3 != 1) {
      if (sVar3 < 1) goto LAB_00240a0c;
      if (1 < sVar3) {
        *(undefined1 *)(iVar8 + 0x74) = 2;
        puVar10 = (uint *)func_002C11E8((int *)objStack_a8,2,1,0);
        func_0016898C(*(int *)(iVar8 + 0x78),puVar10);
        goto LAB_00240aac;
      }
    }
    *(undefined1 *)(iVar8 + 0x74) = 1;
    puVar10 = (uint *)func_002C11E8((int *)objStack_a8,1,1,0);
    func_0016898C(*(int *)(iVar8 + 0x78),puVar10);
  }
LAB_00240aac:
  func_002401B4(iVar16);
  return iVar16;
}

