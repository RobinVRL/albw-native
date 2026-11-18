#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_00252578(int param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00582250(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065FCF8(undefined4 *param_1,undefined1 param_2);
extern int iRam002534b0;
extern undefined4 uRam00253554;
extern int *piRam002530f0;
extern int *piRam00253550;
extern undefined4 *puRam002530f4;
extern int DAT_002530b0;
extern undefined4 *DAT_002530b4;
extern uint DAT_002530b8;
extern undefined4 *DAT_002530bc;
extern undefined4 DAT_002530c0;
extern undefined DAT_002530c4;
extern int DAT_002530e0;
extern undefined4 DAT_002530e4;
extern undefined4 DAT_002530e8;
extern int DAT_002530ec;
extern char s_cState_FallWater_002534f4[];
extern char s_cState_GoDownWater_0025353c[];
extern char s_cState_GoUpWater_00253528[];
extern char s_cState_Hide_0025351c[];
extern char s_cState_Lifted_002534c0[];
extern char s_cState_ParentChase_002534e0[];
extern char s_cState_StartEvent_00253508[];
extern char s_cState_Thrown_002534d0[];
extern char s_cState_Wait_002534b4[];

// USA 00252C84 <- EU 00252CAC (Ghidra, non-matching)
// GLOBAL DAT_002530b0 int
// GLOBAL DAT_002530b4 undefined4 *
// GLOBAL DAT_002530b8 uint
// GLOBAL DAT_002530bc undefined4 *
// GLOBAL DAT_002530c0 undefined4
// GLOBAL DAT_002530c4 undefined
// GLOBAL DAT_002530e0 int
// GLOBAL DAT_002530e4 undefined4
// GLOBAL DAT_002530e8 undefined4
// GLOBAL DAT_002530ec int
// GLOBAL UNK_002530f0 int *
// GLOBAL UNK_002530f4 undefined *
// GLOBAL UNK_002534b0 int
// GLOBAL UNK_00253550 int *
// GLOBAL UNK_00253554 undefined4
// GLOBAL s_cState_FallWater_002534f4 string
// GLOBAL s_cState_GoDownWater_0025353c string
// GLOBAL s_cState_GoUpWater_00253528 string
// GLOBAL s_cState_Hide_0025351c string
// GLOBAL s_cState_Lifted_002534c0 string
// GLOBAL s_cState_ParentChase_002534e0 string
// GLOBAL s_cState_StartEvent_00253508 string
// GLOBAL s_cState_Thrown_002534d0 string
// GLOBAL s_cState_Wait_002534b4 string

