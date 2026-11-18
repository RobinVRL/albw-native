#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E398(int param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0019B04C(uint param_1);
extern int func_0033AE94(int param_1);
extern int func_00361478(undefined4 param_1,int param_2);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_00527934(int param_1,int *param_2);
extern int DAT_0033b650;
extern undefined4 DAT_0033b654;
extern float DAT_0033b658;
extern undefined4 DAT_0033b65c;
extern undefined4 *DAT_0033b660;
extern int *DAT_0033b664;
extern char *DAT_0033b668;
extern undefined4 *DAT_0033b66c;
extern char *DAT_0033b670;
extern uint *DAT_0033b67c;
extern undefined4 *DAT_0033b680;
extern undefined *DAT_0033b684;
extern int DAT_0033ba2c;
extern char s_BombR_0033b674[];
extern char s_cState_Chain_0033ba48[];
extern char s_cState_Drop_0033ba3c[];
extern char s_cState_Wait_0033ba30[];

// USA 0033B298 <- EU 0033B274 (Ghidra, non-matching)
// GLOBAL DAT_0033b650 int
// GLOBAL DAT_0033b654 undefined4
// GLOBAL DAT_0033b658 float
// GLOBAL DAT_0033b65c undefined4
// GLOBAL DAT_0033b660 undefined4 *
// GLOBAL DAT_0033b664 int *
// GLOBAL DAT_0033b668 char *
// GLOBAL DAT_0033b66c undefined4 *
// GLOBAL DAT_0033b670 char *
// GLOBAL DAT_0033b67c uint *
// GLOBAL DAT_0033b680 undefined4 *
// GLOBAL DAT_0033b684 undefined *
// GLOBAL DAT_0033ba2c int
// GLOBAL s_BombR_0033b674 string
// GLOBAL s_cState_Chain_0033ba48 string
// GLOBAL s_cState_Drop_0033ba3c string
// GLOBAL s_cState_Wait_0033ba30 string

