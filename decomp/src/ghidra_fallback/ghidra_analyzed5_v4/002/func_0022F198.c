#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00582250(int param_1);
extern int func_0058A7D4(void);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern float fRam0022f598;
extern uint *DAT_0022f578;
extern int DAT_0022f57c;
extern float DAT_0022f580;
extern float DAT_0022f584;
extern int *DAT_0022f588;
extern float DAT_0022f58c;
extern int DAT_0022f590;
extern int *DAT_0022f594;
extern int DAT_0022f59c;
extern undefined *DAT_0022f5a0;
extern int DAT_0022f5a4;
extern int DAT_0022f5b8;
extern int *DAT_0022f9f0;
extern float DAT_0022f9f4;
extern undefined4 DAT_0022f9f8;
extern char s_cState_Appear_0022f5c8[];
extern char s_cState_AttackWait_0022f9ac[];
extern char s_cState_Attack_0022f99c[];
extern char s_cState_Die_0022f9e4[];
extern char s_cState_Disappear_0022f9c0[];
extern char s_cState_PreWait_0022f5a8[];
extern char s_cState_ReRotate_0022f98c[];
extern char s_cState_Reaction_0022f9d4[];
extern char s_cState_Rotate_0022f97c[];
extern char s_cState_Wait_0022f5bc[];

// USA 0022F198 <- EU 0022F198 (Ghidra, non-matching)
// GLOBAL DAT_0022f578 uint *
// GLOBAL DAT_0022f57c int
// GLOBAL DAT_0022f580 float
// GLOBAL DAT_0022f584 float
// GLOBAL DAT_0022f588 int *
// GLOBAL DAT_0022f58c float
// GLOBAL DAT_0022f590 int
// GLOBAL DAT_0022f594 int *
// GLOBAL DAT_0022f59c int
// GLOBAL DAT_0022f5a0 undefined *
// GLOBAL DAT_0022f5a4 int
// GLOBAL DAT_0022f5b8 int
// GLOBAL DAT_0022f9f0 int *
// GLOBAL DAT_0022f9f4 float
// GLOBAL DAT_0022f9f8 undefined4
// GLOBAL UNK_0022f598 float
// GLOBAL s_cState_Appear_0022f5c8 string
// GLOBAL s_cState_AttackWait_0022f9ac string
// GLOBAL s_cState_Attack_0022f99c string
// GLOBAL s_cState_Die_0022f9e4 string
// GLOBAL s_cState_Disappear_0022f9c0 string
// GLOBAL s_cState_PreWait_0022f5a8 string
// GLOBAL s_cState_ReRotate_0022f98c string
// GLOBAL s_cState_Reaction_0022f9d4 string
// GLOBAL s_cState_Rotate_0022f97c string
// GLOBAL s_cState_Wait_0022f5bc string

