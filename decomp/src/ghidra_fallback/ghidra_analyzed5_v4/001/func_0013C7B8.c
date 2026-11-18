#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_006572F8(undefined4 *param_1,undefined1 param_2);
extern int DAT_0013cb88;
extern int DAT_0013cb94;
extern undefined4 DAT_0013cb98;
extern undefined4 DAT_0013cb9c;
extern undefined4 DAT_0013cba0;
extern undefined4 *DAT_0013cba4;
extern undefined *DAT_0013cba8;
extern int DAT_0013cbac;
extern char s_Crystal_0013cb8c[];
extern char s_cState_Appear_0013cbbc[];
extern char s_cState_Wait_0013cbb0[];

// USA 0013C7B8 <- EU 0013C7B8 (Ghidra, non-matching)
// GLOBAL DAT_0013cb88 int
// GLOBAL DAT_0013cb94 int
// GLOBAL DAT_0013cb98 undefined4
// GLOBAL DAT_0013cb9c undefined4
// GLOBAL DAT_0013cba0 undefined4
// GLOBAL DAT_0013cba4 undefined4 *
// GLOBAL DAT_0013cba8 undefined *
// GLOBAL DAT_0013cbac int
// GLOBAL s_Crystal_0013cb8c string
// GLOBAL s_cState_Appear_0013cbbc string
// GLOBAL s_cState_Wait_0013cbb0 string

undefined4 * func_0013C7B8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c ((uint *)(albw_frame + 0x4))
  #define puStack_94 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(uint *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_40 (*(int *)(albw_frame + 0x60))
  #define local_3c (*(uint * *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x70))
  piVar3 = func_00150E40(param_1,param_2);
  iVar9 = DAT_0013cb88;
  piVar3[200] = DAT_0013cb88 + 0x54;
  *piVar3 = iVar9;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  puVar4 = func_0010A794(piVar3 + 0x106);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  puVar11 = puVar4 + -0x106;
  puVar4[-3] = *(undefined4 *)(puVar4[-0x52] + 0x1c8);
  uVar5 = func_0014E428((int)puVar11,0,0,0,1,0,0);
  puVar4[-2] = uVar5;
  uVar5 = func_0014E904((int)puVar11,1,1);
  iVar9 = DAT_0013cb94;
  puVar4[-1] = uVar5;
  local_3c = (uint *)s_Crystal_0013cb8c;
  local_40 = iVar9;
  func_00169688((uint *)puVar4[-1],0,&local_40,puVar4[-3]);
  local_7c = func_0016A02C(puVar4[-1],-1,(int *)0xffffffff,0);
  puStack_94 = &local_90;
  local_9c[1] = 3;
  local_48 = 0;
  local_44 = 0;
  local_9c[0] = 1;
  local_90 = 0;
  local_80 = DAT_0013cb9c;
  local_7c = local_7c | 0xff;
  local_8c = DAT_0013cb98;
  uStack_88 = DAT_0013cb9c;
  uStack_84 = DAT_0013cba0;
  uVar5 = DAT_0013cba0;
  uVar14 = DAT_0013cb98;
  func_0016898C(puVar4[-1],local_9c);
  piVar3 = puVar4 + -2;
  *(undefined4 *)(*(int *)(puVar4[-1] + 0x14) + 0x10) = uVar14;
  func_00168E9C((int *)puVar4[-1],puVar4[-2],(int *)0x0);
  func_004CEAF0(*piVar3);
  local_38 = ALBW_AS_F32(puVar4[-0x12]);
  uStack_34 = puVar4[-0x11];
  uStack_30 = puVar4[-0x10];
  iVar6 = *piVar3;
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar6 + 0x80),puVar4[-0xc],&local_38);
  func_004CEAF0(*piVar3);
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar11;
  iVar6 = func_0010BA78(0x20);
  puVar4[6] = iVar6;
  puVar2 = DAT_0013cba4;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 2;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = puVar2[0xb];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar2[10];
    puVar7[3] = uVar14;
    uVar14 = puVar2[0xb];
    puVar7[4] = puVar2[10];
    puVar7[5] = uVar14;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar14;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar14;
      uVar14 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar14;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_0013cba8,0x24,2);
  }
  if (iVar6 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar6;
  }
  iVar6 = DAT_0013cbac;
  puVar4[-0x31] = puVar4;
  *(undefined2 *)(iVar6 + (int)puVar11) = 2;
  local_3c = (uint *)s_cState_Wait_0013cbb0;
  local_40 = iVar9;
  iVar6 = puVar4[3];
  puVar13 = *(uint **)(iVar6 + 4);
  puVar7 = puVar4;
  (**(code **)(iVar9 + 8))(&local_40);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_3c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0013cae4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0013cae4:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar12) {
    uVar12 = iVar6 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar13,local_3c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar8 = (undefined4 *)puVar4[6];
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  uVar17 = puVar2[4];
  uVar18 = puVar2[5];
  *puVar8 = *puVar2;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar15;
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  local_3c = (uint *)s_cState_Appear_0013cbbc;
  local_40 = iVar9;
  if ((uint)puVar4[2] < 2) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar9 + 8))(&local_40);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_3c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_0013cbd8;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_0013cbd8:
  if (*(int *)(iVar6 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar13,local_3c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar9 = puVar4[6];
  uVar14 = puVar2[4];
  uVar15 = puVar2[5];
  uVar16 = puVar2[7];
  uVar17 = puVar2[8];
  uVar18 = puVar2[9];
  *(undefined4 *)(iVar9 + 8) = puVar2[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar14;
  *(undefined4 *)(iVar9 + 0xc) = uVar15;
  func_006572F8(puVar7,0);
  puVar4[-0x1b] = uVar5;
  puVar4[-0x4e] = puVar4[-0x4e] | 2;
  return puVar11;
}