undefined4 * func_0033B298(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined4 uVar21;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define pcStack_ac (*(char * *)(albw_frame + 0x4))
  #define local_a8 (*(char * *)(albw_frame + 0x8))
  #define local_a4 (*(char * *)(albw_frame + 0xc))
  #define pcStack_a0 (*(char * *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined1 *)(albw_frame + 0x20))
  #define local_8f (*(undefined1 *)(albw_frame + 0x21))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define local_74 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_73 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_70 (*(char * *)(albw_frame + 0x40))
  #define local_6c (*(char * *)(albw_frame + 0x44))
  #define pcStack_68 (*(char * *)(albw_frame + 0x48))
  #define pcStack_64 (*(char * *)(albw_frame + 0x4c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x5d))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define local_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x70))
  #define local_3c (*(undefined4 *)(albw_frame + 0x74))
  #define local_38 (*(undefined1 *)(albw_frame + 0x78))
  #define local_37 (*(undefined1 *)(albw_frame + 0x79))
  #define local_30 (*(char * *)(albw_frame + 0x80))
  #define local_2c (*(uint * *)(albw_frame + 0x84))
  piVar5 = func_00150E40(param_1,param_2);
  iVar18 = DAT_0033b650;
  piVar5[200] = DAT_0033b650 + 0x54;
  *piVar5 = iVar18;
  piVar5[0x103] = 0;
  piVar5[0x104] = 0;
  puVar6 = func_0010A794(piVar5 + 0x105);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  uVar12 = DAT_0033b654;
  puVar6[10] = 0;
  puVar6[0xb] = uVar12;
  uVar12 = DAT_0033b65c;
  fVar22 = DAT_0033b658;
  puVar6[0xc] = ALBW_AS_U32(DAT_0033b658);
  puVar6[0xd] = uVar12;
  puVar17 = puVar6 + -0x105;
  uVar11 = param_2[5];
  uVar14 = param_2[6];
  puVar6[0xe] = param_2[4];
  puVar6[0xf] = uVar11;
  puVar6[0x10] = uVar14;
  puVar10 = DAT_0033b660;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  uVar12 = puVar10[1];
  uVar15 = puVar10[2];
  puVar6[0x14] = *puVar10;
  puVar6[0x15] = uVar12;
  puVar6[0x16] = uVar15;
  puVar6[0x17] = 0;
  piVar5 = DAT_0033b664;
  *(undefined2 *)(puVar6 + 0x18) = 0;
  puVar6[0x19] = 0;
  puVar10 = DAT_0033b66c;
  iVar18 = (int)*(short *)(puVar6 + -0xfa);
  if (*piVar5 != iVar18) {
    iVar7 = 1;
    do {
      if (piVar5[iVar7 * 8] == iVar18) {
        piVar5 = piVar5 + iVar7 * 8;
        break;
      }
      if ((piVar5 + iVar7 * 8)[8] == iVar18) {
        piVar5 = piVar5 + iVar7 * 8 + 8;
        break;
      }
      iVar7 = iVar7 + 2;
    } while (iVar7 < 9);
  }
  puVar6[0x17] = piVar5;
  pcVar3 = DAT_0033b668;
  uVar12 = *puVar10;
  if (iVar18 == 2) {
    local_6c = s_BombR_0033b674;
    local_70 = DAT_0033b668;
    iVar7 = func_0019B04C(*DAT_0033b67c);
    iVar7 = func_00527934(iVar7,(int *)&local_70);
    if (*(int *)(iVar7 + 200) == 0) {
      local_9c = 0;
    }
    else {
      local_9c = **(undefined4 **)(iVar7 + 0xd0);
    }
  }
  else {
    if (*(byte *)(piVar5 + 1) == 0x20) {
      *(undefined1 *)((int)puVar6 + -0x13d) = 1;
      return puVar17;
    }
    local_9c = func_00361478(uVar12,(uint)*(byte *)(piVar5 + 1));
  }
  pcVar4 = DAT_0033b670;
  pcStack_ac = pcVar3;
  local_a8 = DAT_0033b670;
  uStack_98 = 0;
  local_94 = 0;
  local_a4 = pcVar3;
  pcStack_a0 = DAT_0033b670;
  local_74 = 1;
  local_90 = 0;
  local_8f = 0;
  local_78 = 0;
  local_88 = 0;
  local_7c = 0;
  local_8c = 0;
  local_80 = 0;
  local_84 = 0;
  local_73 = 0xc4;
  iVar7 = func_0014E398((int)puVar17,(int *)&pcStack_ac,1);
  puVar6[-2] = iVar7;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 1;
  func_004CF864(puVar6[-2],1,0xffffffff,fVar22);
  *(uint *)(puVar6[-2] + 0x164) = *(uint *)(puVar6[-2] + 0x164) | 0x200000;
  if (iVar18 == 4) {
    local_60 = func_00361478(uVar12,0xb);
    local_70 = pcVar3;
    local_6c = pcVar4;
    uStack_5c = 0;
    local_58 = 0;
    pcStack_68 = pcVar3;
    pcStack_64 = pcVar4;
    local_38 = 1;
    local_54 = 0;
    local_53 = 0;
    local_3c = 0;
    local_4c = 0;
    local_40 = 0;
    local_50 = 0;
    local_44 = 0;
    local_48 = 0;
    local_37 = 0xc4;
    iVar18 = func_0014E398((int)puVar17,(int *)&local_70,0);
    puVar6[-1] = iVar18;
    *(uint *)(iVar18 + 0x164) = *(uint *)(iVar18 + 0x164) | 1;
    func_004CF864(puVar6[-1],1,0xffffffff,fVar22);
    *(uint *)(puVar6[-1] + 0x164) = *(uint *)(puVar6[-1] + 0x164) | 0x200000;
  }
  func_0033AE94((int)puVar17);
  puVar6[-0x4d] = puVar6[-0x4d] | 2;
  *(undefined1 *)((int)puVar6 + 6) = 3;
  puVar6[5] = puVar17;
  iVar18 = func_0010BA78(0x30);
  puVar6[6] = iVar18;
  puVar10 = DAT_0033b680;
  puVar6[7] = iVar18 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar7 = 3;
  puVar8 = (undefined4 *)(iVar18 + -8);
  do {
    uVar12 = puVar10[0x11];
    iVar7 = iVar7 + -1;
    puVar8[2] = puVar10[0x10];
    puVar8[3] = uVar12;
    uVar12 = puVar10[0x11];
    puVar8[4] = puVar10[0x10];
    puVar8[5] = uVar12;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar11 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar6[8] = puVar8;
  if (uVar11 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar10[5];
      *puVar8 = puVar10[4];
      puVar8[1] = uVar12;
      puVar9 = puVar8;
    }
    for (iVar18 = (int)uVar11 >> 1; iVar18 != 0; iVar18 = iVar18 + -1) {
      uVar12 = puVar10[5];
      puVar9[2] = puVar10[4];
      puVar9[3] = uVar12;
      uVar12 = puVar10[5];
      puVar9[4] = puVar10[4];
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar18 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 3;
    iVar18 = func_00100118((int)(puVar10 + 2),DAT_0033b684,0x24,3);
  }
  if (iVar18 != 0) {
    puVar6[3] = iVar18;
    puVar6[2] = 3;
  }
  iVar18 = DAT_0033ba2c;
  puVar6[-0x30] = puVar6;
  *(undefined2 *)(iVar18 + (int)puVar17) = 3;
  local_2c = (uint *)s_cState_Wait_0033ba30;
  local_30 = pcVar3;
  iVar18 = puVar6[3];
  puVar20 = *(uint **)(iVar18 + 4);
  (**(code **)(pcVar3 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0033b6f4;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0033b6f4:
  iVar18 = *(int *)(iVar18 + 8);
  if (iVar18 <= (int)uVar11) {
    uVar11 = iVar18 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar20,local_2c,uVar11);
  *(undefined1 *)((int)puVar20 + uVar11) = 0;
  puVar10 = (undefined4 *)puVar6[6];
  uVar21 = DAT_0033b680[1];
  uVar16 = DAT_0033b680[4];
  uVar15 = DAT_0033b680[2];
  uVar19 = DAT_0033b680[3];
  uVar12 = DAT_0033b680[5];
  *puVar10 = *DAT_0033b680;
  puVar10[1] = uVar21;
  puVar10 = (undefined4 *)puVar6[7];
  *puVar10 = uVar15;
  puVar10[1] = uVar19;
  puVar10 = (undefined4 *)puVar6[8];
  puVar10[1] = uVar12;
  *puVar10 = uVar16;
  local_2c = (uint *)s_cState_Drop_0033ba3c;
  local_30 = pcVar3;
  if ((uint)puVar6[2] < 2) {
    iVar18 = puVar6[3];
  }
  else {
    iVar18 = puVar6[3] + 0x24;
  }
  puVar20 = *(uint **)(iVar18 + 4);
  (**(code **)(pcVar3 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0033b7c0;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0033b7c0:
  if (*(int *)(iVar18 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar18 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar20,local_2c,uVar11);
  puVar10 = DAT_0033b680;
  *(undefined1 *)((int)puVar20 + uVar11) = 0;
  iVar18 = puVar6[6];
  uVar15 = puVar10[8];
  uVar16 = puVar10[10];
  uVar21 = puVar10[7];
  uVar19 = puVar10[9];
  uVar12 = puVar10[0xb];
  *(undefined4 *)(iVar18 + 8) = puVar10[6];
  *(undefined4 *)(iVar18 + 0xc) = uVar21;
  iVar18 = puVar6[7];
  *(undefined4 *)(iVar18 + 8) = uVar15;
  *(undefined4 *)(iVar18 + 0xc) = uVar19;
  iVar18 = puVar6[8];
  *(undefined4 *)(iVar18 + 8) = uVar16;
  *(undefined4 *)(iVar18 + 0xc) = uVar12;
  local_2c = (uint *)s_cState_Chain_0033ba48;
  local_30 = pcVar3;
  if ((uint)puVar6[2] < 3) {
    iVar18 = puVar6[3];
  }
  else {
    iVar18 = puVar6[3] + 0x48;
  }
  puVar20 = *(uint **)(iVar18 + 4);
  (**(code **)(pcVar3 + 8))(&local_30);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_2c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0033b898;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0033b898:
  if (*(int *)(iVar18 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar18 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar20,local_2c,uVar11);
  puVar10 = DAT_0033b680;
  *(undefined1 *)((int)puVar20 + uVar11) = 0;
  iVar18 = puVar6[6];
  uVar15 = puVar10[0xf];
  uVar21 = puVar10[0xd];
  uVar16 = puVar10[0xe];
  uVar19 = puVar10[4];
  uVar12 = puVar10[5];
  *(undefined4 *)(iVar18 + 0x10) = puVar10[0xc];
  *(undefined4 *)(iVar18 + 0x14) = uVar21;
  iVar18 = puVar6[7];
  *(undefined4 *)(iVar18 + 0x10) = uVar16;
  *(undefined4 *)(iVar18 + 0x14) = uVar15;
  iVar18 = puVar6[8];
  *(undefined4 *)(iVar18 + 0x10) = uVar19;
  *(undefined4 *)(iVar18 + 0x14) = uVar12;
  iVar18 = (int)*(char *)(puVar6 + 1);
  if (iVar18 != -1) {
    iVar7 = puVar6[8];
    pcVar13 = *(code **)(iVar7 + iVar18 * 8);
    if ((pcVar13 != (code *)0x0) ||
       ((uVar11 = *(uint *)(iVar7 + iVar18 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
      uVar11 = *(uint *)(iVar7 + iVar18 * 8 + 4);
      piVar5 = (int *)(puVar6[5] + ((int)uVar11 >> 1));
      if ((uVar11 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *piVar5);
      }
      (*pcVar13)(piVar5,1);
    }
  }
  uVar2 = *(undefined1 *)(puVar6 + 1);
  *(undefined1 *)(puVar6 + 1) = 1;
  *puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 5) = uVar2;
  if (puVar6[4] != 0) {
    if ((uint)puVar6[2] < 2) {
      piVar5 = (int *)puVar6[3];
    }
    else {
      piVar5 = (int *)(puVar6[3] + 0x24);
    }
    (**(code **)(*piVar5 + 8))(piVar5);
    local_a4 = (char *)piVar5[1];
    local_a8 = pcVar3;
    func_0010BEB4(puVar6[4],(int *)&local_a8);
  }
  iVar18 = (int)*(char *)(puVar6 + 1);
  iVar7 = puVar6[6];
  pcVar13 = *(code **)(iVar7 + iVar18 * 8);
  if ((pcVar13 != (code *)0x0) ||
     ((uVar11 = *(uint *)(iVar7 + iVar18 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
    uVar11 = *(uint *)(iVar7 + iVar18 * 8 + 4);
    if ((uVar11 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *(int *)(puVar6[5] + ((int)uVar11 >> 1)));
    }
    (*pcVar13)((int)(puVar6[5]) + ((int)uVar11 >> 1));
  }
  return puVar17;
}

