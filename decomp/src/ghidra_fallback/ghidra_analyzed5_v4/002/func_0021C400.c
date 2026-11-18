#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0021A748(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0021c804;
extern int DAT_0021c808;
extern undefined *DAT_0021c80c;
extern undefined *DAT_0021c810;
extern undefined4 DAT_0021c814;
extern undefined4 DAT_0021c818;
extern int DAT_0021c81c;
extern undefined4 DAT_0021c820;
extern int DAT_0021c824;
extern int DAT_0021c828;
extern int DAT_0021c82c;
extern undefined *DAT_0021c830;
extern int DAT_0021c834;
extern int DAT_0021c844;
extern float DAT_0021cbf0;
extern undefined4 DAT_0021cbf4;
extern undefined4 DAT_0021cbf8;
extern float DAT_0021cbfc;
extern undefined4 DAT_0021cc00;
extern int *DAT_0021cc04;
extern int *DAT_0021cc08;
extern char s_Moldworm1_0021cc0c[];
extern char s_cState_AttackMove_0021c85c[];
extern char s_cState_Damage_0021c880[];
extern char s_cState_Die_0021cbe4[];
extern char s_cState_NormalMove_0021c848[];
extern char s_cState_Reaction_0021c870[];
extern char s_cState_Wait_0021c838[];

// USA 0021C400 <- EU 0021C400 (Ghidra, non-matching)
// GLOBAL DAT_0021c804 uint *
// GLOBAL DAT_0021c808 int
// GLOBAL DAT_0021c80c undefined *
// GLOBAL DAT_0021c810 undefined *
// GLOBAL DAT_0021c814 undefined4
// GLOBAL DAT_0021c818 undefined4
// GLOBAL DAT_0021c81c int
// GLOBAL DAT_0021c820 undefined4
// GLOBAL DAT_0021c824 int
// GLOBAL DAT_0021c828 int
// GLOBAL DAT_0021c82c int
// GLOBAL DAT_0021c830 undefined *
// GLOBAL DAT_0021c834 int
// GLOBAL DAT_0021c844 int
// GLOBAL DAT_0021cbf0 float
// GLOBAL DAT_0021cbf4 undefined4
// GLOBAL DAT_0021cbf8 undefined4
// GLOBAL DAT_0021cbfc float
// GLOBAL DAT_0021cc00 undefined4
// GLOBAL DAT_0021cc04 int *
// GLOBAL DAT_0021cc08 int *
// GLOBAL s_Moldworm1_0021cc0c string
// GLOBAL s_cState_AttackMove_0021c85c string
// GLOBAL s_cState_Damage_0021c880 string
// GLOBAL s_cState_Die_0021cbe4 string
// GLOBAL s_cState_NormalMove_0021c848 string
// GLOBAL s_cState_Reaction_0021c870 string
// GLOBAL s_cState_Wait_0021c838 string

