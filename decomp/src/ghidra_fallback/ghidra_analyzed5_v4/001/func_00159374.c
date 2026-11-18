#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_006580E4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00159754;
extern int DAT_00159758;
extern undefined4 DAT_0015975c;
extern undefined4 DAT_00159760;
extern undefined4 DAT_00159764;
extern uint DAT_00159768;
extern undefined4 *DAT_0015976c;
extern int DAT_00159770;
extern undefined4 DAT_00159774;
extern undefined4 DAT_00159778;
extern int DAT_0015977c;
extern undefined *DAT_00159780;
extern int DAT_00159784;
extern int DAT_00159794;
extern undefined4 DAT_00159958;
extern float DAT_0015995c;
extern float DAT_00159960;
extern undefined DAT_00159964;
extern char s_cState_Chase_001597c0[];
extern char s_cState_Die_001597e0[];
extern char s_cState_Reaction_001597d0[];
extern char s_cState_ToFieldEd_001597ac[];
extern char s_cState_ToFieldSt_00159798[];
extern char s_cState_Wait_00159788[];

// USA 00159374 <- EU 00159378 (Ghidra, non-matching)
// GLOBAL DAT_00159754 uint *
// GLOBAL DAT_00159758 int
// GLOBAL DAT_0015975c undefined4
// GLOBAL DAT_00159760 undefined4
// GLOBAL DAT_00159764 undefined4
// GLOBAL DAT_00159768 uint
// GLOBAL DAT_0015976c undefined4 *
// GLOBAL DAT_00159770 int
// GLOBAL DAT_00159774 undefined4
// GLOBAL DAT_00159778 undefined4
// GLOBAL DAT_0015977c int
// GLOBAL DAT_00159780 undefined *
// GLOBAL DAT_00159784 int
// GLOBAL DAT_00159794 int
// GLOBAL DAT_00159958 undefined4
// GLOBAL DAT_0015995c float
// GLOBAL DAT_00159960 float
// GLOBAL DAT_00159964 undefined
// GLOBAL s_cState_Chase_001597c0 string
// GLOBAL s_cState_Die_001597e0 string
// GLOBAL s_cState_Reaction_001597d0 string
// GLOBAL s_cState_ToFieldEd_001597ac string
// GLOBAL s_cState_ToFieldSt_00159798 string
// GLOBAL s_cState_Wait_00159788 string

