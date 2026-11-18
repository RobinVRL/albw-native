#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0017BFB0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00659168(undefined4 *param_1,undefined1 param_2);
extern int DAT_0017dae8;
extern int DAT_0017daec;
extern undefined4 DAT_0017daf0;
extern undefined4 DAT_0017daf4;
extern undefined4 *DAT_0017daf8;
extern int DAT_0017dafc;
extern undefined *DAT_0017db00;
extern int DAT_0017db10;
extern float *DAT_0017dd38;
extern float DAT_0017dd3c;
extern char s_cState_CollectRental_0017db40[];
extern char s_cState_CollectSandRod_0017dd20[];
extern char s_cState_EventTalk_0017db14[];
extern char s_cState_PreCollectRental_0017db28[];
extern char s_cState_PreCollectSandRod_0017dd04[];
extern char s_cState_Wait_0017db04[];

// USA 0017D61C <- EU 0017D61C (Ghidra, non-matching)
// GLOBAL DAT_0017dae8 int
// GLOBAL DAT_0017daec int
// GLOBAL DAT_0017daf0 undefined4
// GLOBAL DAT_0017daf4 undefined4
// GLOBAL DAT_0017daf8 undefined4 *
// GLOBAL DAT_0017dafc int
// GLOBAL DAT_0017db00 undefined *
// GLOBAL DAT_0017db10 int
// GLOBAL DAT_0017dd38 float *
// GLOBAL DAT_0017dd3c float
// GLOBAL s_cState_CollectRental_0017db40 string
// GLOBAL s_cState_CollectSandRod_0017dd20 string
// GLOBAL s_cState_EventTalk_0017db14 string
// GLOBAL s_cState_PreCollectRental_0017db28 string
// GLOBAL s_cState_PreCollectSandRod_0017dd04 string
// GLOBAL s_cState_Wait_0017db04 string

