#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_004C91C8(int *param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F871C(int param_1,undefined4 param_2);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FA890(int param_1);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0055696C(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_004cc64c;
extern int DAT_004cc650;
extern float DAT_004cc654;
extern float DAT_004cc658;
extern float *DAT_004cc65c;
extern undefined4 DAT_004cc660;
extern float DAT_004cc664;
extern int *DAT_004cc668;
extern undefined4 DAT_004cc66c;
extern undefined4 DAT_004cc670;
extern int *DAT_004cc674;
extern int DAT_004cc678;
extern int DAT_004cc67c;
extern int *DAT_004cc680;
extern undefined4 DAT_004cc684;
extern undefined4 DAT_004cc688;
extern int *DAT_004ccc80;
extern int DAT_004ccc84;
extern uint *DAT_004ccc88;
extern undefined4 DAT_004ccc8c;
extern undefined4 *DAT_004ccc90;
extern int *DAT_004ccc94;
extern undefined *DAT_004ccc98;
extern int DAT_004ccc9c;
extern int DAT_004cccac;
extern int *DAT_004ccf74;
extern undefined4 DAT_004ccf78;
extern undefined4 DAT_004ccf7c;
extern char s_cState_AttackEnemy_004ccd10[];
extern char s_cState_AttackPlayerBattle_004ccd64[];
extern char s_cState_AttackPlayer_004cccfc[];
extern char s_cState_ChargeFirePillar_004ccd24[];
extern char s_cState_ChaseGoldBee_004ccf60[];
extern char s_cState_Chase_004ccccc[];
extern char s_cState_Die_004cccc0[];
extern char s_cState_Erase_004ccf50[];
extern char s_cState_Escape_004cccec[];
extern char s_cState_Reaction_004cccb0[];
extern char s_cState_Swarm_004cccdc[];
extern char s_cState_Tree_004ccca0[];
extern char s_cState_TurnFirePillar_004ccd3c[];
extern char s_cState_Wander_004ccd54[];

// USA 004CC35C <- EU 004CC334 (Ghidra, non-matching)
// GLOBAL DAT_004cc64c uint *
// GLOBAL DAT_004cc650 int
// GLOBAL DAT_004cc654 float
// GLOBAL DAT_004cc658 float
// GLOBAL DAT_004cc65c float *
// GLOBAL DAT_004cc660 undefined4
// GLOBAL DAT_004cc664 float
// GLOBAL DAT_004cc668 int *
// GLOBAL DAT_004cc66c undefined4
// GLOBAL DAT_004cc670 undefined4
// GLOBAL DAT_004cc674 int *
// GLOBAL DAT_004cc678 int
// GLOBAL DAT_004cc67c int
// GLOBAL DAT_004cc680 int *
// GLOBAL DAT_004cc684 undefined4
// GLOBAL DAT_004cc688 undefined4
// GLOBAL DAT_004ccc80 int *
// GLOBAL DAT_004ccc84 int
// GLOBAL DAT_004ccc88 uint *
// GLOBAL DAT_004ccc8c undefined4
// GLOBAL DAT_004ccc90 undefined4 *
// GLOBAL DAT_004ccc94 int *
// GLOBAL DAT_004ccc98 undefined *
// GLOBAL DAT_004ccc9c int
// GLOBAL DAT_004cccac int
// GLOBAL DAT_004ccf74 int *
// GLOBAL DAT_004ccf78 undefined4
// GLOBAL DAT_004ccf7c undefined4
// GLOBAL s_cState_AttackEnemy_004ccd10 string
// GLOBAL s_cState_AttackPlayerBattle_004ccd64 string
// GLOBAL s_cState_AttackPlayer_004cccfc string
// GLOBAL s_cState_ChargeFirePillar_004ccd24 string
// GLOBAL s_cState_ChaseGoldBee_004ccf60 string
// GLOBAL s_cState_Chase_004ccccc string
// GLOBAL s_cState_Die_004cccc0 string
// GLOBAL s_cState_Erase_004ccf50 string
// GLOBAL s_cState_Escape_004cccec string
// GLOBAL s_cState_Reaction_004cccb0 string
// GLOBAL s_cState_Swarm_004cccdc string
// GLOBAL s_cState_Tree_004ccca0 string
// GLOBAL s_cState_TurnFirePillar_004ccd3c string
// GLOBAL s_cState_Wander_004ccd54 string