undefined4 * func_00159374(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  float fparam_0;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004FD464(param_1,param_2,DAT_00159754);
  iVar7 = DAT_00159758;
  *piVar2 = DAT_00159758;
  piVar2[200] = iVar7 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  uVar10 = DAT_0015975c;
  puVar3[0xb] = 0;
  puVar3[0xc] = uVar10;
  puVar14 = DAT_0015976c;
  uVar12 = DAT_00159764;
  uVar10 = DAT_00159760;
  puVar3[0xf] = DAT_00159760;
  puVar3[0x10] = uVar12;
  puVar3[0xe] = 0;
  puVar3[0x12] = uVar10;
  puVar3[0x13] = uVar12;
  puVar3[0x11] = 0;
  iVar7 = DAT_00159770;
  uVar15 = DAT_00159768;
  uVar10 = puVar14[1];
  uVar12 = puVar14[2];
  uVar17 = (ulonglong)DAT_00159768;
  puVar3[0x14] = *puVar14;
  puVar3[0x15] = uVar10;
  puVar3[0x16] = uVar12;
  puVar3[0x17] = uVar15;
  puVar3[0x19] = 0;
  uVar10 = *(undefined4 *)(iVar7 + 0x78);
  puVar3[0x1a] = *(undefined4 *)(iVar7 + 0x74);
  puVar3[0x1b] = uVar10;
  puVar14 = puVar3 + -0x22f;
  puVar3[0x18] = DAT_00159774;
  puVar3[0x1c] = DAT_00159778;
  puVar3[0x1d] = puVar14;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[-0x138] = uVar15;
  puVar3[-0x137] = uVar15;
  puVar3[-0x136] = uVar15;
  func_004FB344((int)puVar14,8);
  iVar4 = DAT_0015977c;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar4 + uVar15 * 8));
    fparam_0 = ALBW_AS_F32(uVar17);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 8);
  func_004FB468((int)puVar14);
  func_004FC07C((int)puVar14,2,0,0);
  func_004FB0A4((int)puVar14,fparam_0);
  func_004FB4E0((int)puVar14,fparam_0);
  puVar3[5] = puVar14;
  *(undefined1 *)((int)puVar3 + 6) = 6;
  iVar4 = func_0010BA78(0x60);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 6;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar7 + 0x70);
    iVar9 = iVar9 + -1;
    puVar5[2] = *(undefined4 *)(iVar7 + 0x6c);
    puVar5[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar7 + 0x70);
    puVar5[4] = *(undefined4 *)(iVar7 + 0x6c);
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar3[8] = puVar5;
  if (uVar15 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar7 + 0x18);
      *puVar5 = *(undefined4 *)(iVar7 + 0x14);
      puVar5[1] = uVar10;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar15 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = *(undefined4 *)(iVar7 + 0x18);
      puVar6[2] = *(undefined4 *)(iVar7 + 0x14);
      puVar6[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar7 + 0x18);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x14);
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00159780,0x24,6);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 6;
  }
  iVar4 = DAT_00159784;
  puVar3[-0x15a] = puVar3;
  iVar9 = DAT_00159794;
  *(undefined2 *)(iVar4 + (int)puVar14) = 6;
  local_3c = s_cState_Wait_00159788;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,0,&local_40);
  puVar5 = (undefined4 *)puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 8);
  uVar12 = *(undefined4 *)(iVar7 + 0xc);
  uVar16 = *(undefined4 *)(iVar7 + 0x10);
  uVar18 = *(undefined4 *)(iVar7 + 0x14);
  uVar19 = *(undefined4 *)(iVar7 + 0x18);
  *puVar5 = *(undefined4 *)(iVar7 + 4);
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar12;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar18;
  puVar5[1] = uVar19;
  local_3c = s_cState_ToFieldSt_00159798;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,1,&local_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x20);
  uVar12 = *(undefined4 *)(iVar7 + 0x24);
  uVar16 = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar4 + 0xc) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar12;
  *(undefined4 *)(iVar4 + 0xc) = uVar16;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar18;
  *(undefined4 *)(iVar4 + 0xc) = uVar19;
  local_3c = s_cState_ToFieldEd_001597ac;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,2,&local_40);
  iVar4 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar7 + 0x30);
  uVar10 = *(undefined4 *)(iVar7 + 0x34);
  uVar12 = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)(iVar4 + 0x14) = uVar16;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar10;
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar18;
  *(undefined4 *)(iVar4 + 0x14) = uVar19;
  local_3c = s_cState_Chase_001597c0;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,3,&local_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x40);
  uVar12 = *(undefined4 *)(iVar7 + 0x44);
  uVar16 = *(undefined4 *)(iVar7 + 0x48);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar7 + 0x3c);
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar12;
  *(undefined4 *)(iVar4 + 0x1c) = uVar16;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar18;
  *(undefined4 *)(iVar4 + 0x1c) = uVar19;
  local_3c = s_cState_Reaction_001597d0;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,4,&local_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x50);
  uVar12 = *(undefined4 *)(iVar7 + 0x54);
  uVar16 = *(undefined4 *)(iVar7 + 0x58);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(iVar4 + 0x24) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar12;
  *(undefined4 *)(iVar4 + 0x24) = uVar16;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x20) = uVar18;
  *(undefined4 *)(iVar4 + 0x24) = uVar19;
  local_3c = s_cState_Die_001597e0;
  local_40 = iVar9;
  func_0010BEC4((int)puVar3,5,&local_40);
  iVar4 = puVar3[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x60);
  uVar12 = *(undefined4 *)(iVar7 + 100);
  uVar16 = *(undefined4 *)(iVar7 + 0x68);
  pfVar13 = (float *)(iVar4 + 0x28);
  *pfVar13 = *(float *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar4 + 0x2c) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar12;
  *(undefined4 *)(iVar7 + 0x2c) = uVar16;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x28) = uVar18;
  *(undefined4 *)(iVar7 + 0x2c) = uVar19;
  puVar3[-200] = puVar3[-200] & 0xfffffffe;
  func_004FCD5C((int)(puVar3 + -0xc5),0);
  puVar3[-200] = puVar3[-200] & 0xfffffffd;
  func_004FCDF4((int)(puVar3 + -0xc5),0);
  func_006580E4(puVar3,0);
  puVar3[-0x13a] = ALBW_AS_U32(fparam_0);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  func_004F87F8((int)puVar14,0);
  *(undefined1 *)((int)puVar3 + -0x13f) = 6;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_002AF5FC((int)puVar14,5,-1);
  uVar11 = (ushort)DAT_00159958;
  func_004FC218((int)puVar14,'\x04',-1,uVar11);
  func_004FBA18((int)puVar14,7,0xff,-1,0x14,0,uVar11,DAT_00159960,DAT_0015995c);
  func_002AED68((int)puVar14,5);
  local_3c = &DAT_00159964;
  local_40 = iVar9;
  uVar15 = func_00564A78(puVar3[-300],&local_40);
  puVar3[0x1e] = uVar15;
  puVar8 = (uint *)(*(int *)(*(int *)(puVar3[-300] + 0x24) + 0xc) + uVar15 * 0x40);
  *puVar8 = *puVar8 | 0x10;
  *(undefined4 **)(puVar3[-300] + 0x16c) = puVar3 + 0x1c;
  return puVar14;
}