undefined4 * func_0017D61C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_0;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define aiStack_88 ((int *)(albw_frame + 0x8))
  piVar2 = (int *)func_001E6CEC(param_1,param_2,0xc);
  iVar4 = DAT_0017dae8;
  *piVar2 = DAT_0017dae8;
  piVar2[200] = iVar4 + 0x98;
  puVar3 = func_0010A794(piVar2 + 0x1e2);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar8 = puVar3 + -0x1e2;
  puVar3[9] = 0;
  iVar4 = func_0054D964((int)puVar8,0);
  puVar3[0xc] = iVar4;
  iVar4 = func_0054D89C((int)puVar8,0);
  puVar3[0xd] = iVar4;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar5);
  }
  iVar4 = DAT_0017daec;
  puVar3[0xe] = puVar6;
  uVar9 = *(undefined4 *)(iVar4 + 8);
  puVar3[0x11] = *(undefined4 *)(iVar4 + 4);
  puVar3[0x12] = uVar9;
  puVar3[0xf] = DAT_0017daf0;
  puVar3[0x10] = puVar8;
  puVar3[0x13] = 0;
  puVar6 = puVar3 + 0x18;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  if (puVar6 != (undefined4 *)0x0) {
    iVar10 = 0;
    iVar13 = 9;
    puVar3[0x16] = puVar6;
    do {
      iVar13 = iVar13 + -1;
      puVar6[iVar10] = puVar6 + iVar10 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0);
    puVar3[0x21] = 0;
    puVar3[0x17] = puVar6;
    func_0010B3EC(puVar3 + 0x13,10,(int)(puVar3 + 0x22));
  }
  puVar3[0x2d] = puVar3[-0xed];
  puVar3[0x2c] = puVar3[-0xee];
  puVar3[0x30] = puVar3[-0xed];
  puVar3[0x2e] = puVar3[-0xec];
  puVar3[0x2f] = puVar3[-0xee];
  puVar3[0x31] = puVar3[-0xec];
  uVar9 = DAT_0017daf4;
  puVar3[0x32] = 0;
  puVar3[0x33] = 0;
  puVar3[0x34] = uVar9;
  puVar6 = puVar3 + -0x1e2;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = uVar9;
  puVar3[0x38] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x3b] = 0;
  puVar3[0x3c] = 0xffffffff;
  puVar3[0x3d] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x3e) = 0;
  *(undefined1 *)((int)puVar3 + 0xf9) = 1;
  *(undefined1 *)((int)puVar3 + 0xfa) = 0;
  *(undefined1 *)((int)puVar3 + 0xfb) = 0;
  *(undefined1 *)(puVar3 + 0x3f) = 0;
  *(undefined1 *)((int)puVar3 + 0xfd) = 0;
  puVar3[0x40] = uVar9;
  iVar10 = func_001E6AF8((int)puVar6);
  if (iVar10 == 0) {
    puVar3[-0xe8] = *DAT_0017daf8;
    func_003249E0((int)puVar6,0);
    puVar3[9] = *(undefined4 *)(puVar3[-0x12e] + 0x1c8);
    uVar9 = func_0014E428((int)puVar6,0,0,0,1,0,0);
    puVar3[10] = uVar9;
    uVar9 = func_0014E904((int)puVar6,0xe,1);
    iVar10 = DAT_0017dafc;
    uVar12 = 0;
    puVar3[0xb] = uVar9;
    do {
      func_00169688((uint *)puVar3[0xb],uVar12,(int *)(iVar10 + uVar12 * 8),
                    *(int *)(puVar3[-0x12e] + 0x1c8));
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0xe);
    func_0016A02C(puVar3[0xb],-1,(int *)0xffffffff,0);
    puVar7 = (uint *)func_002C11E8(aiStack_88,0,10,0);
    func_0016898C(puVar3[0xb],puVar7);
    func_00324964((int)puVar6);
    *(undefined1 *)((int)puVar3 + 6) = 6;
    puVar3[5] = puVar6;
    iVar10 = func_0010BA78(0x60);
    puVar3[6] = iVar10;
    puVar3[7] = iVar10 + (uint)*(byte *)((int)puVar3 + 6) * 8;
    iVar13 = 6;
    puVar5 = (undefined4 *)(iVar10 + -8);
    do {
      uVar9 = *(undefined4 *)(iVar4 + 0x80);
      iVar13 = iVar13 + -1;
      puVar5[2] = *(undefined4 *)(iVar4 + 0x7c);
      puVar5[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar4 + 0x80);
      puVar5[4] = *(undefined4 *)(iVar4 + 0x7c);
      puVar5[5] = uVar9;
      puVar5 = puVar5 + 4;
    } while (iVar13 != 0);
    bVar1 = *(byte *)((int)puVar3 + 6);
    uVar12 = (uint)bVar1;
    puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
    puVar3[8] = puVar5;
    if (uVar12 != 0) {
      puVar8 = puVar5 + -2;
      if ((bVar1 & 1) != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 0x20);
        *puVar5 = *(undefined4 *)(iVar4 + 0x1c);
        puVar5[1] = uVar9;
        puVar8 = puVar5;
      }
      for (iVar10 = (int)uVar12 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar9 = *(undefined4 *)(iVar4 + 0x20);
        puVar8[2] = *(undefined4 *)(iVar4 + 0x1c);
        puVar8[3] = uVar9;
        uVar9 = *(undefined4 *)(iVar4 + 0x20);
        puVar8[4] = *(undefined4 *)(iVar4 + 0x1c);
        puVar8[5] = uVar9;
        puVar8 = puVar8 + 4;
      }
    }
    puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
    iVar10 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0x24;
      puVar5[1] = 6;
      iVar10 = func_00100118((int)(puVar5 + 2),DAT_0017db00,0x24,6);
    }
    if (iVar10 != 0) {
      puVar3[3] = iVar10;
      puVar3[2] = 6;
    }
    puVar3[-0x10d] = puVar3;
    *(undefined2 *)((int)puVar3 + -0x42e) = 6;
    iVar10 = DAT_0017db10;
    local_8c = s_cState_Wait_0017db04;
    local_90 = DAT_0017db10;
    func_0010BEC4((int)puVar3,0,&local_90);
    puVar5 = (undefined4 *)puVar3[6];
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    uVar14 = *(undefined4 *)(iVar4 + 0x14);
    uVar15 = *(undefined4 *)(iVar4 + 0x18);
    uVar16 = *(undefined4 *)(iVar4 + 0x1c);
    uVar17 = *(undefined4 *)(iVar4 + 0x20);
    *puVar5 = *(undefined4 *)(iVar4 + 0xc);
    puVar5[1] = uVar9;
    puVar5 = (undefined4 *)puVar3[7];
    *puVar5 = uVar14;
    puVar5[1] = uVar15;
    puVar5 = (undefined4 *)puVar3[8];
    *puVar5 = uVar16;
    puVar5[1] = uVar17;
    local_8c = s_cState_EventTalk_0017db14;
    local_90 = iVar10;
    func_0010BEC4((int)puVar3,1,&local_90);
    iVar13 = puVar3[6];
    uVar9 = *(undefined4 *)(iVar4 + 0x28);
    uVar14 = *(undefined4 *)(iVar4 + 0x2c);
    uVar15 = *(undefined4 *)(iVar4 + 0x30);
    uVar16 = *(undefined4 *)(iVar4 + 0x34);
    uVar17 = *(undefined4 *)(iVar4 + 0x38);
    *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar13 + 0xc) = uVar9;
    iVar13 = puVar3[7];
    *(undefined4 *)(iVar13 + 8) = uVar14;
    *(undefined4 *)(iVar13 + 0xc) = uVar15;
    iVar13 = puVar3[8];
    *(undefined4 *)(iVar13 + 8) = uVar16;
    *(undefined4 *)(iVar13 + 0xc) = uVar17;
    local_8c = s_cState_PreCollectRental_0017db28;
    local_90 = iVar10;
    func_0010BEC4((int)puVar3,2,&local_90);
    iVar13 = puVar3[6];
    uVar15 = *(undefined4 *)(iVar4 + 0x40);
    uVar9 = *(undefined4 *)(iVar4 + 0x44);
    uVar14 = *(undefined4 *)(iVar4 + 0x48);
    uVar18 = *(undefined8 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar4 + 0x3c);
    *(undefined4 *)(iVar13 + 0x14) = uVar15;
    iVar13 = puVar3[7];
    *(undefined4 *)(iVar13 + 0x10) = uVar9;
    *(undefined4 *)(iVar13 + 0x14) = uVar14;
    iVar13 = puVar3[8];
    *(int *)(iVar13 + 0x10) = (int)uVar18;
    *(int *)(iVar13 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
    local_8c = s_cState_CollectRental_0017db40;
    local_90 = iVar10;
    func_0010BEC4((int)puVar3,3,&local_90);
    uVar9 = *(undefined4 *)(iVar4 + 0x54);
    uVar15 = *(undefined4 *)(iVar4 + 0x58);
    uVar14 = *(undefined4 *)(iVar4 + 0x50);
    iVar13 = puVar3[6];
    *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(iVar13 + 0x1c) = uVar14;
    iVar13 = puVar3[7];
    *(undefined4 *)(iVar13 + 0x18) = uVar9;
    *(undefined4 *)(iVar13 + 0x1c) = uVar15;
    iVar13 = puVar3[8];
    *(int *)(iVar13 + 0x18) = (int)uVar18;
    *(int *)(iVar13 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
    local_8c = s_cState_PreCollectSandRod_0017dd04;
    local_90 = iVar10;
    func_0010BEC4((int)puVar3,4,&local_90);
    iVar13 = puVar3[6];
    uVar9 = *(undefined4 *)(iVar4 + 0x60);
    uVar14 = *(undefined4 *)(iVar4 + 100);
    uVar15 = *(undefined4 *)(iVar4 + 0x68);
    *(undefined4 *)(iVar13 + 0x20) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)(iVar13 + 0x24) = uVar9;
    iVar13 = puVar3[7];
    *(undefined4 *)(iVar13 + 0x20) = uVar14;
    *(undefined4 *)(iVar13 + 0x24) = uVar15;
    iVar13 = puVar3[8];
    *(int *)(iVar13 + 0x20) = (int)uVar18;
    *(int *)(iVar13 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
    local_8c = s_cState_CollectSandRod_0017dd20;
    local_90 = iVar10;
    func_0010BEC4((int)puVar3,5,&local_90);
    iVar10 = puVar3[6];
    piVar2 = *(int **)(iVar4 + 0x70);
    uVar9 = *(undefined4 *)(iVar4 + 0x74);
    uVar14 = *(undefined4 *)(iVar4 + 0x78);
    *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar4 + 0x6c);
    *(int **)(iVar10 + 0x2c) = piVar2;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x28) = uVar9;
    *(undefined4 *)(iVar4 + 0x2c) = uVar14;
    pfVar11 = DAT_0017dd38;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x28) = (int)uVar18;
    *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
    func_00115C54((float *)(puVar3 + 0x2c),(float *)(puVar3 + -0x1e0),pfVar11);
    fparam_0 = DAT_0017dd3c;
    puVar3[-0xeb] = ALBW_AS_U32(DAT_0017dd3c);
    puVar3[-0xea] = ALBW_AS_U32(fparam_0);
    puVar3[-0xe9] = ALBW_AS_U32(fparam_0);
    puVar3[0x2f] = puVar3[-0x1e0];
    puVar3[0x30] = puVar3[-0x1df];
    puVar3[0x31] = puVar3[-0x1de];
    if (*(short *)(puVar3 + -0x1d7) == 1) {
      *(undefined1 *)((int)puVar3 + 0xfa) = 1;
      pfVar11 = (float *)0xffffffff;
      puVar3[-0x12a] = puVar3[-0x12a] | 2;
      *(uint *)(puVar3[10] + 0x164) = *(uint *)(puVar3[10] + 0x164) | 1;
      func_004CF864(puVar3[10],1,0xffffffff,fparam_0);
      *(uint *)(puVar3[10] + 0x164) = *(uint *)(puVar3[10] + 0x164) | 0x200000;
      func_00659168(puVar3,2);
      uVar9 = extraout_r1_00;
    }
    else if (*(short *)(puVar3 + -0x1d7) == 2) {
      puVar3[-0x12a] = puVar3[-0x12a] | 2;
      func_00659168(puVar3,4);
      uVar9 = extraout_r1_01;
    }
    else {
      func_00659168(puVar3,0);
      uVar9 = extraout_r1;
    }
    func_0017BFB0((int)puVar6,uVar9,pfVar11,piVar2);
  }
  return puVar6;
}

