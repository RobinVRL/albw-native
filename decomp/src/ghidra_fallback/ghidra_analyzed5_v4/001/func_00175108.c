#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00658C58(undefined4 *param_1,undefined1 param_2);
extern int DAT_00175628;
extern undefined4 DAT_0017562c;
extern int DAT_00175630;
extern float DAT_00175634;
extern uint DAT_00175638;
extern undefined4 *DAT_0017563c;
extern undefined *DAT_00175640;
extern int DAT_00175644;
extern int DAT_00175658;
extern char s_cState_Down_00175674[];
extern char s_cState_Erase_00175680[];
extern char s_cState_Ready_00175648[];
extern char s_cState_Up_0017565c[];
extern char s_cState_Wait_00175668[];

// USA 00175108 <- EU 00175108 (Ghidra, non-matching)
// GLOBAL DAT_00175628 int
// GLOBAL DAT_0017562c undefined4
// GLOBAL DAT_00175630 int
// GLOBAL DAT_00175634 float
// GLOBAL DAT_00175638 uint
// GLOBAL DAT_0017563c undefined4 *
// GLOBAL DAT_00175640 undefined *
// GLOBAL DAT_00175644 int
// GLOBAL DAT_00175658 int
// GLOBAL s_cState_Down_00175674 string
// GLOBAL s_cState_Erase_00175680 string
// GLOBAL s_cState_Ready_00175648 string
// GLOBAL s_cState_Up_0017565c string
// GLOBAL s_cState_Wait_00175668 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_00175108(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 extraout_r1;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  piVar3 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00175628;
  *piVar3 = DAT_00175628;
  piVar3[200] = iVar8 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  objStack_50[0] = 1;
  objStack_50[1] = 0;
  puVar14 = puVar4 + -0x103;
  objStack_50[2] = 0;
  uVar5 = func_0014E428((int)puVar14,0,0,0,1,0,0);
  puVar4[9] = uVar5;
  puVar4[10] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  puVar4[0xb] = puVar7;
  iVar8 = func_0054D964((int)puVar14,0);
  puVar4[0xc] = iVar8;
  iVar8 = puVar4[9];
  piVar3 = puVar4 + 0xc;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar4[-9],(float *)(puVar4 + -0xf));
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar6,2,DAT_0017562c,1);
  }
  iVar8 = DAT_00175630;
  uVar15 = 0;
  puVar4[10] = puVar7;
  do {
    func_00169688((uint *)puVar4[10],uVar15,(int *)(iVar8 + uVar15 * 8),
                  *(int *)(puVar4[-0x4f] + 0x1c8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 2);
  uVar5 = 0xffffffff;
  piVar12 = (int *)0x0;
  func_0016A02C(puVar4[10],-1,(int *)0xffffffff,0);
  func_00169A80((int *)puVar4[10],extraout_r1,uVar5,piVar12);
  func_00168E9C((int *)puVar4[10],puVar4[9],(int *)0x0);
  func_004CEAF0(puVar4[9]);
  piVar12 = (int *)puVar4[9];
  (**(code **)(*piVar12 + 0x10))(piVar12,0x24);
  iVar8 = puVar4[9];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(uint *)(iVar8 + 0x74) = param_2[4];
  *(uint *)(iVar8 + 0x78) = param_2[5];
  *(uint *)(iVar8 + 0x7c) = param_2[6];
  if (puVar4[0xb] != 0) {
    objStack_50[0] = CONCAT22((*(undefined2 *)((char *)&objStack_50[0] + 2)),4);
    *(undefined2 *)(puVar4[0xc] + 0x28) = 4;
    *(uint *)(*piVar3 + 0x2c) = *(uint *)(*piVar3 + 0x2c) | 2;
    if (puVar4[0xc] != 0) {
      objStack_50[1] = (uint)ALBW_AS_U32((*(float *)(puVar4[0xc] + 0x5c) * DAT_00175634));
      objStack_50[0] = DAT_00175638;
      objStack_50[2] = DAT_00175638;
      iVar8 = *piVar3;
      func_00115C54(&local_38,(float *)(puVar4 + -0xf),(float *)objStack_50);
      *(float *)(iVar8 + 4) = local_38;
      *(undefined4 *)(iVar8 + 8) = uStack_34;
      *(undefined4 *)(iVar8 + 0xc) = uStack_30;
      func_004356B4((int *)*piVar3);
    }
    *(undefined4 *)(puVar4[0xb] + 0x18) = puVar4[0xc];
    *(undefined2 *)(puVar4[0xb] + 0x2c) = *(undefined2 *)(puVar4 + -0xee);
    local_44 = puVar4[-0x50];
    func_004EDAD0(puVar4[0xb],&local_44);
  }
  puVar4[-0x4b] = puVar4[-0x4b] | 2;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  puVar4[5] = puVar14;
  iVar8 = func_0010BA78(0x50);
  puVar4[6] = iVar8;
  puVar7 = DAT_0017563c;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 5;
  puVar6 = (undefined4 *)(iVar8 + -8);
  do {
    uVar5 = puVar7[0x17];
    iVar10 = iVar10 + -1;
    puVar6[2] = puVar7[0x16];
    puVar6[3] = uVar5;
    uVar5 = puVar7[0x17];
    puVar6[4] = puVar7[0x16];
    puVar6[5] = uVar5;
    puVar6 = puVar6 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar6;
  if (uVar15 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar5;
      puVar9 = puVar6;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar5 = puVar7[5];
      puVar9[2] = puVar7[4];
      puVar9[3] = uVar5;
      uVar5 = puVar7[5];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar5;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar2 = DAT_00175640;
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 5;
    *puVar6 = 0x24;
    iVar8 = func_00100118((int)(puVar6 + 2),puVar2,0x24,5);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 5;
  }
  iVar8 = DAT_00175644;
  puVar4[-0x2e] = puVar4;
  iVar10 = DAT_00175658;
  *(undefined2 *)(iVar8 + (int)puVar14) = 5;
  local_3c = s_cState_Ready_00175648;
  local_40 = iVar10;
  func_0010BEC4((int)puVar4,0,&local_40);
  puVar6 = (undefined4 *)puVar4[6];
  uVar11 = puVar7[2];
  uVar13 = *puVar7;
  uVar5 = puVar7[3];
  uVar16 = *(undefined8 *)(puVar7 + 4);
  puVar6[1] = puVar7[1];
  *puVar6 = uVar13;
  puVar6 = (undefined4 *)puVar4[7];
  puVar6[1] = uVar5;
  *puVar6 = uVar11;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Up_0017565c;
  local_40 = iVar10;
  func_0010BEC4((int)puVar4,1,&local_40);
  iVar8 = puVar4[6];
  uVar11 = puVar7[7];
  uVar5 = puVar7[8];
  uVar13 = puVar7[9];
  *(undefined4 *)(iVar8 + 8) = puVar7[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar5;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 8) = (int)uVar16;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Wait_00175668;
  local_40 = iVar10;
  func_0010BEC4((int)puVar4,2,&local_40);
  iVar8 = puVar4[6];
  uVar11 = puVar7[0xb];
  uVar5 = puVar7[0xc];
  uVar13 = puVar7[0xd];
  *(undefined4 *)(iVar8 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar5;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x10) = (int)uVar16;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Down_00175674;
  local_40 = iVar10;
  func_0010BEC4((int)puVar4,3,&local_40);
  iVar8 = puVar4[6];
  uVar5 = puVar7[0x10];
  uVar11 = puVar7[0x11];
  uVar13 = puVar7[0xf];
  *(undefined4 *)(iVar8 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar5;
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x18) = (int)uVar16;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Erase_00175680;
  local_40 = iVar10;
  func_0010BEC4((int)puVar4,4,&local_40);
  iVar8 = puVar4[6];
  uVar11 = puVar7[0x13];
  uVar5 = puVar7[0x14];
  uVar13 = puVar7[0x15];
  *(undefined4 *)(iVar8 + 0x20) = puVar7[0x12];
  *(undefined4 *)(iVar8 + 0x24) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar5;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x20) = (int)uVar16;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar16 >> 0x20);
  func_00658C58(puVar4,0);
  return puVar14;
}

