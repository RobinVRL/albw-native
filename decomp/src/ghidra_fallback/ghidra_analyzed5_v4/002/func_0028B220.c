#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern undefined4 uRam0028b9fc;
extern undefined4 uRam0028ba00;
extern int DAT_0028b944;
extern undefined4 *DAT_0028b948;
extern undefined4 DAT_0028b94c;
extern undefined4 *DAT_0028b950;
extern int DAT_0028b954;
extern undefined *DAT_0028b958;
extern int DAT_0028b96c;
extern undefined4 DAT_0028bab0;
extern char s_cState_Binding_0028b95c[];
extern char s_cState_FallEd_0028b990[];
extern char s_cState_FallMd_0028b980[];
extern char s_cState_FallSt_0028b970[];
extern char s_cState_Lifted_0028b9bc[];
extern char s_cState_Purple_0028b9a0[];
extern char s_cState_Thrown_0028b9cc[];
extern char s_cState_Valley_0028b9dc[];
extern char s_cState_Wait_0028b9b0[];
extern char s_cState_Water_0028b9ec[];

// USA 0028B220 <- EU 0028B248 (Ghidra, non-matching)
// GLOBAL DAT_0028b944 int
// GLOBAL DAT_0028b948 undefined4 *
// GLOBAL DAT_0028b94c undefined4
// GLOBAL DAT_0028b950 undefined4 *
// GLOBAL DAT_0028b954 int
// GLOBAL DAT_0028b958 undefined *
// GLOBAL DAT_0028b96c int
// GLOBAL DAT_0028bab0 undefined4
// GLOBAL UNK_0028b9fc undefined4
// GLOBAL UNK_0028ba00 undefined4
// GLOBAL s_cState_Binding_0028b95c string
// GLOBAL s_cState_FallEd_0028b990 string
// GLOBAL s_cState_FallMd_0028b980 string
// GLOBAL s_cState_FallSt_0028b970 string
// GLOBAL s_cState_Lifted_0028b9bc string
// GLOBAL s_cState_Purple_0028b9a0 string
// GLOBAL s_cState_Thrown_0028b9cc string
// GLOBAL s_cState_Valley_0028b9dc string
// GLOBAL s_cState_Wait_0028b9b0 string
// GLOBAL s_cState_Water_0028b9ec string

