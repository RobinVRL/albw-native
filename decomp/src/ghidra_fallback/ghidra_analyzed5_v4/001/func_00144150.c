#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001433C8(int param_1,int param_2);
extern int func_0014362C(int param_1);
extern int func_001436A8(int param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512E8(int *param_1);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_00521028(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0014454c;
extern int DAT_00144550;
extern undefined4 *DAT_00144554;
extern int DAT_00144558;
extern undefined DAT_0014455c;
extern undefined4 *DAT_00144570;
extern undefined4 DAT_00144574;
extern undefined4 DAT_00144578;
extern undefined *DAT_0014457c;
extern int DAT_00144580;
extern float DAT_00144934;
extern int *DAT_001449a8;
extern int DAT_001449ac;
extern char s_cState_Appear_00144590[];
extern char s_cState_DemoAppear_00144908[];
extern char s_cState_DemoDisappear_0014491c[];
extern char s_cState_Demo_001448fc[];
extern char s_cState_Exist_001448dc[];
extern char s_cState_GetDemo_001448ec[];
extern char s_cState_Hide_00144584[];
extern char s_cState_Hold_001448c4[];
extern char s_cState_Wait_001448d0[];

// USA 00144150 <- EU 00144150 (Ghidra, non-matching)
// GLOBAL DAT_0014454c int
// GLOBAL DAT_00144550 int
// GLOBAL DAT_00144554 undefined4 *
// GLOBAL DAT_00144558 int
// GLOBAL DAT_0014455c undefined
// GLOBAL DAT_00144570 undefined4 *
// GLOBAL DAT_00144574 undefined4
// GLOBAL DAT_00144578 undefined4
// GLOBAL DAT_0014457c undefined *
// GLOBAL DAT_00144580 int
// GLOBAL DAT_00144934 float
// GLOBAL DAT_001449a8 int *
// GLOBAL DAT_001449ac int
// GLOBAL s_cState_Appear_00144590 string
// GLOBAL s_cState_DemoAppear_00144908 string
// GLOBAL s_cState_DemoDisappear_0014491c string
// GLOBAL s_cState_Demo_001448fc string
// GLOBAL s_cState_Exist_001448dc string
// GLOBAL s_cState_GetDemo_001448ec string
// GLOBAL s_cState_Hide_00144584 string
// GLOBAL s_cState_Hold_001448c4 string
// GLOBAL s_cState_Wait_001448d0 string

undefined4 * func_00144150(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0014454c + 0x54;
  *piVar3 = DAT_0014454c;
  piVar3[200] = iVar4;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x103] = iVar4;
  *(undefined1 *)(piVar3 + 0x104) = 0;
  *(undefined1 *)((int)piVar3 + 0x411) = 1;
  *(undefined1 *)((int)piVar3 + 0x412) = 0;
  *(undefined1 *)((int)piVar3 + 0x413) = 0;
  *(undefined1 *)(piVar3 + 0x105) = 0;
  fVar15 = func_0054DE3C(piVar3,0,1);
  iVar4 = DAT_00144550;
  piVar3[0x106] = (int)ALBW_AS_U32(fVar15);
  piVar3[0x107] = iVar4;
  piVar3[0x108] = 0;
  puVar5 = func_0010A794(piVar3 + 0x109);
  puVar6 = DAT_00144554;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar12 = *puVar6;
  uVar14 = puVar6[1];
  puVar5[0xb] = puVar6[2];
  puVar5[9] = uVar12;
  puVar5[10] = uVar14;
  puVar11 = puVar5 + -0x109;
  puVar5[0xc] = puVar5[-0x15];
  puVar5[0xd] = puVar5[-0x14];
  puVar5[0xe] = puVar5[-0x13];
  puVar5[0xf] = puVar5[-0x15];
  puVar5[0x10] = puVar5[-0x14];
  puVar5[0x11] = puVar5[-0x13];
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x108);
  iVar4 = DAT_00144558;
  uVar12 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    local_54 = &DAT_0014455c;
    local_58 = DAT_00144558;
    uVar12 = func_001663BC(puVar6,&local_58,puVar5[-0x56],5,1);
  }
  puVar5[0x14] = uVar12;
  puVar6 = (undefined4 *)func_0010BAB4(0xb0);
  uVar12 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar12 = func_002FCDA0(puVar6,puVar5[-0x56],7);
  }
  puVar6 = DAT_00144570;
  puVar5[0x15] = uVar12;
  uVar12 = puVar6[1];
  puVar5[0x18] = *puVar6;
  puVar5[0x19] = uVar12;
  puVar5[0x16] = DAT_00144574;
  puVar5[0x17] = puVar11;
  iVar7 = func_0054D89C((int)puVar11,0);
  puVar5[0x1a] = iVar7;
  uVar12 = DAT_00144578;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = uVar12;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = uVar12;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = uVar12;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0x32;
  puVar5[0x26] = uVar12;
  puVar5[0x27] = 0;
  *(undefined1 *)(puVar5 + 0x28) = 0;
  if ((*(short *)(puVar5 + -0xfb) == 0) || (bVar2 = func_00588BF0((int)puVar11,1), !bVar2)) {
    uVar12 = func_0014E428((int)puVar11,1,0,0,1,0,0);
    puVar5[0x12] = uVar12;
    func_001436A8((int)puVar11);
    func_001433C8((int)puVar11,*(ushort *)((int)puVar5 + -0x3f6) & 0xff);
    if ((int *)puVar5[0x1a] != (int *)0x0) {
      func_001512E8((int *)puVar5[0x1a]);
    }
    puVar5[5] = puVar11;
    *(undefined1 *)((int)puVar5 + 6) = 9;
    iVar7 = func_0010BA78(0x90);
    puVar5[6] = iVar7;
    puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
    iVar10 = 9;
    puVar8 = (undefined4 *)(iVar7 + -8);
    do {
      uVar12 = puVar6[0x19];
      iVar10 = iVar10 + -1;
      puVar8[2] = puVar6[0x18];
      puVar8[3] = uVar12;
      uVar12 = puVar6[0x19];
      puVar8[4] = puVar6[0x18];
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
    bVar1 = *(byte *)((int)puVar5 + 6);
    uVar13 = (uint)bVar1;
    puVar8 = (undefined4 *)func_0010BA78(uVar13 << 3);
    puVar5[8] = puVar8;
    if (uVar13 != 0) {
      puVar9 = puVar8 + -2;
      if ((bVar1 & 1) != 0) {
        uVar12 = puVar6[7];
        *puVar8 = puVar6[6];
        puVar8[1] = uVar12;
        puVar9 = puVar8;
      }
      for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar12 = puVar6[7];
        puVar9[2] = puVar6[6];
        puVar9[3] = uVar12;
        uVar12 = puVar6[7];
        puVar9[4] = puVar6[6];
        puVar9[5] = uVar12;
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
    iVar7 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0x24;
      puVar8[1] = 9;
      iVar7 = func_00100118((int)(puVar8 + 2),DAT_0014457c,0x24,9);
    }
    if (iVar7 != 0) {
      puVar5[2] = 9;
      puVar5[3] = iVar7;
    }
    iVar7 = DAT_00144580;
    puVar5[-0x34] = puVar5;
    *(undefined2 *)(iVar7 + (int)puVar11) = 9;
    local_54 = s_cState_Hide_00144584;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,0,&local_58);
    puVar8 = (undefined4 *)puVar5[6];
    uVar12 = puVar6[3];
    uVar14 = puVar6[4];
    uVar17 = puVar6[5];
    uVar18 = *(undefined8 *)(puVar6 + 6);
    *puVar8 = puVar6[2];
    puVar8[1] = uVar12;
    puVar8 = (undefined4 *)puVar5[7];
    *puVar8 = uVar14;
    puVar8[1] = uVar17;
    puVar8 = (undefined4 *)puVar5[8];
    *puVar8 = (int)uVar18;
    puVar8[1] = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_Appear_00144590;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,1,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[9];
    uVar14 = puVar6[10];
    uVar17 = puVar6[0xb];
    *(undefined4 *)(iVar7 + 8) = puVar6[8];
    *(undefined4 *)(iVar7 + 0xc) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 8) = uVar14;
    *(undefined4 *)(iVar7 + 0xc) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 8) = (int)uVar18;
    *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_Hold_001448c4;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,2,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0xd];
    uVar14 = puVar6[0xe];
    uVar17 = puVar6[0xf];
    *(undefined4 *)(iVar7 + 0x10) = puVar6[0xc];
    *(undefined4 *)(iVar7 + 0x14) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x10) = uVar14;
    *(undefined4 *)(iVar7 + 0x14) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x10) = (int)uVar18;
    *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_Wait_001448d0;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,3,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0x11];
    uVar14 = puVar6[0x12];
    uVar17 = puVar6[0x13];
    *(undefined4 *)(iVar7 + 0x18) = puVar6[0x10];
    *(undefined4 *)(iVar7 + 0x1c) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x18) = uVar14;
    *(undefined4 *)(iVar7 + 0x1c) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x18) = (int)uVar18;
    *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_Exist_001448dc;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,4,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0x15];
    uVar14 = puVar6[0x16];
    uVar17 = puVar6[0x17];
    *(undefined4 *)(iVar7 + 0x20) = puVar6[0x14];
    *(undefined4 *)(iVar7 + 0x24) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x20) = uVar14;
    *(undefined4 *)(iVar7 + 0x24) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x20) = (int)uVar18;
    *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_GetDemo_001448ec;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,5,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0x19];
    uVar14 = puVar6[0x1a];
    uVar17 = puVar6[0x1b];
    *(undefined4 *)(iVar7 + 0x28) = puVar6[0x18];
    *(undefined4 *)(iVar7 + 0x2c) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x28) = uVar14;
    *(undefined4 *)(iVar7 + 0x2c) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x28) = (int)uVar18;
    *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_Demo_001448fc;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,6,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0x1d];
    uVar14 = puVar6[0x1e];
    uVar17 = puVar6[0x1f];
    *(undefined4 *)(iVar7 + 0x30) = puVar6[0x1c];
    *(undefined4 *)(iVar7 + 0x34) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x30) = uVar14;
    *(undefined4 *)(iVar7 + 0x34) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x30) = (int)uVar18;
    *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_DemoAppear_00144908;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,7,&local_58);
    iVar7 = puVar5[6];
    uVar12 = puVar6[0x21];
    uVar14 = puVar6[0x22];
    uVar17 = puVar6[0x23];
    *(undefined4 *)(iVar7 + 0x38) = puVar6[0x20];
    *(undefined4 *)(iVar7 + 0x3c) = uVar12;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x38) = uVar14;
    *(undefined4 *)(iVar7 + 0x3c) = uVar17;
    iVar7 = puVar5[8];
    *(int *)(iVar7 + 0x38) = (int)uVar18;
    *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
    local_54 = s_cState_DemoDisappear_0014491c;
    local_58 = iVar4;
    func_0010BEC4((int)puVar5,8,&local_58);
    iVar4 = puVar5[6];
    uVar12 = puVar6[0x25];
    uVar14 = puVar6[0x26];
    uVar17 = puVar6[0x27];
    *(undefined4 *)(iVar4 + 0x40) = puVar6[0x24];
    *(undefined4 *)(iVar4 + 0x44) = uVar12;
    iVar4 = puVar5[7];
    *(undefined4 *)(iVar4 + 0x40) = uVar14;
    *(undefined4 *)(iVar4 + 0x44) = uVar17;
    iVar4 = puVar5[8];
    *(int *)(iVar4 + 0x40) = (int)uVar18;
    *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
    if (*(short *)(puVar5 + -0xfd) == 1) {
      func_006576C4(puVar5,6);
      iVar4 = func_0052FBA0(*DAT_001449a8 + 0x3dbbc,puVar5[-0xf5]);
      if (iVar4 != 0) {
        puVar6 = (undefined4 *)(iVar4 + 0x4e4);
        uVar13 = *(uint *)(DAT_001449ac + *(short *)((int)puVar5 + -0x3f6) * 4);
        if (uVar13 < 3) {
          puVar6 = puVar6 + uVar13;
        }
        *puVar6 = puVar5[-0x56];
      }
    }
    else if ((*(short *)((int)puVar5 + -0x3ee) == 0) ||
            (bVar2 = func_00588BF0((int)puVar11,0), bVar2)) {
      func_006576C4(puVar5,4);
    }
    else {
      func_006576C4(puVar5,0);
    }
    iVar4 = puVar5[-6];
    if (iVar4 != 0) {
      fVar15 = ALBW_AS_F32(puVar5[-0x14]);
      fVar16 = ALBW_AS_F32(puVar5[-3]);
      uVar12 = puVar5[-0x13];
      *(undefined4 *)(iVar4 + 4) = puVar5[-0x15];
      *(float *)(iVar4 + 8) = fVar15 + fVar16;
      *(undefined4 *)(iVar4 + 0xc) = uVar12;
      func_004356B4((int *)puVar5[-6]);
    }
    piVar3 = (int *)func_00521028((int)puVar11);
    (**(code **)(*piVar3 + 8))(piVar3);
    func_003529A0(auStack_50,piVar3[1],puVar5 + -0x41);
    if (*(short *)((int)puVar5 + -0x3f6) == 0) {
      local_38 = 0;
    }
    else if (*(short *)((int)puVar5 + -0x3f6) == 1) {
      local_38 = 1;
    }
    else {
      local_38 = 2;
    }
    func_002C41BC(puVar5 + -0x41,auStack_50,(int)puVar11);
    fVar15 = ALBW_AS_F32(puVar5[-0x14]) + DAT_00144934;
    puVar5[-2] = puVar5[-0x14];
    puVar5[-0x14] = ALBW_AS_U32(fVar15);
    func_0014362C((int)puVar11);
    func_004ECF6C((int)puVar11);
  }
  else {
    *(undefined1 *)((int)puVar5 + -0x14d) = 1;
  }
  return puVar11;
}

