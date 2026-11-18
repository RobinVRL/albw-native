#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004F5174(int param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8774(int param_1,uint param_2,int param_3,uint param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FC5EC(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00521028(int param_1);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00205704;
extern int DAT_00205708;
extern int DAT_0020570c;
extern int DAT_00205710;
extern float DAT_00205714;
extern uint DAT_00205718;
extern int DAT_0020571c;
extern undefined DAT_00205748;
extern undefined DAT_00205750;
extern undefined DAT_00205784;
extern int DAT_002057a4;
extern undefined *DAT_00205c58;
extern int DAT_00205c5c;
extern undefined4 *DAT_00205cdc;
extern float DAT_00205ce0;
extern uint DAT_00205ce4;
extern float DAT_00205ce8;
extern float DAT_00205cec;
extern char s_BuzzBlob_00205720[];
extern char s_BuzzBlob_Thunder_0020572c[];
extern char s_appear_00205740[];
extern char s_biribiri_ed_00205770[];
extern char s_biribiri_st_00205764[];
extern char s_cState_Appear_00205c6c[];
extern char s_cState_BiriBiri_00205ca4[];
extern char s_cState_Chase_00205cb4[];
extern char s_cState_Die_00205cd0[];
extern char s_cState_Hide_00205c60[];
extern char s_cState_Home_00205cc4[];
extern char s_cState_Reaction_00205c7c[];
extern char s_cState_Wait_00205c8c[];
extern char s_cState_Walk_00205c98[];
extern char s_damage_0020577c[];
extern char s_jitabata_0020578c[];
extern char s_piyopiyo_00205798[];
extern char s_walk_fast_00205758[];

// USA 00205310 <- EU 00205310 (Ghidra, non-matching)
// GLOBAL DAT_00205704 uint *
// GLOBAL DAT_00205708 int
// GLOBAL DAT_0020570c int
// GLOBAL DAT_00205710 int
// GLOBAL DAT_00205714 float
// GLOBAL DAT_00205718 uint
// GLOBAL DAT_0020571c int
// GLOBAL DAT_00205748 undefined
// GLOBAL DAT_00205750 undefined
// GLOBAL DAT_00205784 undefined
// GLOBAL DAT_002057a4 int
// GLOBAL DAT_00205c58 undefined *
// GLOBAL DAT_00205c5c int
// GLOBAL DAT_00205cdc undefined4 *
// GLOBAL DAT_00205ce0 float
// GLOBAL DAT_00205ce4 uint
// GLOBAL DAT_00205ce8 float
// GLOBAL DAT_00205cec float
// GLOBAL s_BuzzBlob_00205720 string
// GLOBAL s_BuzzBlob_Thunder_0020572c string
// GLOBAL s_appear_00205740 string
// GLOBAL s_biribiri_ed_00205770 string
// GLOBAL s_biribiri_st_00205764 string
// GLOBAL s_cState_Appear_00205c6c string
// GLOBAL s_cState_BiriBiri_00205ca4 string
// GLOBAL s_cState_Chase_00205cb4 string
// GLOBAL s_cState_Die_00205cd0 string
// GLOBAL s_cState_Hide_00205c60 string
// GLOBAL s_cState_Home_00205cc4 string
// GLOBAL s_cState_Reaction_00205c7c string
// GLOBAL s_cState_Wait_00205c8c string
// GLOBAL s_cState_Walk_00205c98 string
// GLOBAL s_damage_0020577c string
// GLOBAL s_jitabata_0020578c string
// GLOBAL s_piyopiyo_00205798 string
// GLOBAL s_walk_fast_00205758 string

/* WARNING: Variable defined which should be unmapped: objStack_90 */