int func_0028B220(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  int iVar23;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(uint *)(albw_frame + 0x4))
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define aiStack_90 ((int *)(albw_frame + 0x10))
  #define local_34 (*(undefined4 * *)(albw_frame + 0x6c))
  piVar2 = (int *)func_001E4B08(param_1,param_2,0);
  iVar5 = DAT_0028b944;
  *piVar2 = DAT_0028b944;
  piVar2[200] = iVar5 + 0x78;
  puVar3 = func_0010A794(piVar2 + 0x13d);
  uVar15 = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  iVar4 = func_004EE484(puVar3 + 9);
  iVar14 = iVar4 + -0x518;
  iVar5 = func_0054D89C(iVar14,0);
  puVar3 = DAT_0028b948;
  *(int *)(iVar4 + 100) = iVar5;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  uVar10 = puVar3[1];
  *(undefined4 *)(iVar4 + 0x78) = *puVar3;
  *(undefined4 *)(iVar4 + 0x7c) = uVar10;
  uVar10 = DAT_0028b94c;
  local_34 = (undefined4 *)(iVar4 + 0x80);
  *(undefined4 *)(iVar4 + 0x70) = DAT_0028b94c;
  *(int *)(iVar4 + 0x74) = iVar14;
  puVar17 = (undefined4 *)(iVar4 + 0x90);
  uVar18 = puVar3[3];
  *(undefined4 *)(iVar4 + 0x88) = puVar3[2];
  *(undefined4 *)(iVar4 + 0x8c) = uVar18;
  *local_34 = uVar10;
  *(int *)(iVar4 + 0x84) = iVar14;
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  *(uint *)(iVar4 + 0x90) = param_2[4];
  *(uint *)(iVar4 + 0x94) = uVar11;
  *(uint *)(iVar4 + 0x98) = uVar12;
  uVar10 = DAT_0028b950[1];
  uVar18 = DAT_0028b950[2];
  *(undefined4 *)(iVar4 + 0x9c) = *DAT_0028b950;
  *(undefined4 *)(iVar4 + 0xa0) = uVar10;
  *(undefined4 *)(iVar4 + 0xa4) = uVar18;
  *(int *)(iVar4 + 0xb0) = iVar4 + -0x13c;
  *(int *)(iVar4 + 0xa8) = iVar14;
  *(undefined4 **)(iVar4 + 0xac) = puVar17;
  *(undefined1 *)(iVar4 + 0xb4) = 0;
  *(undefined1 *)(iVar4 + 0xb5) = 1;
  *(undefined1 *)(iVar4 + 0xb6) = 0;
  *(undefined1 *)(iVar4 + 0xb7) = 0;
  *(undefined1 *)(iVar4 + 0xb8) = 1;
  *(undefined1 *)(iVar4 + 0xbc) = 0;
  *(undefined1 *)(iVar4 + 0xbd) = 0;
  *(undefined1 *)(iVar4 + 0xbe) = 0;
  *(undefined1 *)(iVar4 + 0xbf) = 0;
  *(undefined1 *)(iVar4 + 0xc0) = 0;
  *(undefined4 **)(iVar4 + -300) = (undefined4 *)(iVar4 + 0x70);
  iVar5 = func_0014E428(iVar14,1,0,0,1,0,1);
  *(int *)(iVar4 + -0xa0) = iVar5;
  piVar2 = (int *)(iVar4 + -0xa0);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),*(uint *)(iVar4 + -0x130),(float *)(iVar4 + -0x148));
  iVar5 = *(int *)(iVar4 + -0xa0);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x74) = *puVar17;
  *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar4 + 0x94);
  *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar4 + 0x98);
  uVar10 = func_0014E904(iVar14,4,1);
  *(undefined4 *)(iVar4 + 0x68) = uVar10;
  iVar5 = DAT_0028b954;
  iVar6 = *(int *)(*(int *)(iVar4 + -0x248) + 0x1c8);
  do {
    func_00169688(*(uint **)(iVar4 + 0x68),uVar15,(int *)(iVar5 + uVar15 * 8),iVar6);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 4);
  func_0016A02C(*(int *)(iVar4 + 0x68),-1,(int *)0xffffffff,0);
  puVar7 = (uint *)func_002C11E8(aiStack_90,0,10,0);
  func_0016898C(*(int *)(iVar4 + 0x68),puVar7);
  func_004CEAF0(*(int *)(iVar4 + -0xa0));
  *(uint *)(*piVar2 + 0x164) = *(uint *)(*piVar2 + 0x164) | 0x90000;
  func_003249E0(iVar14,0);
  puVar16 = (undefined4 *)(iVar4 + -0x24);
  *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(iVar4 + -0x10c);
  iVar23 = 10;
  *(undefined1 *)(iVar4 + -0x1e) = 10;
  *(int *)(iVar4 + -0x10) = iVar14;
  iVar5 = func_0010BA78(0xa0);
  *(int *)(iVar4 + -0xc) = iVar5;
  puVar3 = DAT_0028b948;
  *(uint *)(iVar4 + -8) = iVar5 + (uint)*(byte *)(iVar4 + -0x1e) * 8;
  iVar6 = 10;
  puVar8 = (undefined4 *)(iVar5 + -8);
  do {
    uVar10 = puVar3[0x33];
    iVar6 = iVar6 + -1;
    puVar8[2] = puVar3[0x32];
    puVar8[3] = uVar10;
    uVar10 = puVar3[0x33];
    puVar8[4] = puVar3[0x32];
    puVar8[5] = uVar10;
    puVar8 = puVar8 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(iVar4 + -0x1e);
  uVar11 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar11 << 3);
  *(undefined4 **)(iVar4 + -4) = puVar8;
  if (uVar11 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar3[9];
      *puVar8 = puVar3[8];
      puVar8[1] = uVar10;
      puVar9 = puVar8;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar10 = puVar3[9];
      puVar9[2] = puVar3[8];
      puVar9[3] = uVar10;
      uVar10 = puVar3[9];
      puVar9[4] = puVar3[8];
      puVar9[5] = uVar10;
      puVar9 = puVar9 + 4;
    }
  }
  if (0 < iVar23) {
    puVar8 = (undefined4 *)func_0010CEE0(iVar23 * 0x24 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0x24;
      puVar8[1] = iVar23;
      iVar5 = func_00100118((int)(puVar8 + 2),DAT_0028b958,0x24,iVar23);
    }
    if (iVar5 != 0) {
      *(int *)(iVar4 + -0x18) = iVar5;
      *(int *)(iVar4 + -0x1c) = iVar23;
    }
  }
  *(undefined4 **)(iVar4 + -0x1c4) = puVar16;
  *(undefined2 *)(iVar4 + -0x1be) = 10;
  iVar5 = DAT_0028b96c;
  local_94 = s_cState_Binding_0028b95c;
  local_98 = DAT_0028b96c;
  func_0010BEC4((int)puVar16,0,&local_98);
  puVar8 = *(undefined4 **)(iVar4 + -0xc);
  uVar19 = puVar3[7];
  uVar10 = puVar3[5];
  uVar18 = puVar3[6];
  uVar22 = *(undefined8 *)(puVar3 + 8);
  *puVar8 = puVar3[4];
  puVar8[1] = uVar10;
  puVar8 = *(undefined4 **)(iVar4 + -8);
  *puVar8 = uVar18;
  puVar8[1] = uVar19;
  puVar8 = *(undefined4 **)(iVar4 + -4);
  *puVar8 = (int)uVar22;
  puVar8[1] = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_FallSt_0028b970;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,1,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0xb];
  uVar18 = puVar3[0xc];
  uVar19 = puVar3[0xd];
  *(undefined4 *)(iVar6 + 8) = puVar3[10];
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 8) = uVar18;
  *(undefined4 *)(iVar6 + 0xc) = uVar19;
  iVar6 = *(int *)(iVar4 + -4);
  *(int *)(iVar6 + 8) = (int)uVar22;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_FallMd_0028b980;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,2,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0xf];
  uVar18 = puVar3[0x10];
  uVar19 = puVar3[0x11];
  *(undefined4 *)(iVar6 + 0x10) = puVar3[0xe];
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x10) = uVar18;
  *(undefined4 *)(iVar6 + 0x14) = uVar19;
  iVar6 = *(int *)(iVar4 + -4);
  *(int *)(iVar6 + 0x10) = (int)uVar22;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_FallEd_0028b990;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,3,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0x13];
  uVar18 = puVar3[0x14];
  uVar19 = puVar3[0x15];
  *(undefined4 *)(iVar6 + 0x18) = puVar3[0x12];
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x18) = uVar18;
  *(undefined4 *)(iVar6 + 0x1c) = uVar19;
  iVar6 = *(int *)(iVar4 + -4);
  *(int *)(iVar6 + 0x18) = (int)uVar22;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_Purple_0028b9a0;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,4,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0x17];
  uVar18 = puVar3[0x18];
  uVar19 = puVar3[0x19];
  *(undefined4 *)(iVar6 + 0x20) = puVar3[0x16];
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x20) = uVar18;
  *(undefined4 *)(iVar6 + 0x24) = uVar19;
  iVar6 = *(int *)(iVar4 + -4);
  *(int *)(iVar6 + 0x20) = (int)uVar22;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar22 >> 0x20);
  local_94 = s_cState_Wait_0028b9b0;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,5,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0x1b];
  uVar18 = puVar3[0x1c];
  uVar19 = puVar3[0x1d];
  uVar20 = puVar3[0x1e];
  uVar21 = puVar3[0x1f];
  *(undefined4 *)(iVar6 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x28) = uVar18;
  *(undefined4 *)(iVar6 + 0x2c) = uVar19;
  iVar6 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar6 + 0x28) = uVar20;
  *(undefined4 *)(iVar6 + 0x2c) = uVar21;
  local_94 = s_cState_Lifted_0028b9bc;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,6,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar19 = puVar3[0x22];
  uVar10 = puVar3[0x23];
  uVar18 = puVar3[8];
  uVar21 = puVar3[9];
  uVar20 = puVar3[0x21];
  *(undefined4 *)(iVar6 + 0x30) = puVar3[0x20];
  *(undefined4 *)(iVar6 + 0x34) = uVar20;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x30) = uVar19;
  *(undefined4 *)(iVar6 + 0x34) = uVar10;
  iVar6 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar6 + 0x30) = uVar18;
  *(undefined4 *)(iVar6 + 0x34) = uVar21;
  local_94 = s_cState_Thrown_0028b9cc;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,7,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0x25];
  uVar18 = puVar3[0x28];
  uVar20 = puVar3[0x26];
  uVar21 = puVar3[0x27];
  uVar19 = puVar3[0x29];
  *(undefined4 *)(iVar6 + 0x38) = puVar3[0x24];
  *(undefined4 *)(iVar6 + 0x3c) = uVar10;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x38) = uVar20;
  *(undefined4 *)(iVar6 + 0x3c) = uVar21;
  iVar6 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar6 + 0x38) = uVar18;
  *(undefined4 *)(iVar6 + 0x3c) = uVar19;
  local_94 = s_cState_Valley_0028b9dc;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,8,&local_98);
  iVar6 = *(int *)(iVar4 + -0xc);
  uVar19 = puVar3[0x2b];
  uVar10 = puVar3[0x2c];
  uVar18 = puVar3[0x2d];
  uVar21 = puVar3[8];
  uVar20 = puVar3[9];
  *(undefined4 *)(iVar6 + 0x40) = puVar3[0x2a];
  *(undefined4 *)(iVar6 + 0x44) = uVar19;
  iVar6 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar6 + 0x40) = uVar10;
  *(undefined4 *)(iVar6 + 0x44) = uVar18;
  iVar6 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar6 + 0x40) = uVar21;
  *(undefined4 *)(iVar6 + 0x44) = uVar20;
  local_94 = s_cState_Water_0028b9ec;
  local_98 = iVar5;
  func_0010BEC4((int)puVar16,9,&local_98);
  iVar5 = *(int *)(iVar4 + -0xc);
  uVar10 = puVar3[0x2f];
  uVar18 = puVar3[0x30];
  uVar19 = puVar3[0x31];
  *(undefined4 *)(iVar5 + 0x48) = puVar3[0x2e];
  *(undefined4 *)(iVar5 + 0x4c) = uVar10;
  iVar5 = *(int *)(iVar4 + -8);
  *(undefined4 *)(iVar5 + 0x48) = uVar18;
  *(undefined4 *)(iVar5 + 0x4c) = uVar19;
  iVar5 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar5 + 0x48) = uVar21;
  *(undefined4 *)(iVar5 + 0x4c) = uVar20;
  if (*(short *)((int)param_2 + 0x2a) == 0) {
    func_00661708(puVar16,0);
  }
  else {
    func_00661708(puVar16,5);
    piVar13 = (int *)0x0;
    puVar7 = (uint *)func_002C11E8(aiStack_90,3,0,0);
    iVar6 = *(int *)(iVar4 + 0x68);
    func_0016898C(iVar6,puVar7);
    func_00151148(*(int *)(iVar4 + 100),1);
    uVar10 = uRam0028ba00;
    *(undefined4 *)(*(int *)(iVar4 + -0xa0) + 0x134) = uRam0028b9fc;
    *(undefined4 *)(iVar4 + 0x98) = uVar10;
    *(undefined4 *)(iVar4 + 0x94) = uVar10;
    *(undefined4 *)(iVar4 + 0x90) = uVar10;
    iVar5 = *piVar2;
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar5 + 0x74) = *puVar17;
    *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar4 + 0x94);
    uVar10 = *(undefined4 *)(iVar4 + 0x98);
    *(undefined4 *)(iVar5 + 0x7c) = uVar10;
    func_00169A80(*(int **)(iVar4 + 0x68),uVar10,iVar6,piVar13);
    func_00168E9C(*(int **)(iVar4 + 0x68),*(int *)(iVar4 + -0xa0),(int *)0x0);
    func_004CEAF0(*piVar2);
  }
  local_9c = *(uint *)(iVar4 + -0x24c);
  func_0014EB8C(iVar4,*(undefined4 *)(iVar4 + 0x6c),*(undefined2 **)(iVar4 + -0x178),&local_9c,
                *(undefined2 *)(iVar4 + -0x4c4),local_34,(short)DAT_0028bab0);
  *(undefined1 *)(iVar4 + 0x61) = 0;
  *(undefined1 *)(iVar4 + -0x14c) = 1;
  return iVar14;
}