undefined4 * func_0022F198(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  #define piStack_30 (*(int * *)(albw_frame + 0x10))
  piVar2 = func_004FD464(param_1,param_2,DAT_0022f578);
  fVar19 = DAT_0022f580;
  iVar10 = DAT_0022f57c;
  piVar2[200] = DAT_0022f57c + 0x84;
  *piVar2 = iVar10;
  piVar2[0x230] = 0;
  piVar2[0x231] = 0;
  piVar2[0x292] = 0;
  piVar2[0x293] = 0;
  piVar2[0x294] = (int)ALBW_AS_U32(fVar19);
  piVar2[0x295] = 1;
  *(undefined1 *)(piVar2 + 0x296) = 1;
  fVar15 = DAT_0022f584;
  piVar2[0x297] = 0;
  piVar2[0x298] = 0;
  piVar8 = DAT_0022f588;
  piVar2[0x299] = (int)ALBW_AS_U32(fVar15);
  piVar2[0x29a] = 0;
  *(undefined1 *)(piVar2 + 0x29b) = 0;
  *(undefined1 *)((int)piVar2 + 0xa6d) = 0;
  iVar10 = piVar8[1];
  iVar11 = piVar8[2];
  piVar2[0x29c] = *piVar8;
  piVar2[0x29d] = iVar10;
  piVar2[0x29e] = iVar11;
  puVar3 = func_0010A794(piVar2 + 0x29f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar12 = puVar3 + -0x29f;
  pfVar4 = (float *)func_0010BAB4(0x1c);
  if (pfVar4 != (float *)0x0) {
    pfVar4[2] = DAT_0022f58c;
    *pfVar4 = fVar19;
    pfVar4[1] = fVar15;
    pfVar4[3] = fVar19;
    pfVar4[4] = fVar19;
    pfVar4[5] = 0.0;
    pfVar4[6] = 0.0;
  }
  puVar3[-5] = pfVar4;
  func_004FB344((int)puVar12,0xb);
  iVar10 = DAT_0022f590;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar12,uVar13,(int *)(iVar10 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0xb);
  func_004FB468((int)puVar12);
  pfVar4 = (float *)0x0;
  func_004FABDC((int)puVar12,1,0,0);
  func_004FB4E0((int)puVar12,fVar19);
  puVar5 = (uint *)func_00582250(*DAT_0022f594);
  if (param_2[0xa7] < *puVar5) {
    iVar10 = *(int *)(puVar5[2] + param_2[0xa7] * 4);
  }
  else {
    iVar10 = 0;
  }
  puVar3[-0x70] = iVar10;
  piVar8 = *(int **)(iVar10 + 0x28);
  iVar10 = *(int *)(iVar10 + 0x20);
  puVar3[-0x6e] = 0;
  fVar19 = fRam0022f598;
  piVar2 = piVar8 + iVar10;
  if (piVar8 != piVar2) {
    do {
      iVar10 = *piVar8;
      uVar13 = puVar3[-0x6e];
      piVar8 = piVar8 + 1;
      pfVar4 = (float *)(iVar10 + 0x1c);
      fVar15 = *pfVar4;
      uVar16 = *(undefined4 *)(iVar10 + 0x20);
      puVar6 = puVar3 + -0x6d;
      if (uVar13 < 0x20) {
        pfVar4 = (float *)(uVar13 * 3);
        puVar6 = puVar3 + -0x6d + uVar13 * 3;
      }
      *puVar6 = *(undefined4 *)(iVar10 + 0x18);
      puVar6[1] = ALBW_AS_U32(fVar15 + fVar19);
      puVar6[2] = uVar16;
      puVar3[-0x6e] = puVar3[-0x6e] + 1;
    } while (piVar8 != piVar2);
  }
  puVar3[-0x138] = puVar3[-0x138] & 0xfffffffd;
  piStack_30 = puVar3 + -0x135;
  func_004FCDF4((int)piStack_30,0);
  func_004F5BD8((int)puVar12,(uint *)0x0,(int **)0x0,pfVar4);
  puVar3[5] = puVar12;
  *(undefined1 *)((int)puVar3 + 6) = 10;
  iVar11 = func_0010BA78(0xa0);
  iVar10 = DAT_0022f59c;
  puVar3[6] = iVar11;
  puVar3[7] = iVar11 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 10;
  puVar6 = (undefined4 *)(iVar11 + -8);
  do {
    uVar16 = *(undefined4 *)(iVar10 + 0xb4);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar10 + 0xb0);
    puVar6[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar10 + 0xb4);
    puVar6[4] = *(undefined4 *)(iVar10 + 0xb0);
    puVar6[5] = uVar16;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar3[8] = puVar6;
  if (uVar13 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar10 + 0x1c);
      *puVar6 = *(undefined4 *)(iVar10 + 0x18);
      puVar6[1] = uVar16;
      puVar7 = puVar6;
    }
    for (iVar11 = (int)uVar13 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar16 = *(undefined4 *)(iVar10 + 0x1c);
      puVar7[2] = *(undefined4 *)(iVar10 + 0x18);
      puVar7[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar10 + 0x1c);
      puVar7[4] = *(undefined4 *)(iVar10 + 0x18);
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar11 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 10;
    iVar11 = func_00100118((int)(puVar6 + 2),DAT_0022f5a0,0x24,10);
  }
  if (iVar11 != 0) {
    puVar3[3] = iVar11;
    puVar3[2] = 10;
  }
  iVar11 = DAT_0022f5a4;
  puVar3[-0x1ca] = puVar3;
  iVar9 = DAT_0022f5b8;
  *(undefined2 *)(iVar11 + (int)puVar12) = 10;
  pcStack_34 = s_cState_PreWait_0022f5a8;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,0,&iStack_38);
  puVar6 = (undefined4 *)puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x10);
  uVar17 = *(undefined4 *)(iVar10 + 0x14);
  uVar18 = *(undefined4 *)(iVar10 + 0xc);
  uVar20 = *(undefined8 *)(iVar10 + 0x18);
  *puVar6 = *(undefined4 *)(iVar10 + 8);
  puVar6[1] = uVar18;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = (int)uVar20;
  puVar6[1] = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Wait_0022f5bc;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,1,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x24);
  uVar17 = *(undefined4 *)(iVar10 + 0x28);
  uVar18 = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar10 + 0x20);
  *(undefined4 *)(iVar11 + 0xc) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 8) = uVar17;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 8) = (int)uVar20;
  *(int *)(iVar11 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Appear_0022f5c8;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,2,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x34);
  uVar17 = *(undefined4 *)(iVar10 + 0x38);
  uVar18 = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar10 + 0x30);
  *(undefined4 *)(iVar11 + 0x14) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar17;
  *(undefined4 *)(iVar11 + 0x14) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x10) = (int)uVar20;
  *(int *)(iVar11 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Rotate_0022f97c;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,3,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x44);
  uVar17 = *(undefined4 *)(iVar10 + 0x48);
  uVar18 = *(undefined4 *)(iVar10 + 0x4c);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(iVar11 + 0x1c) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar17;
  *(undefined4 *)(iVar11 + 0x1c) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x18) = (int)uVar20;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_ReRotate_0022f98c;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,4,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x54);
  uVar17 = *(undefined4 *)(iVar10 + 0x58);
  uVar18 = *(undefined4 *)(iVar10 + 0x5c);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar10 + 0x50);
  *(undefined4 *)(iVar11 + 0x24) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x20) = uVar17;
  *(undefined4 *)(iVar11 + 0x24) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x20) = (int)uVar20;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Attack_0022f99c;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,5,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 100);
  uVar17 = *(undefined4 *)(iVar10 + 0x68);
  uVar18 = *(undefined4 *)(iVar10 + 0x6c);
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar10 + 0x60);
  *(undefined4 *)(iVar11 + 0x2c) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x28) = uVar17;
  *(undefined4 *)(iVar11 + 0x2c) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x28) = (int)uVar20;
  *(int *)(iVar11 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_AttackWait_0022f9ac;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,6,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x74);
  uVar17 = *(undefined4 *)(iVar10 + 0x78);
  uVar18 = *(undefined4 *)(iVar10 + 0x7c);
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar10 + 0x70);
  *(undefined4 *)(iVar11 + 0x34) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x30) = uVar17;
  *(undefined4 *)(iVar11 + 0x34) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x30) = (int)uVar20;
  *(int *)(iVar11 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Disappear_0022f9c0;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,7,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x84);
  uVar18 = *(undefined4 *)(iVar10 + 0x88);
  uVar17 = *(undefined4 *)(iVar10 + 0x8c);
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar10 + 0x80);
  *(undefined4 *)(iVar11 + 0x3c) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x38) = uVar18;
  *(undefined4 *)(iVar11 + 0x3c) = uVar17;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x38) = (int)uVar20;
  *(int *)(iVar11 + 0x3c) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Reaction_0022f9d4;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,8,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0x94);
  uVar17 = *(undefined4 *)(iVar10 + 0x98);
  uVar18 = *(undefined4 *)(iVar10 + 0x9c);
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar10 + 0x90);
  *(undefined4 *)(iVar11 + 0x44) = uVar16;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x40) = uVar17;
  *(undefined4 *)(iVar11 + 0x44) = uVar18;
  iVar11 = puVar3[8];
  *(int *)(iVar11 + 0x40) = (int)uVar20;
  *(int *)(iVar11 + 0x44) = (int)((ulonglong)uVar20 >> 0x20);
  pcStack_34 = s_cState_Die_0022f9e4;
  iStack_38 = iVar9;
  func_0010BEC4((int)puVar3,9,&iStack_38);
  iVar11 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar10 + 0xa4);
  uVar17 = *(undefined4 *)(iVar10 + 0xa8);
  uVar18 = *(undefined4 *)(iVar10 + 0xac);
  *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar10 + 0xa0);
  *(undefined4 *)(iVar11 + 0x4c) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x48) = uVar17;
  *(undefined4 *)(iVar10 + 0x4c) = uVar18;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x48) = (int)uVar20;
  *(int *)(iVar10 + 0x4c) = (int)((ulonglong)uVar20 >> 0x20);
  func_0065E9FC(puVar3,0);
  piVar8 = DAT_0022f9f0;
  puVar3[-0x138] = puVar3[-0x138] | 0x8000;
  uVar13 = func_00564A78(puVar3[-0x19c],piVar8);
  puVar3[-0xc] = uVar13;
  fVar19 = DAT_0022f9f4;
  puVar3[-0x1ab] = puVar3[-0x6d];
  puVar3[-0x1aa] = puVar3[-0x6c];
  puVar3[-0x1a9] = puVar3[-0x6b];
  puVar3[-0x1aa] = ALBW_AS_U32(ALBW_AS_F32(puVar3[-0x1aa]) + fVar19);
  puVar5 = (uint *)func_0058A7D4();
  uVar13 = func_00111A64(puVar5);
  puVar3[-10] = (int)((ulonglong)uVar13 * 0xaa >> 0x20) + 10;
  puVar3[-0x138] = puVar3[-0x138] & 0xffffff7b;
  func_004F87F8((int)puVar12,3);
  puVar3[-0x138] = puVar3[-0x138] | 0x40000000;
  piVar8 = DAT_0022f594;
  uVar13 = param_2[0xa9];
  bVar14 = -1 < (int)uVar13;
  if (bVar14) {
    uVar13 = param_2[0xaa];
  }
  if (bVar14 && -1 < (int)uVar13) {
    *(undefined1 *)(puVar3 + -4) = 1;
    puVar5 = (uint *)func_00582250(*piVar8);
    if (param_2[0xa9] < *puVar5) {
      iVar10 = *(int *)(puVar5[2] + param_2[0xa9] * 4);
    }
    else {
      iVar10 = 0;
    }
    piVar8 = *(int **)(iVar10 + 0x28);
    piVar2 = piVar8 + *(int *)(iVar10 + 0x20);
    for (; piVar8 != piVar2; piVar8 = piVar8 + 1) {
      iVar10 = *piVar8;
      uVar16 = *(undefined4 *)(iVar10 + 0x1c);
      uVar17 = *(undefined4 *)(iVar10 + 0x20);
      puVar3[-3] = *(undefined4 *)(iVar10 + 0x18);
      puVar3[-2] = uVar16;
      puVar3[-1] = uVar17;
    }
  }
  else {
    *(undefined1 *)(puVar3 + -4) = 0;
  }
  *(undefined1 *)((int)puVar3 + -0x2ff) = 10;
  *(undefined1 *)((int)puVar3 + -0x2fe) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x2fd) = 0;
  if ((char)piStack_30[0x2a] == '\0') {
    iVar10 = 0;
  }
  else {
    iVar10 = *piStack_30;
  }
  *(undefined4 *)(iVar10 + 0x14c) = DAT_0022f9f8;
  return puVar12;
}