int * func_004CC35C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  uint extraout_r1;
  float fVar13;
  undefined4 uVar14;
  float *pfVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint in_fpscr;
  undefined4 uVar21;
  undefined4 uVar22;
  float fparam_0;
  float fparam_0_00;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x14))
  piVar4 = func_004FD464(param_1,param_2,DAT_004cc64c);
  iVar6 = DAT_004cc650;
  *piVar4 = DAT_004cc650;
  piVar4[200] = iVar6 + 0x8c;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar21 = DAT_004cc66c;
  fparam_0_00 = DAT_004cc664;
  uVar20 = DAT_004cc660;
  pfVar15 = DAT_004cc65c;
  fparam_0 = DAT_004cc658;
  puVar5[9] = ALBW_AS_U32(ALBW_AS_F32(param_2[2]) + DAT_004cc654);
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)((int)puVar5 + 0x29) = 0;
  puVar5[0xb] = ALBW_AS_U32(fparam_0);
  puVar5[0xc] = ALBW_AS_U32(fparam_0);
  puVar5[0xd] = ALBW_AS_U32(fparam_0);
  *(undefined1 *)(puVar5 + 0xe) = 0;
  fVar10 = *pfVar15;
  fVar13 = pfVar15[1];
  piVar16 = puVar5 + -0x22f;
  pfVar15 = (float *)(puVar5 + 0x11);
  puVar5[0x10] = piVar16;
  *pfVar15 = fVar10;
  puVar5[0x12] = ALBW_AS_U32(fVar13);
  puVar5[0xf] = uVar20;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = ALBW_AS_U32(fparam_0_00);
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = ALBW_AS_U32(fparam_0_00);
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  *(undefined1 *)((int)puVar5 + 0x69) = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  *(undefined1 *)(puVar5 + 0x1f) = 0;
  puVar5[0x20] = ALBW_AS_U32(fparam_0);
  puVar5[0x21] = ALBW_AS_U32(fparam_0);
  puVar5[0x22] = ALBW_AS_U32(fparam_0);
  puVar5[0x24] = 0x46;
  puVar5[0x23] = 0;
  puVar5[0x25] = ALBW_AS_U32(fparam_0_00);
  puVar5[0x26] = 0;
  puVar5[0x28] = 0x82;
  puVar5[0x27] = 0;
  puVar5[0x29] = ALBW_AS_U32(fparam_0_00);
  piVar4 = DAT_004cc668;
  puVar5[0x2b] = 0;
  *(bool *)(puVar5 + 0x2f) = *(char *)(*piVar4 + 0x18) == '\a' || *(char *)(*piVar4 + 0x18) == '%';
  uVar22 = DAT_004cc670;
  puVar5[0x32] = uVar21;
  puVar5[0x33] = uVar22;
  piVar4 = DAT_004cc674;
  puVar5[0x31] = 0;
  iVar6 = func_0055696C(*piVar4,0x21);
  *(bool *)((int)puVar5 + 0xd2) = iVar6 != 0;
  *(undefined1 *)((int)puVar5 + 0xd3) = 0;
  *(undefined1 *)(puVar5 + 0x35) = 0;
  *(undefined1 *)((int)puVar5 + 0xd5) = 10;
  local_48 = puVar5 + 0x36;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = ALBW_AS_U32(fparam_0_00);
  iVar6 = DAT_004cc678;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3c] = 0;
  uVar11 = *(undefined4 *)(iVar6 + 0x10c);
  uVar14 = *(undefined4 *)(iVar6 + 0x110);
  puVar5[0x3b] = uVar20;
  puVar5[0x3d] = uVar11;
  puVar5[0x3e] = uVar14;
  puVar5[0x40] = 0;
  uVar11 = *(undefined4 *)(iVar6 + 0x10c);
  uVar14 = *(undefined4 *)(iVar6 + 0x110);
  puVar5[0x3f] = uVar20;
  puVar5[0x41] = uVar11;
  puVar5[0x42] = uVar14;
  puVar5[0x44] = uVar21;
  puVar5[0x45] = uVar22;
  puVar5[0x43] = 0;
  puVar5[-0x134] = puVar5 + 0xf;
  puVar5[-0x13a] = puVar5[9];
  func_004FB344((int)piVar16,2);
  iVar8 = DAT_004cc67c;
  uVar17 = 0;
  do {
    func_004FACA4((int)piVar16,uVar17,(int *)(iVar8 + uVar17 * 8));
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 2);
  func_004FB468((int)piVar16);
  puVar7 = (uint *)func_0058A7D4();
  uVar17 = func_00111A64(puVar7);
  fVar10 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar17 * 0x3c >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
  func_004FB0A4((int)piVar16,fVar10);
  func_004FB30C((int)piVar16,1);
  func_004FAC70((int)piVar16,0,DAT_004cc680);
  func_004FB408((int)piVar16);
  func_004FB4C4((int)piVar16,fparam_0);
  func_004F5BD8((int)piVar16,(uint *)0x0,(int **)0x0,pfVar15);
  uVar20 = DAT_004cc688;
  puVar5[-0x143] = DAT_004cc684;
  puVar5[-0x142] = uVar20;
  uVar2 = *(ushort *)((int)param_2 + 0x2a);
  *(char *)(puVar5 + 10) = (char)uVar2;
  if ((uVar2 & 0xff) == 0) {
    func_004FB070((int)piVar16,fparam_0);
  }
  else if ((uVar2 & 0xff) == 1) {
    func_004FB070((int)piVar16,fparam_0_00);
    *(undefined1 *)(puVar5 + 0x13) = 1;
  }
  uVar20 = DAT_004ccc8c;
  puVar7 = DAT_004ccc88;
  local_3c = puVar5 + 0x11;
  piVar4 = *(int **)(DAT_004ccc84 + *DAT_004ccc80);
  if (*(char *)(puVar5 + 0x2f) != '\0') {
    for (piVar18 = *(int **)(*DAT_004ccc80 + 0x3dbc0); piVar18 != piVar4; piVar18 = piVar18 + 1) {
      puVar19 = (undefined4 *)*piVar18;
      if (((*puVar7 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_004ccc88), iVar8 != 0)) {
        *DAT_004ccc90 = uVar20;
      }
      if ((puVar19 == (undefined4 *)0x0) ||
         (iVar8 = (**(code **)*puVar19)(puVar19,DAT_004ccc90), iVar8 == 0)) {
        puVar19 = (undefined4 *)0x0;
      }
      if ((puVar19 != (undefined4 *)0x0) &&
         (iVar8 = func_00588BE4(*piVar18), iVar8 == *DAT_004ccc94)) {
        if (*(char *)(puVar19[0x22f] + 1) != '\0') {
          *(undefined1 *)((int)puVar5 + 0xd3) = 1;
        }
        break;
      }
    }
  }
  puVar5[0x3a] = puVar5[-0x146];
  puVar5[-200] = puVar5[-200] & 0xffffffdb;
  func_004FD038((int)(puVar5 + -0xc5),0);
  puVar5[-200] = puVar5[-200] & 0xffffff7f;
  func_004FAD90((int)piVar16);
  puVar5[5] = piVar16;
  *(undefined1 *)((int)puVar5 + 6) = 0xe;
  iVar8 = func_0010BA78(0xe0);
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 0xe;
  puVar19 = (undefined4 *)(iVar8 + -8);
  do {
    uVar20 = *(undefined4 *)(DAT_004cc678 + 0x108);
    iVar12 = iVar12 + -1;
    puVar19[2] = *(undefined4 *)(DAT_004cc678 + 0x104);
    puVar19[3] = uVar20;
    uVar20 = *(undefined4 *)(iVar6 + 0x108);
    puVar19[4] = *(undefined4 *)(iVar6 + 0x104);
    puVar19[5] = uVar20;
    puVar19 = puVar19 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar17 = (uint)bVar1;
  puVar19 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar5[8] = puVar19;
  if (uVar17 != 0) {
    puVar9 = puVar19 + -2;
    if ((bVar1 & 1) != 0) {
      uVar20 = *(undefined4 *)(DAT_004cc678 + 0x20);
      *puVar19 = *(undefined4 *)(DAT_004cc678 + 0x1c);
      puVar19[1] = uVar20;
      puVar9 = puVar19;
    }
    iVar8 = DAT_004cc678;
    for (iVar6 = (int)uVar17 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar20 = *(undefined4 *)(iVar8 + 0x20);
      puVar9[2] = *(undefined4 *)(iVar8 + 0x1c);
      puVar9[3] = uVar20;
      uVar20 = *(undefined4 *)(iVar8 + 0x20);
      puVar9[4] = *(undefined4 *)(iVar8 + 0x1c);
      puVar9[5] = uVar20;
      puVar9 = puVar9 + 4;
    }
  }
  puVar19 = (undefined4 *)func_0010CEE0(0x200,(int *)0x0,4);
  iVar6 = 0;
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = 0x24;
    puVar19[1] = 0xe;
    iVar6 = func_00100118((int)(puVar19 + 2),DAT_004ccc98,0x24,0xe);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 0xe;
  }
  iVar6 = DAT_004ccc9c;
  puVar5[-0x15a] = puVar5;
  iVar8 = DAT_004cccac;
  *(undefined2 *)(iVar6 + (int)piVar16) = 0xe;
  local_4c = s_cState_Tree_004ccca0;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,0,&local_50);
  iVar6 = DAT_004cc678;
  puVar19 = (undefined4 *)puVar5[6];
  uVar20 = *(undefined4 *)(DAT_004cc678 + 0x14);
  uVar22 = *(undefined4 *)(DAT_004cc678 + 0x10);
  uVar21 = *(undefined4 *)(DAT_004cc678 + 0x18);
  uVar23 = *(undefined8 *)(DAT_004cc678 + 0x1c);
  *puVar19 = *(undefined4 *)(DAT_004cc678 + 0xc);
  puVar19[1] = uVar22;
  puVar19 = (undefined4 *)puVar5[7];
  *puVar19 = uVar20;
  puVar19[1] = uVar21;
  puVar19 = (undefined4 *)puVar5[8];
  *puVar19 = (int)uVar23;
  puVar19[1] = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Reaction_004cccb0;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,1,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0x28);
  uVar21 = *(undefined4 *)(iVar6 + 0x2c);
  uVar22 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(iVar12 + 0xc) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 8) = uVar21;
  *(undefined4 *)(iVar12 + 0xc) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 8) = (int)uVar23;
  *(int *)(iVar12 + 0xc) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Die_004cccc0;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,2,&local_50);
  iVar12 = puVar5[6];
  uVar21 = *(undefined4 *)(iVar6 + 0x40);
  uVar22 = *(undefined4 *)(iVar6 + 0x38);
  uVar20 = *(undefined4 *)(iVar6 + 0x3c);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar6 + 0x34);
  *(undefined4 *)(iVar12 + 0x14) = uVar22;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar20;
  *(undefined4 *)(iVar12 + 0x14) = uVar21;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x10) = (int)uVar23;
  *(int *)(iVar12 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Chase_004ccccc;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,3,&local_50);
  iVar12 = puVar5[6];
  uVar21 = *(undefined4 *)(iVar6 + 0x50);
  uVar22 = *(undefined4 *)(iVar6 + 0x48);
  uVar20 = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar12 + 0x1c) = uVar22;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar20;
  *(undefined4 *)(iVar12 + 0x1c) = uVar21;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x18) = (int)uVar23;
  *(int *)(iVar12 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Swarm_004cccdc;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,4,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0x58);
  uVar21 = *(undefined4 *)(iVar6 + 0x5c);
  uVar22 = *(undefined4 *)(iVar6 + 0x60);
  *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(iVar12 + 0x24) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x20) = uVar21;
  *(undefined4 *)(iVar12 + 0x24) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x20) = (int)uVar23;
  *(int *)(iVar12 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Escape_004cccec;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,5,&local_50);
  iVar12 = puVar5[6];
  uVar22 = *(undefined4 *)(iVar6 + 0x68);
  uVar20 = *(undefined4 *)(iVar6 + 0x6c);
  uVar21 = *(undefined4 *)(iVar6 + 0x70);
  *(undefined4 *)(iVar12 + 0x28) = *(undefined4 *)(iVar6 + 100);
  *(undefined4 *)(iVar12 + 0x2c) = uVar22;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x28) = uVar20;
  *(undefined4 *)(iVar12 + 0x2c) = uVar21;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x28) = (int)uVar23;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_AttackPlayer_004cccfc;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,6,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0x78);
  uVar21 = *(undefined4 *)(iVar6 + 0x7c);
  uVar22 = *(undefined4 *)(iVar6 + 0x80);
  *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar6 + 0x74);
  *(undefined4 *)(iVar12 + 0x34) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x30) = uVar21;
  *(undefined4 *)(iVar12 + 0x34) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x30) = (int)uVar23;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_AttackEnemy_004ccd10;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,7,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0x88);
  uVar21 = *(undefined4 *)(iVar6 + 0x8c);
  uVar22 = *(undefined4 *)(iVar6 + 0x90);
  *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar6 + 0x84);
  *(undefined4 *)(iVar12 + 0x3c) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x38) = uVar21;
  *(undefined4 *)(iVar12 + 0x3c) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x38) = (int)uVar23;
  *(int *)(iVar12 + 0x3c) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_ChargeFirePillar_004ccd24;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,8,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0x98);
  uVar21 = *(undefined4 *)(iVar6 + 0x9c);
  uVar22 = *(undefined4 *)(iVar6 + 0xa0);
  *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar6 + 0x94);
  *(undefined4 *)(iVar12 + 0x44) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x40) = uVar21;
  *(undefined4 *)(iVar12 + 0x44) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x40) = (int)uVar23;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_TurnFirePillar_004ccd3c;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,9,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0xa8);
  uVar21 = *(undefined4 *)(iVar6 + 0xac);
  uVar22 = *(undefined4 *)(iVar6 + 0xb0);
  *(undefined4 *)(iVar12 + 0x48) = *(undefined4 *)(iVar6 + 0xa4);
  *(undefined4 *)(iVar12 + 0x4c) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x48) = uVar21;
  *(undefined4 *)(iVar12 + 0x4c) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x48) = (int)uVar23;
  *(int *)(iVar12 + 0x4c) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Wander_004ccd54;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,10,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0xb8);
  uVar21 = *(undefined4 *)(iVar6 + 0xbc);
  uVar22 = *(undefined4 *)(iVar6 + 0xc0);
  *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar6 + 0xb4);
  *(undefined4 *)(iVar12 + 0x54) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x50) = uVar21;
  *(undefined4 *)(iVar12 + 0x54) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x50) = (int)uVar23;
  *(int *)(iVar12 + 0x54) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_AttackPlayerBattle_004ccd64;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,0xb,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 200);
  uVar21 = *(undefined4 *)(iVar6 + 0xcc);
  uVar22 = *(undefined4 *)(iVar6 + 0xd0);
  *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)(iVar6 + 0xc4);
  *(undefined4 *)(iVar12 + 0x5c) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x58) = uVar21;
  *(undefined4 *)(iVar12 + 0x5c) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x58) = (int)uVar23;
  *(int *)(iVar12 + 0x5c) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_Erase_004ccf50;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,0xc,&local_50);
  iVar12 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0xd8);
  uVar21 = *(undefined4 *)(iVar6 + 0xdc);
  uVar22 = *(undefined4 *)(iVar6 + 0xe0);
  *(undefined4 *)(iVar12 + 0x60) = *(undefined4 *)(iVar6 + 0xd4);
  *(undefined4 *)(iVar12 + 100) = uVar20;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x60) = uVar21;
  *(undefined4 *)(iVar12 + 100) = uVar22;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x60) = (int)uVar23;
  *(int *)(iVar12 + 100) = (int)((ulonglong)uVar23 >> 0x20);
  local_4c = s_cState_ChaseGoldBee_004ccf60;
  local_50 = iVar8;
  func_0010BEC4((int)puVar5,0xd,&local_50);
  iVar8 = puVar5[6];
  uVar20 = *(undefined4 *)(iVar6 + 0xe8);
  uVar21 = *(undefined4 *)(iVar6 + 0xec);
  uVar22 = *(undefined4 *)(iVar6 + 0xf0);
  *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar6 + 0xe4);
  *(undefined4 *)(iVar8 + 0x6c) = uVar20;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x68) = uVar21;
  *(undefined4 *)(iVar8 + 0x6c) = uVar22;
  iVar8 = puVar5[8];
  *(int *)(iVar8 + 0x68) = (int)uVar23;
  *(int *)(iVar8 + 0x6c) = (int)((ulonglong)uVar23 >> 0x20);
  bVar3 = func_00584B94(*DAT_004ccf74,0x6b);
  uVar17 = extraout_r1;
  if (!bVar3) {
    uVar17 = (uint)(ushort)param_2[0xb];
  }
  if ((bVar3 || uVar17 != 0) || (*(char *)(local_3c + 0x1e) != '\0')) {
    func_004C91C8(piVar16,(ushort)param_2[0xb] & 0xff);
  }
  else {
    func_0066A284(puVar5,0xc);
  }
  uVar17 = puVar5[-200];
  puVar5[-200] = uVar17 | 0x8000;
  if (*(char *)(puVar5 + 1) == '\0' || *(char *)(puVar5 + 1) == '\x05') {
    uVar17 = uVar17 & 0xffffffef | 0x8000;
  }
  else {
    uVar17 = uVar17 | 0x8010;
  }
  puVar5[-200] = uVar17;
  func_004FA890((int)piVar16);
  *(undefined1 *)((int)puVar5 + -0x6a) = 1;
  uVar20 = DAT_004ccf78;
  local_48[1] = 9;
  local_48[2] = uVar20;
  *local_48 = 0;
  uVar20 = DAT_004ccf7c;
  puVar5[-0x115] = DAT_004ccf7c;
  puVar5[-0x11b] = uVar20;
  func_004ECF6C((int)piVar16);
  uVar20 = *(undefined4 *)(iVar6 + 0xf4);
  uVar21 = *(undefined4 *)(iVar6 + 0xf8);
  puVar5[0x3c] = piVar16;
  puVar5[0x3d] = uVar20;
  puVar5[0x3e] = uVar21;
  func_004F871C((int)piVar16,puVar5 + 0x3b);
  uVar20 = *(undefined4 *)(DAT_004cc678 + 0xfc);
  uVar21 = *(undefined4 *)(DAT_004cc678 + 0x100);
  puVar5[0x40] = piVar16;
  puVar5[0x41] = uVar20;
  puVar5[0x42] = uVar21;
  puVar5[-0x11e] = puVar5 + 0x3f;
  func_004F87F8((int)piVar16,2);
  puVar5[-200] = puVar5[-200] | 0x20000000;
  *(uint *)(puVar5[-0x123] + 0x2c) = *(uint *)(puVar5[-0x123] + 0x2c) | 0x200000;
  return piVar16;
}