int func_0021C400(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  piVar3 = func_004FD464(param_1,param_2,DAT_0021c804);
  iVar5 = DAT_0021c808;
  *piVar3 = DAT_0021c808;
  piVar3[200] = iVar5 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  uVar14 = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  iVar5 = func_00100118((int)(puVar4 + 10),DAT_0021c80c,0x30,4);
  iVar6 = func_00100118(iVar5 + 0xc0,DAT_0021c810,0x18,100);
  uVar20 = DAT_0021c818;
  iVar13 = iVar6 + -0x9a4;
  *(undefined4 *)(iVar6 + 0x96c) = *(undefined4 *)(iVar6 + -0x5d4);
  *(undefined4 *)(iVar6 + 0x970) = *(undefined4 *)(iVar6 + -0x5d0);
  *(undefined4 *)(iVar6 + 0x974) = *(undefined4 *)(iVar6 + -0x5cc);
  uVar17 = DAT_0021c814;
  pfVar12 = *(float **)(iVar6 + -0x5cc);
  *(undefined4 *)(iVar6 + 0x978) = *(undefined4 *)(iVar6 + -0x5d4);
  *(undefined4 *)(iVar6 + 0x97c) = *(undefined4 *)(iVar6 + -0x5d0);
  *(float **)(iVar6 + 0x980) = pfVar12;
  *(undefined4 *)(iVar6 + 0x984) = uVar20;
  *(undefined4 *)(iVar6 + 0x988) = uVar17;
  *(undefined4 *)(iVar6 + 0x98c) = uVar17;
  *(undefined4 *)(iVar6 + 0x990) = uVar17;
  *(undefined4 *)(iVar6 + 0x994) = uVar17;
  *(undefined4 *)(iVar6 + 0x998) = uVar17;
  *(undefined4 *)(iVar6 + 0x99c) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x9a0) = 0;
  uVar20 = DAT_0021c820;
  uVar22 = CONCAT44(uVar17,DAT_0021c820);
  *(undefined4 *)(iVar6 + 0x9a4) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x9a8) = 0;
  *(undefined4 *)(DAT_0021c81c + iVar13) = 0;
  *(undefined4 *)(iVar6 + 0x9b0) = 0;
  *(undefined4 *)(iVar6 + 0x9b4) = 0;
  *(undefined4 *)(iVar6 + 0x9b8) = uVar20;
  *(undefined4 *)(iVar6 + 0x9bc) = 0;
  *(undefined4 *)(iVar6 + 0x9c0) = 0;
  *(undefined4 *)(iVar6 + 0x9c4) = uVar20;
  iVar5 = DAT_0021c824;
  *(undefined4 *)(DAT_0021c824 + iVar13) = 0;
  *(undefined1 *)(iVar6 + 0x9cc) = 0;
  *(undefined1 *)(iVar6 + 0x9cd) = 0;
  *(undefined1 *)(iVar6 + 0x9ce) = 0;
  *(undefined1 *)(iVar6 + 0x9cf) = 0;
  *(undefined1 *)(iVar6 + 0x9d0) = 0;
  *(undefined1 *)(iVar6 + 0x9d1) = 0;
  *(undefined1 *)(iVar6 + 0x9d2) = 0;
  *(undefined4 *)(iVar5 + 0xc + iVar13) = 0;
  func_004FB344(iVar13,4);
  iVar5 = DAT_0021c828;
  do {
    func_004FACA4(iVar13,uVar14,(int *)(iVar5 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 4);
  func_004FB468(iVar13);
  func_004F5BD8(iVar13,(uint *)0x0,(int **)0x0,pfVar12);
  puVar16 = (undefined4 *)(iVar6 + -0xe8);
  *(int *)(iVar6 + -0xd4) = iVar13;
  *(undefined1 *)(iVar6 + -0xe2) = 6;
  iVar7 = func_0010BA78(0x60);
  iVar5 = DAT_0021c82c;
  *(int *)(iVar6 + -0xd0) = iVar7;
  *(uint *)(iVar6 + -0xcc) = iVar7 + (uint)*(byte *)(iVar6 + -0xe2) * 8;
  iVar9 = 6;
  puVar4 = (undefined4 *)(iVar7 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar5 + 0x78);
    iVar9 = iVar9 + -1;
    puVar4[2] = *(undefined4 *)(iVar5 + 0x74);
    puVar4[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar5 + 0x78);
    puVar4[4] = *(undefined4 *)(iVar5 + 0x74);
    puVar4[5] = uVar17;
    puVar4 = puVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar6 + -0xe2);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  *(undefined4 **)(iVar6 + -200) = puVar4;
  if (uVar14 != 0) {
    puVar10 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar5 + 0x20);
      *puVar4 = *(undefined4 *)(iVar5 + 0x1c);
      puVar4[1] = uVar17;
      puVar10 = puVar4;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar17 = *(undefined4 *)(iVar5 + 0x20);
      puVar10[2] = *(undefined4 *)(iVar5 + 0x1c);
      puVar10[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar5 + 0x20);
      puVar10[4] = *(undefined4 *)(iVar5 + 0x1c);
      puVar10[5] = uVar17;
      puVar10 = puVar10 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar7 = func_00100118((int)(puVar4 + 2),DAT_0021c830,0x24,6);
  }
  if (iVar7 != 0) {
    *(undefined4 *)(iVar6 + -0xe0) = 6;
    *(int *)(iVar6 + -0xdc) = iVar7;
  }
  iVar7 = DAT_0021c834;
  *(undefined4 **)(iVar6 + -0x650) = puVar16;
  *(undefined2 *)(iVar7 + iVar13) = 6;
  iVar7 = DAT_0021c844;
  local_54 = s_cState_Wait_0021c838;
  local_58 = DAT_0021c844;
  func_0010BEC4((int)puVar16,0,&local_58);
  puVar4 = *(undefined4 **)(iVar6 + -0xd0);
  uVar17 = *(undefined4 *)(iVar5 + 0x14);
  uVar20 = *(undefined4 *)(iVar5 + 0x10);
  uVar21 = *(undefined4 *)(iVar5 + 0x18);
  uVar23 = *(undefined8 *)(iVar5 + 0x1c);
  *puVar4 = *(undefined4 *)(iVar5 + 0xc);
  puVar4[1] = uVar20;
  puVar4 = *(undefined4 **)(iVar6 + -0xcc);
  *puVar4 = uVar17;
  puVar4[1] = uVar21;
  puVar4 = *(undefined4 **)(iVar6 + -200);
  *puVar4 = (int)uVar23;
  puVar4[1] = (int)((ulonglong)uVar23 >> 0x20);
  local_54 = s_cState_NormalMove_0021c848;
  local_58 = iVar7;
  func_0010BEC4((int)puVar16,1,&local_58);
  iVar9 = *(int *)(iVar6 + -0xd0);
  uVar21 = *(undefined4 *)(iVar5 + 0x28);
  uVar17 = *(undefined4 *)(iVar5 + 0x2c);
  uVar20 = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar9 + 0xc) = uVar21;
  iVar9 = *(int *)(iVar6 + -0xcc);
  *(undefined4 *)(iVar9 + 8) = uVar17;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  iVar9 = *(int *)(iVar6 + -200);
  *(int *)(iVar9 + 8) = (int)uVar23;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar23 >> 0x20);
  local_54 = s_cState_AttackMove_0021c85c;
  local_58 = iVar7;
  func_0010BEC4((int)puVar16,2,&local_58);
  iVar9 = *(int *)(iVar6 + -0xd0);
  uVar21 = *(undefined4 *)(iVar5 + 0x38);
  uVar17 = *(undefined4 *)(iVar5 + 0x3c);
  uVar20 = *(undefined4 *)(iVar5 + 0x40);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar5 + 0x34);
  *(undefined4 *)(iVar9 + 0x14) = uVar21;
  iVar9 = *(int *)(iVar6 + -0xcc);
  *(undefined4 *)(iVar9 + 0x10) = uVar17;
  *(undefined4 *)(iVar9 + 0x14) = uVar20;
  iVar9 = *(int *)(iVar6 + -200);
  *(int *)(iVar9 + 0x10) = (int)uVar23;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  local_54 = s_cState_Reaction_0021c870;
  local_58 = iVar7;
  func_0010BEC4((int)puVar16,3,&local_58);
  iVar9 = *(int *)(iVar6 + -0xd0);
  uVar21 = *(undefined4 *)(iVar5 + 0x48);
  uVar17 = *(undefined4 *)(iVar5 + 0x4c);
  uVar20 = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar9 + 0x1c) = uVar21;
  iVar9 = *(int *)(iVar6 + -0xcc);
  *(undefined4 *)(iVar9 + 0x18) = uVar17;
  *(undefined4 *)(iVar9 + 0x1c) = uVar20;
  iVar9 = *(int *)(iVar6 + -200);
  *(int *)(iVar9 + 0x18) = (int)uVar23;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  local_54 = s_cState_Damage_0021c880;
  local_58 = iVar7;
  func_0010BEC4((int)puVar16,4,&local_58);
  iVar9 = *(int *)(iVar6 + -0xd0);
  uVar21 = *(undefined4 *)(iVar5 + 0x58);
  uVar17 = *(undefined4 *)(iVar5 + 0x5c);
  uVar20 = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(iVar9 + 0x24) = uVar21;
  iVar9 = *(int *)(iVar6 + -0xcc);
  *(undefined4 *)(iVar9 + 0x20) = uVar17;
  *(undefined4 *)(iVar9 + 0x24) = uVar20;
  iVar9 = *(int *)(iVar6 + -200);
  *(int *)(iVar9 + 0x20) = (int)uVar23;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  local_54 = s_cState_Die_0021cbe4;
  local_58 = iVar7;
  func_0010BEC4((int)puVar16,5,&local_58);
  uVar20 = *(undefined4 *)(iVar5 + 0x6c);
  uVar17 = *(undefined4 *)(iVar5 + 0x70);
  piVar3 = *(int **)(iVar6 + -0xd0);
  iVar9 = *(int *)(iVar5 + 0x68);
  piVar3[10] = *(int *)(iVar5 + 100);
  piVar3[0xb] = iVar9;
  fVar2 = DAT_0021cbf0;
  iVar5 = *(int *)(iVar6 + -0xcc);
  *(undefined4 *)(iVar5 + 0x28) = uVar20;
  *(undefined4 *)(iVar5 + 0x2c) = uVar17;
  iVar5 = *(int *)(iVar6 + -200);
  *(int *)(iVar5 + 0x28) = (int)uVar23;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  uVar11 = *(uint *)(iVar6 + -0x994);
  *(undefined4 *)(iVar6 + 0x960) = *(undefined4 *)(iVar6 + -0x99c);
  *(undefined4 *)(iVar6 + 0x964) = *(undefined4 *)(iVar6 + -0x998);
  *(uint *)(iVar6 + 0x968) = uVar11;
  fVar18 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar18 = fVar18 * fVar2;
  *(float *)(iVar6 + 0x98c) = fVar18;
  fVar19 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
  uVar14 = in_fpscr & 0xfffffff | (uint)(fVar18 == fVar19) << 0x1e;
  if (SUB41(uVar14 >> 0x1e,0)) {
    *(undefined4 *)(iVar6 + 0x98c) = DAT_0021cbf4;
  }
  fVar18 = (float)VectorSignedToFloat((int)(short)param_2[0xb],(byte)(uVar14 >> 0x15) & 3);
  fVar18 = fVar18 * fVar2;
  *(float *)(iVar6 + 0x990) = fVar18;
  fVar2 = DAT_0021cbfc;
  uVar14 = in_fpscr & 0xfffffff | (uint)(fVar18 == fVar19) << 0x1e;
  if (SUB41(uVar14 >> 0x1e,0)) {
    *(undefined4 *)(iVar6 + 0x990) = DAT_0021cbf8;
  }
  fVar18 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2e),
                                      (byte)(uVar14 >> 0x15) & 3);
  if ((fVar19 <= fVar18) && (fVar19 = fVar18, fVar2 < fVar18)) {
    fVar19 = fVar2;
  }
  uVar17 = VectorFloatToUnsigned(fVar19,3);
  *(char *)(iVar6 + 0x9cc) = (char)uVar17;
  *(undefined1 *)(iVar6 + -0x227) = 3;
  *(undefined1 *)(iVar6 + -0x226) = 0xff;
  *(undefined1 *)(iVar6 + -0x225) = 0;
  *(uint *)(iVar6 + -0x408) = *(uint *)(iVar6 + -0x408) | 0x800;
  func_004F87F8(iVar13,1);
  func_0021A748(iVar13);
  uVar17 = DAT_0021cc00;
  uVar20 = (undefined4)((ulonglong)uVar22 >> 0x20);
  *(undefined4 *)(iVar6 + -0x558) = uVar20;
  *(undefined4 *)(iVar6 + -0x554) = uVar17;
  *(undefined4 *)(iVar6 + -0x550) = uVar20;
  *(undefined4 *)(iVar6 + -0x540) = uVar20;
  *(undefined4 *)(iVar6 + -0x53c) = uVar17;
  *(undefined4 *)(iVar6 + -0x538) = uVar20;
  uVar14 = param_2[0xa7];
  *(uint *)(iVar6 + 0x99c) = uVar14;
  if (-1 < (int)uVar14) {
    iVar5 = *DAT_0021cc04;
    iVar9 = func_00581B9C(iVar5);
    if ((iVar9 == 1) && (puVar8 = (uint *)func_00582250(iVar5), uVar14 < *puVar8)) {
      iVar5 = *(int *)(puVar8[2] + uVar14 * 4);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar6 + 0x9a0) = *(undefined4 *)(iVar5 + 0x20);
      }
    }
    else {
      iVar5 = 0;
    }
    iVar9 = 0;
    do {
      puVar8 = (uint *)func_0058A7D4();
      uVar15 = *(uint *)(iVar6 + 0x9a0);
      uVar14 = func_00111A64(puVar8);
      uVar14 = (uint)((ulonglong)uVar15 * (ulonglong)uVar14 >> 0x20);
      if (*(uint *)(iVar6 + 0x9a4) != uVar14) {
        if (iVar9 < 100) goto LAB_0021cad0;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 100);
    uVar14 = uVar14 + 1;
    if (*(int *)(iVar6 + 0x9a0) <= (int)uVar14) {
      uVar14 = 0;
    }
LAB_0021cad0:
    *(uint *)(iVar6 + 0x9a4) = uVar14;
    iVar9 = *(int *)(iVar5 + 0x28);
    if (iVar9 != 0) {
      uVar11 = *(uint *)(iVar5 + 0x20);
    }
    if ((iVar9 != 0 && uVar14 < uVar11) && (iVar5 = *(int *)(iVar9 + uVar14 * 4), iVar5 != 0)) {
      uVar17 = *(undefined4 *)(iVar5 + 0x1c);
      uVar20 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar6 + -0x63c) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)(iVar6 + -0x638) = uVar17;
      *(undefined4 *)(iVar6 + -0x634) = uVar20;
      uVar20 = *(undefined4 *)(iVar5 + 0x18);
      piVar3 = *(int **)(iVar5 + 0x1c);
      uVar17 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar6 + -0x5cc) = uVar17;
      *(undefined4 *)(iVar6 + -0x5d4) = uVar20;
      *(int **)(iVar6 + -0x5d0) = piVar3;
      *(undefined4 *)(iVar6 + 0x968) = uVar17;
      *(undefined4 *)(iVar6 + 0x960) = *(undefined4 *)(iVar6 + -0x5d4);
      *(undefined4 *)(iVar6 + 0x964) = *(undefined4 *)(iVar6 + -0x5d0);
      *(undefined4 *)(iVar6 + 0x964) = *(undefined4 *)(iVar6 + -0x998);
      *(undefined1 *)(iVar6 + 0x9ce) = 1;
    }
  }
  iVar5 = func_00588BE4(iVar13);
  if (iVar5 == *DAT_0021cc08) {
    *(undefined2 *)(*(int *)(iVar6 + -0x574) + 0x28) = 0xa0;
    func_004FB30C(iVar13,1);
    local_4c = s_Moldworm1_0021cc0c;
    local_50 = iVar7;
    func_004FAC70(iVar13,0,&local_50);
    func_004FB408(iVar13);
    uVar17 = 0;
    func_004FAB60(iVar13,0,0);
    func_004FB070(iVar13,ALBW_AS_F32(((ulonglong)uVar22 >> 0x20)));
    func_004FB4C4(iVar13,ALBW_AS_F32(uVar22));
    func_004FACD4(iVar13,(int *)0x0,uVar17,piVar3);
  }
  func_0065DFCC(puVar16,0);
  return iVar13;
}