int * func_00205310(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  ushort uVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fparam_0;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_90 ((uint *)(albw_frame + 0x0))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(int *)(albw_frame + 0x18))
  #define local_74 (*(uint * *)(albw_frame + 0x1c))
  #define local_70 (*(int *)(albw_frame + 0x20))
  #define local_6c ((uint *)(albw_frame + 0x24))
  #define uStack_59 (*(undefined1 *)(albw_frame + 0x37))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x38))
  #define local_40 (*(uint *)(albw_frame + 0x50))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x64))
  #define local_28 (*(uint * *)(albw_frame + 0x68))
  puVar12 = objStack_90;
  puStack_2c = param_1;
  local_28 = param_2;
  piVar3 = func_004FD464(param_1,param_2,DAT_00205704);
  iVar8 = DAT_0020570c;
  iVar16 = DAT_00205710 + 0x84;
  *piVar3 = DAT_00205710;
  iVar11 = DAT_00205708;
  piVar3[200] = iVar16;
  piVar3[0x22f] = iVar8;
  piVar3[0x230] = iVar11;
  piVar3[0x231] = iVar11;
  *(undefined2 *)((int)piVar3 + 0x8ca) = 0xffff;
  *(undefined2 *)(piVar3 + 0x233) = 0;
  piVar3[0x234] = 0;
  fparam_0 = DAT_00205714;
  piVar3[0x235] = 0;
  piVar3[0x236] = 0;
  piVar3[0x237] = (int)ALBW_AS_U32(fparam_0);
  piVar3[0x238] = 0;
  piVar3[0x239] = 0;
  piVar3[0x23a] = (int)ALBW_AS_U32(fparam_0);
  piVar3[0x23b] = 0;
  puVar4 = func_0010A794(piVar3 + 0x23c);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar2 = DAT_00205718;
  piVar3 = puVar4 + -0x23c;
  local_70 = 0x14;
  uStack_59 = 0;
  (*(undefined1 *)((char *)&local_6c[0] + 0)) = 0;
  local_78 = DAT_0020571c;
  objStack_90[0] = DAT_00205718;
  if (*(short *)(puVar4 + -0x230) == 0) {
    pcVar5 = s_BuzzBlob_00205720;
  }
  else {
    pcVar5 = s_BuzzBlob_Thunder_0020572c;
  }
  objStack_90[1] = (uint)pcVar5;
  local_74 = local_6c;
  if (*(short *)(puVar4 + -0x230) == 0) {
    (**(code **)(DAT_00205718 + 8))(objStack_90);
    uVar15 = 0;
    do {
      if (*(char *)(objStack_90[1] + uVar15) == '\0') {
        if ((int)uVar15 < 0x40001) goto LAB_00205468;
        break;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 0x40001);
    uVar15 = 0;
LAB_00205468:
    if ((int)uVar15 < local_70) goto LAB_00205494;
  }
  else {
    (**(code **)(DAT_00205718 + 8))();
    uVar15 = 0;
    do {
      if (*(char *)(objStack_90[1] + uVar15) == '\0') {
        if ((int)uVar15 < 0x40001) goto LAB_00205488;
        break;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 0x40001);
    uVar15 = 0;
LAB_00205488:
    if ((int)uVar15 < local_70) goto LAB_00205494;
  }
  uVar15 = local_70 - 1;
LAB_00205494:
  (**(code **)(objStack_90[0] + 8))(objStack_90);
  func_0010E3C4(local_6c,(uint *)objStack_90[1],uVar15);
  *(undefined1 *)((int)local_6c + uVar15) = 0;
  piVar6 = (int *)func_005330BC(*(int *)(puVar4[-0x188] + 0x1c8),&local_78);
  objStack_90[0] = 0xb;
  func_004F8774((int)piVar3,DAT_00205704[1],0,(uint)piVar6);
  func_004FB344((int)piVar3,10);
  objStack_90[1] = (uint)s_appear_00205740;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,0,(int *)objStack_90);
  objStack_90[1] = (uint)&DAT_00205748;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,1,(int *)objStack_90);
  objStack_90[1] = (uint)&DAT_00205750;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,2,(int *)objStack_90);
  objStack_90[1] = (uint)s_walk_fast_00205758;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,3,(int *)objStack_90);
  objStack_90[1] = (uint)s_biribiri_st_00205764;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,4,(int *)objStack_90);
  objStack_90[1] = (uint)s_biribiri_ed_00205770;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,5,(int *)objStack_90);
  objStack_90[1] = (uint)s_damage_0020577c;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,6,(int *)objStack_90);
  objStack_90[1] = (uint)&DAT_00205784;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,7,(int *)objStack_90);
  objStack_90[1] = (uint)s_jitabata_0020578c;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,8,(int *)objStack_90);
  objStack_90[1] = (uint)s_piyopiyo_00205798;
  objStack_90[0] = uVar2;
  func_004FACA4((int)piVar3,9,(int *)objStack_90);
  func_004FB468((int)piVar3);
  if (*(short *)(puVar4 + -0x230) == 1) {
    func_004FB30C((int)piVar3,1);
    objStack_90[1] = (uint)s_BuzzBlob_Thunder_0020572c;
    objStack_90[0] = uVar2;
    func_004FAC70((int)piVar3,0,(int *)objStack_90);
    func_004FB408((int)piVar3);
    func_004FB4C4((int)piVar3,fparam_0);
    func_004FACD4((int)piVar3,(int *)0x0,puVar12,piVar6);
    puVar7 = (undefined2 *)func_0054DDF4((int)piVar3,1);
    puVar4[-8] = puVar7;
    func_004F88A0(piVar3,puVar7);
    uVar15 = *(uint *)(puVar4[-0x133] + 0x2c);
    *(uint *)(puVar4[-0x133] + 0x2c) = uVar15 | 0x20000;
    *(uint *)(puVar4[-0x133] + 0x2c) = uVar15 | 0x60000;
  }
  func_004FC5EC((int)piVar3,0);
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 9;
  iVar8 = func_0010BA78(0x90);
  iVar11 = DAT_002057a4;
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar16 = 9;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar11 + 0xb0);
    iVar16 = iVar16 + -1;
    puVar9[2] = *(undefined4 *)(iVar11 + 0xac);
    puVar9[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar11 + 0xb0);
    puVar9[4] = *(undefined4 *)(iVar11 + 0xac);
    puVar9[5] = uVar17;
    puVar9 = puVar9 + 4;
  } while (iVar16 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar9;
  if (uVar15 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      *puVar9 = *(undefined4 *)(iVar11 + 0x14);
      puVar9[1] = uVar17;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar15 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      puVar10[2] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      puVar10[4] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[5] = uVar17;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 9;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_00205c58,0x24,9);
  }
  if (iVar8 != 0) {
    puVar4[2] = 9;
    puVar4[3] = iVar8;
  }
  iVar8 = DAT_00205c5c;
  puVar4[-0x167] = puVar4;
  *(undefined2 *)(iVar8 + (int)piVar3) = 9;
  local_7c = s_cState_Hide_00205c60;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,0,(int *)&local_80);
  puVar9 = (undefined4 *)puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 8);
  uVar18 = *(undefined4 *)(iVar11 + 0xc);
  uVar19 = *(undefined4 *)(iVar11 + 0x10);
  uVar20 = *(undefined4 *)(iVar11 + 0x14);
  uVar21 = *(undefined4 *)(iVar11 + 0x18);
  *puVar9 = *(undefined4 *)(iVar11 + 4);
  puVar9[1] = uVar17;
  puVar9 = (undefined4 *)puVar4[7];
  *puVar9 = uVar18;
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar4[8];
  *puVar9 = uVar20;
  puVar9[1] = uVar21;
  local_7c = s_cState_Appear_00205c6c;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,1,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x20);
  uVar18 = *(undefined4 *)(iVar11 + 0x24);
  uVar19 = *(undefined4 *)(iVar11 + 0x28);
  uVar20 = *(undefined4 *)(iVar11 + 0x2c);
  uVar21 = *(undefined4 *)(iVar11 + 0x30);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar11 + 0x1c);
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar18;
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar20;
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  local_7c = s_cState_Reaction_00205c7c;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,2,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar18 = *(undefined4 *)(iVar11 + 0x48);
  uVar20 = *(undefined4 *)(iVar11 + 0x44);
  uVar21 = *(undefined4 *)(iVar11 + 0x38);
  uVar17 = *(undefined4 *)(iVar11 + 0x3c);
  uVar19 = *(undefined4 *)(iVar11 + 0x40);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar11 + 0x34);
  *(undefined4 *)(iVar8 + 0x14) = uVar21;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar20;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  local_7c = s_cState_Wait_00205c8c;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,3,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x50);
  uVar18 = *(undefined4 *)(iVar11 + 0x54);
  uVar19 = *(undefined4 *)(iVar11 + 0x58);
  uVar22 = *(undefined8 *)(iVar11 + 0x14);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar11 + 0x4c);
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar18;
  *(undefined4 *)(iVar8 + 0x1c) = uVar19;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x18) = (int)uVar22;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar22 >> 0x20);
  local_7c = s_cState_Walk_00205c98;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,4,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x60);
  uVar18 = *(undefined4 *)(iVar11 + 100);
  uVar19 = *(undefined4 *)(iVar11 + 0x68);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar11 + 0x5c);
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar18;
  *(undefined4 *)(iVar8 + 0x24) = uVar19;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x20) = (int)uVar22;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar22 >> 0x20);
  local_7c = s_cState_BiriBiri_00205ca4;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,5,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x70);
  uVar18 = *(undefined4 *)(iVar11 + 0x74);
  uVar19 = *(undefined4 *)(iVar11 + 0x78);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar11 + 0x6c);
  *(undefined4 *)(iVar8 + 0x2c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar18;
  *(undefined4 *)(iVar8 + 0x2c) = uVar19;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x28) = (int)uVar22;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar22 >> 0x20);
  local_7c = s_cState_Chase_00205cb4;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,6,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x80);
  uVar18 = *(undefined4 *)(iVar11 + 0x84);
  uVar19 = *(undefined4 *)(iVar11 + 0x88);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar11 + 0x7c);
  *(undefined4 *)(iVar8 + 0x34) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar18;
  *(undefined4 *)(iVar8 + 0x34) = uVar19;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x30) = (int)uVar22;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar22 >> 0x20);
  local_7c = s_cState_Home_00205cc4;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,7,(int *)&local_80);
  iVar8 = puVar4[6];
  uVar17 = *(undefined4 *)(iVar11 + 0x90);
  uVar18 = *(undefined4 *)(iVar11 + 0x94);
  uVar19 = *(undefined4 *)(iVar11 + 0x98);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar11 + 0x8c);
  *(undefined4 *)(iVar8 + 0x3c) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar18;
  *(undefined4 *)(iVar8 + 0x3c) = uVar19;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x38) = (int)uVar22;
  *(int *)(iVar8 + 0x3c) = (int)((ulonglong)uVar22 >> 0x20);
  local_7c = s_cState_Die_00205cd0;
  local_80 = uVar2;
  func_0010BEC4((int)puVar4,8,(int *)&local_80);
  uVar17 = *(undefined4 *)(iVar11 + 0xa8);
  iVar8 = puVar4[6];
  uVar18 = *(undefined4 *)(iVar11 + 0xa0);
  uVar19 = *(undefined4 *)(iVar11 + 0xa4);
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar11 + 0x9c);
  *(undefined4 *)(iVar8 + 0x44) = uVar18;
  iVar11 = puVar4[7];
  *(undefined4 *)(iVar11 + 0x40) = uVar19;
  *(undefined4 *)(iVar11 + 0x44) = uVar17;
  iVar11 = puVar4[8];
  *(int *)(iVar11 + 0x40) = (int)uVar22;
  *(int *)(iVar11 + 0x44) = (int)((ulonglong)uVar22 >> 0x20);
  piVar6 = (int *)func_00521028((int)piVar3);
  (**(code **)(*piVar6 + 8))(piVar6);
  func_003529A0(auStack_58,piVar6[1],puVar4 + -0x174);
  local_40 = (uint)(*(short *)(puVar4 + -0x230) != 0);
  func_002C41BC(puVar4 + -0x174,auStack_58,0);
  puVar4[-0xd5] = puVar4[-0xd5] | 0x8000;
  if (*(short *)((int)local_28 + 0x2a) == 0) {
    func_0065D3A8(puVar4,4);
  }
  else {
    func_0065D3A8(puVar4,0);
  }
  func_004F8864((int)piVar3,DAT_00205cdc,0,DAT_00205ce0);
  func_002AF5FC((int)piVar3,8,-1);
  *(undefined1 *)((int)puVar4 + -0x173) = 9;
  *(undefined1 *)((int)puVar4 + -0x172) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x171) = 0;
  func_002AED68((int)piVar3,8);
  uVar2 = DAT_00205ce4;
  uVar13 = (ushort)DAT_00205ce4;
  func_004FC218((int)piVar3,'\x06',-1,uVar13);
  objStack_90[2] = uVar2;
  pfVar14 = (float *)0xffffffff;
  objStack_90[0] = 0x1e;
  objStack_90[1] = 0;
  func_004FBA18((int)piVar3,7,0xff,-1,0x1e,0,uVar13,DAT_00205cec,DAT_00205ce8);
  func_004FC5EC((int)piVar3,8);
  func_004F5174((int)piVar3,(uint)(*(char *)(puVar4 + 1) != '\0'));
  func_004F5BD8((int)piVar3,(uint *)0x0,(int **)0x0,pfVar14);
  return piVar3;
}