undefined4 * func_00252C84(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define aiStack_90 ((int *)(albw_frame + 0x10))
  #define auStack_34 ((uint *)(albw_frame + 0x6c))
  piVar4 = (int *)func_001E4B08(param_1,param_2,1);
  uVar15 = 0;
  iVar12 = DAT_002530b0 + 0x78;
  *piVar4 = DAT_002530b0;
  piVar4[200] = iVar12;
  piVar4[0x13d] = 0;
  piVar4[0x13e] = 0;
  puVar5 = func_0010A794(piVar4 + 0x13f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar12 = func_0054D89C((int)(puVar5 + -0x13f),0);
  puVar5[9] = iVar12;
  puVar7 = DAT_002530b4;
  puVar5[10] = 0;
  uVar17 = DAT_002530b8;
  uVar14 = puVar7[1];
  uVar18 = puVar7[2];
  uVar20 = (ulonglong)DAT_002530b8;
  puVar5[0xb] = *puVar7;
  puVar5[0xc] = uVar14;
  puVar5[0xd] = uVar18;
  puVar2 = DAT_002530bc;
  uVar14 = puVar7[1];
  uVar18 = puVar7[2];
  puVar5[0xe] = *puVar7;
  puVar5[0xf] = uVar14;
  puVar5[0x10] = uVar18;
  uVar14 = puVar7[1];
  uVar18 = puVar7[2];
  puVar5[0x11] = *puVar7;
  puVar5[0x12] = uVar14;
  puVar5[0x13] = uVar18;
  iVar12 = DAT_002530e0;
  puVar5[0x14] = param_2[2];
  puVar5[0x15] = uVar17;
  puVar5[0x16] = 0;
  uVar14 = puVar2[1];
  puVar5[0x19] = *puVar2;
  puVar5[0x1a] = uVar14;
  puVar5[0x17] = DAT_002530c0;
  puVar5[0x18] = puVar5 + -0x13f;
  puVar5[0x1b] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  uVar14 = *puVar7;
  uVar18 = puVar7[1];
  puVar5[0x21] = puVar7[2];
  puVar5[0x1f] = uVar14;
  puVar5[0x20] = uVar18;
  puVar5[0x22] = 0;
  local_94 = &DAT_002530c4;
  local_98 = iVar12;
  iVar6 = func_002BE9D4(puVar5 + 0x23,&local_98,0,0,1);
  puVar7 = func_004EDC9C((undefined4 *)(iVar6 + 0x2cc));
  puVar5 = puVar7 + -0x215;
  puVar7[0x12] = puVar7[-0x121];
  puVar7[0x13] = puVar7[-0x120];
  puVar7[0x14] = puVar7[-0x11f];
  *(undefined1 *)(puVar7 + 0x15) = 0;
  puVar7[0x17] = 0;
  uVar14 = puVar2[0x2f];
  puVar7[0x18] = puVar2[0x2e];
  puVar7[0x19] = uVar14;
  puVar7[0x16] = DAT_002530e4;
  uVar14 = puVar2[3];
  puVar7[0x1c] = puVar2[2];
  puVar7[0x1d] = uVar14;
  puVar7[0x1a] = DAT_002530e8;
  puVar7[0x1b] = puVar5;
  *(undefined1 *)(puVar7 + 0x1e) = 0;
  puVar7[-0x11a] = puVar7 + -0xbf;
  uVar14 = func_0014E428((int)puVar5,1,0,0,1,0,0);
  puVar7[-0xd8] = uVar14;
  uVar14 = func_0014E904((int)puVar5,6,1);
  iVar6 = DAT_002530ec;
  puVar7[-0xd7] = uVar14;
  do {
    func_00169688((uint *)puVar7[-0xd7],uVar15,(int *)(iVar6 + uVar15 * 8),
                  *(int *)(puVar7[-0x161] + 0x1c8));
    uVar14 = (undefined4)uVar20;
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 6);
  func_0016A02C(puVar7[-0xd7],-1,(int *)0xffffffff,0);
  piVar4 = (int *)0x0;
  puVar8 = (uint *)func_002C11E8(aiStack_90,0,10,0);
  iVar13 = puVar7[-0xd7];
  func_0016898C(iVar13,puVar8);
  iVar6 = puVar7[-0xd7];
  uVar18 = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x10) = uVar14;
  func_00169A80((int *)puVar7[-0xd7],uVar18,iVar13,piVar4);
  puVar7[-0xf7] = puVar7[-0xd8];
  func_00151148(puVar7[-0xcd],1);
  func_003249E0((int)puVar5,0);
  puVar7[-0xc0] = puVar7[-0x112];
  *(undefined2 *)(puVar7[-0x112] + 0x28) = 0xe4;
  puVar7[6] = puVar7[-0xc0];
  auStack_34[0] = puVar7[-0x162];
  func_004EDAD0((int)puVar7,auStack_34);
  *(undefined2 *)(puVar7 + 0xb) = *(undefined2 *)(puVar7 + -0x200);
  func_004A7F00(*piRam002530f0,(int)puVar7,0);
  func_00324964((int)puVar5);
  *(undefined1 *)((int)puVar7 + -0x352) = 9;
  puVar16 = puVar7 + -0xd6;
  puVar7[-0xd1] = puVar5;
  iVar6 = func_0010BA78(0x90);
  puVar7[-0xd0] = iVar6;
  puVar2 = DAT_002530bc;
  puVar7[-0xcf] = iVar6 + (uint)*(byte *)((int)puVar7 + -0x352) * 8;
  iVar13 = 9;
  puVar9 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = puVar2[0x2d];
    iVar13 = iVar13 + -1;
    puVar9[2] = puVar2[0x2c];
    puVar9[3] = uVar14;
    uVar14 = puVar2[0x2d];
    puVar9[4] = puVar2[0x2c];
    puVar9[5] = uVar14;
    puVar9 = puVar9 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0x352);
  uVar17 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar7[-0xce] = puVar9;
  if (uVar17 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[9];
      *puVar9 = puVar2[8];
      puVar9[1] = uVar14;
      puVar10 = puVar9;
    }
    for (iVar6 = (int)uVar17 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = puVar2[9];
      puVar10[2] = puVar2[8];
      puVar10[3] = uVar14;
      uVar14 = puVar2[9];
      puVar10[4] = puVar2[8];
      puVar10[5] = uVar14;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar6 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 9;
    iVar6 = func_00100118((int)(puVar9 + 2),puRam002530f4,0x24,9);
  }
  if (iVar6 != 0) {
    puVar7[-0xd3] = iVar6;
    puVar7[-0xd4] = 9;
  }
  iVar6 = iRam002534b0;
  puVar7[-0x140] = puVar16;
  *(undefined2 *)(iVar6 + (int)puVar5) = 9;
  local_94 = s_cState_Wait_002534b4;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,0,&local_98);
  puVar9 = (undefined4 *)puVar7[-0xd0];
  uVar14 = puVar2[5];
  uVar18 = puVar2[6];
  uVar19 = puVar2[7];
  uVar21 = *(undefined8 *)(puVar2 + 8);
  *puVar9 = puVar2[4];
  puVar9[1] = uVar14;
  puVar9 = (undefined4 *)puVar7[-0xcf];
  *puVar9 = uVar18;
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar7[-0xce];
  *puVar9 = (int)uVar21;
  puVar9[1] = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_Lifted_002534c0;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,1,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar19 = puVar2[0xb];
  uVar14 = puVar2[0xc];
  uVar18 = puVar2[0xd];
  *(undefined4 *)(iVar6 + 8) = puVar2[10];
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 8) = uVar14;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 8) = (int)uVar21;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_Thrown_002534d0;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,2,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar19 = puVar2[0xf];
  uVar14 = puVar2[0x10];
  uVar18 = puVar2[0x11];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[0xe];
  *(undefined4 *)(iVar6 + 0x14) = uVar19;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x10) = (int)uVar21;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_ParentChase_002534e0;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,5,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar18 = puVar2[0x13];
  uVar19 = puVar2[0x14];
  uVar14 = puVar2[0x15];
  *(undefined4 *)(iVar6 + 0x28) = puVar2[0x12];
  *(undefined4 *)(iVar6 + 0x2c) = uVar18;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x28) = uVar19;
  *(undefined4 *)(iVar6 + 0x2c) = uVar14;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x28) = (int)uVar21;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_FallWater_002534f4;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,4,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar14 = puVar2[0x17];
  uVar18 = puVar2[0x18];
  uVar19 = puVar2[0x19];
  *(undefined4 *)(iVar6 + 0x20) = puVar2[0x16];
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x20) = uVar18;
  *(undefined4 *)(iVar6 + 0x24) = uVar19;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x20) = (int)uVar21;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_StartEvent_00253508;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,6,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar18 = puVar2[0x1b];
  uVar19 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  *(undefined4 *)(iVar6 + 0x30) = puVar2[0x1a];
  *(undefined4 *)(iVar6 + 0x34) = uVar18;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x30) = uVar19;
  *(undefined4 *)(iVar6 + 0x34) = uVar14;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x30) = (int)uVar21;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_Hide_0025351c;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,3,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar19 = puVar2[0x1f];
  uVar14 = puVar2[0x20];
  uVar18 = puVar2[0x21];
  *(undefined4 *)(iVar6 + 0x18) = puVar2[0x1e];
  *(undefined4 *)(iVar6 + 0x1c) = uVar19;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x18) = (int)uVar21;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_GoUpWater_00253528;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,7,&local_98);
  iVar6 = puVar7[-0xd0];
  uVar14 = puVar2[0x23];
  uVar18 = puVar2[0x24];
  uVar19 = puVar2[0x25];
  *(undefined4 *)(iVar6 + 0x38) = puVar2[0x22];
  *(undefined4 *)(iVar6 + 0x3c) = uVar14;
  iVar6 = puVar7[-0xcf];
  *(undefined4 *)(iVar6 + 0x38) = uVar18;
  *(undefined4 *)(iVar6 + 0x3c) = uVar19;
  iVar6 = puVar7[-0xce];
  *(int *)(iVar6 + 0x38) = (int)uVar21;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar21 >> 0x20);
  local_94 = s_cState_GoDownWater_0025353c;
  local_98 = iVar12;
  func_0010BEC4((int)puVar16,8,&local_98);
  iVar12 = puVar7[-0xd0];
  uVar14 = puVar2[0x27];
  uVar18 = puVar2[0x28];
  uVar19 = puVar2[0x29];
  *(undefined4 *)(iVar12 + 0x40) = puVar2[0x26];
  *(undefined4 *)(iVar12 + 0x44) = uVar14;
  iVar12 = puVar7[-0xcf];
  *(undefined4 *)(iVar12 + 0x40) = uVar18;
  *(undefined4 *)(iVar12 + 0x44) = uVar19;
  iVar12 = puVar7[-0xce];
  *(int *)(iVar12 + 0x40) = (int)uVar21;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar21 >> 0x20);
  puVar7[-0xb9] = param_2[7];
  func_0065FCF8(puVar16,0);
  if ((-1 < (int)param_2[0xa7]) && (-1 < (int)param_2[0xa8])) {
    puVar8 = (uint *)func_00582250(*piRam00253550);
    if (param_2[0xa7] < *puVar8) {
      iVar12 = *(int *)(puVar8[2] + param_2[0xa7] * 4);
    }
    else {
      iVar12 = 0;
    }
    piVar4 = *(int **)(iVar12 + 0x28);
    piVar11 = piVar4 + *(int *)(iVar12 + 0x20);
    for (; piVar4 != piVar11; piVar4 = piVar4 + 1) {
      iVar12 = *piVar4;
      uVar14 = *(undefined4 *)(iVar12 + 0x1c);
      uVar18 = *(undefined4 *)(iVar12 + 0x20);
      puVar7[-0xc5] = *(undefined4 *)(iVar12 + 0x18);
      puVar7[-0xc4] = uVar14;
      puVar7[-0xc3] = uVar18;
    }
  }
  if ((*(short *)((int)puVar7 + -0x81e) != 0) && (bVar3 = func_00588BF0((int)puVar5,0), bVar3)) {
    func_0065FCF8(puVar16,5);
  }
  uVar18 = puVar2[0x2a];
  uVar19 = puVar2[0x2b];
  puVar7[0x17] = puVar5;
  uVar14 = uRam00253554;
  puVar7[0x18] = uVar18;
  puVar7[0x19] = uVar19;
  puVar7[-5] = puVar7 + 0x16;
  puVar7[-0xae] = puVar7 + 0x1a;
  puVar7[-0x12a] = uVar14;
  func_00252578((int)puVar5);
  puVar7[-0x15d] = puVar7[-0x15d] | 2;
  func_004ECF6C((int)puVar5);
  return puVar5;
}

