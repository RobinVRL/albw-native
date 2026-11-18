#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0033CB1C(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033d868;
extern undefined4 DAT_0033d86c;
extern undefined4 *DAT_0033d870;
extern undefined4 DAT_0033d874;
extern undefined4 DAT_0033d878;
extern undefined4 DAT_0033d87c;
extern undefined4 *DAT_0033d880;
extern undefined4 DAT_0033d884;
extern float DAT_0033d888;
extern float DAT_0033d88c;
extern uint *DAT_0033d890;
extern undefined4 *DAT_0033d894;
extern undefined4 DAT_0033d898;
extern int *DAT_0033d89c;
extern undefined4 *DAT_0033d8a0;
extern int DAT_0033d8a4;
extern undefined *DAT_0033d8a8;
extern int DAT_0033d8ac;
extern int DAT_0033d8c0;
extern char s_cState_Balance_0033dad8[];
extern char s_cState_Delete_0033daf8[];
extern char s_cState_Hit_0033dacc[];
extern char s_cState_PreShot_0033d8b0[];
extern char s_cState_Reflect_0033dae8[];
extern char s_cState_Shot_0033dac0[];

// USA 0033D494 <- EU 0033D470 (Ghidra, non-matching)
// GLOBAL DAT_0033d868 int
// GLOBAL DAT_0033d86c undefined4
// GLOBAL DAT_0033d870 undefined4 *
// GLOBAL DAT_0033d874 undefined4
// GLOBAL DAT_0033d878 undefined4
// GLOBAL DAT_0033d87c undefined4
// GLOBAL DAT_0033d880 undefined4 *
// GLOBAL DAT_0033d884 undefined4
// GLOBAL DAT_0033d888 float
// GLOBAL DAT_0033d88c float
// GLOBAL DAT_0033d890 uint *
// GLOBAL DAT_0033d894 undefined4 *
// GLOBAL DAT_0033d898 undefined4
// GLOBAL DAT_0033d89c int *
// GLOBAL DAT_0033d8a0 undefined4 *
// GLOBAL DAT_0033d8a4 int
// GLOBAL DAT_0033d8a8 undefined *
// GLOBAL DAT_0033d8ac int
// GLOBAL DAT_0033d8c0 int
// GLOBAL s_cState_Balance_0033dad8 string
// GLOBAL s_cState_Delete_0033daf8 string
// GLOBAL s_cState_Hit_0033dacc string
// GLOBAL s_cState_PreShot_0033d8b0 string
// GLOBAL s_cState_Reflect_0033dae8 string
// GLOBAL s_cState_Shot_0033dac0 string

int func_0033D494(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0033d868;
  *piVar5 = DAT_0033d868;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  uVar14 = DAT_0033d86c;
  puVar6[0xe] = puVar6[-0xf];
  puVar6[0xf] = puVar6[-0xe];
  puVar6[0x10] = puVar6[-0xd];
  uVar16 = DAT_0033d874;
  puVar6[0x11] = puVar6[-0xf];
  puVar6[0x12] = puVar6[-0xe];
  puVar6[0x13] = puVar6[-0xd];
  puVar2 = DAT_0033d870;
  *(undefined1 *)(puVar6 + 0x14) = 0;
  *(undefined1 *)((int)puVar6 + 0x51) = 0;
  puVar6[0x15] = uVar14;
  uVar17 = DAT_0033d878;
  uVar13 = puVar2[1];
  uVar15 = puVar2[2];
  puVar6[0x16] = *puVar2;
  puVar6[0x17] = uVar13;
  puVar6[0x18] = uVar15;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  puVar6[0x1b] = uVar16;
  puVar6[0x1c] = uVar17;
  puVar6[0x1a] = 0;
  uVar17 = DAT_0033d87c;
  puVar6[0x1d] = 0;
  iVar7 = func_004EE484(puVar6 + 0x1e);
  puVar2 = DAT_0033d880;
  iVar8 = iVar7 + -0x484;
  uVar13 = *DAT_0033d880;
  uVar15 = DAT_0033d880[1];
  *(undefined4 *)(iVar7 + 100) = DAT_0033d884;
  *(int *)(iVar7 + 0x68) = iVar8;
  *(undefined4 *)(iVar7 + 0x6c) = uVar13;
  *(undefined4 *)(iVar7 + 0x70) = uVar15;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  *(undefined4 *)(iVar7 + 0x78) = 0;
  *(undefined4 *)(iVar7 + 0x80) = 0;
  *(undefined4 *)(iVar7 + 0x88) = 0;
  *(undefined4 *)(iVar7 + 0x8c) = 0;
  *(undefined1 *)(iVar7 + 0x90) = 0;
  *(undefined4 *)(iVar7 + 0x9c) = 0;
  *(undefined4 *)(iVar7 + 0xa0) = 0;
  *(undefined4 *)(iVar7 + 0xa4) = uVar17;
  fVar20 = DAT_0033d88c;
  fVar3 = DAT_0033d888;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + -0x458),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar7 + -0x20) = fVar19 * DAT_0033d888;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + -0x456),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar7 + -0x1c) = fVar19 * fVar3 - fVar20;
  *(undefined4 *)(iVar7 + -0x18) = uVar14;
  func_0033CB1C(iVar8);
  puVar6 = (undefined4 *)func_0054D964(iVar8,0);
  if (((*DAT_0033d890 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_0033d890), iVar9 != 0)) {
    *DAT_0033d894 = DAT_0033d898;
  }
  if ((puVar6 == (undefined4 *)0x0) ||
     (iVar9 = (**(code **)*puVar6)(puVar6,DAT_0033d894), iVar9 == 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  piVar5 = (int *)(iVar7 + -4);
  *(undefined4 **)(iVar7 + -4) = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar6 + 10) = 0xe0;
    local_3c = *(uint *)(iVar7 + -0x1b8);
    func_0014EB8C(iVar7,*piVar5,*(undefined2 **)(iVar7 + -0xe4),&local_3c,
                  *(undefined2 *)(iVar7 + -0x430),iVar7 + 100,(short)uVar16);
    iVar9 = *piVar5;
    *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 4);
    *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar9 + 8);
    *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar9 + 0xc);
    *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar9 + 4);
    *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 8);
    *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar9 + 0xc);
    uVar14 = *(undefined4 *)(iVar7 + -0x3c);
    uVar16 = *(undefined4 *)(iVar7 + -0x38);
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar7 + -0x40);
    *(undefined4 *)(iVar9 + 8) = uVar14;
    *(undefined4 *)(iVar9 + 0xc) = uVar16;
    iVar9 = *piVar5;
    uVar14 = *(undefined4 *)(iVar7 + -0x40);
    uVar16 = *(undefined4 *)(iVar7 + -0x3c);
    uVar17 = *(undefined4 *)(iVar7 + -0x38);
    *(undefined4 *)(iVar9 + 0x58) = uVar14;
    *(undefined4 *)(iVar9 + 0x5c) = uVar16;
    *(undefined4 *)(iVar9 + 0x60) = uVar17;
    *(undefined4 *)(iVar9 + 100) = uVar14;
    *(undefined4 *)(iVar9 + 0x68) = uVar16;
    *(undefined4 *)(iVar9 + 0x6c) = uVar17;
    *(float *)(iVar9 + 0x70) = fVar20;
    func_004356B4((int *)*piVar5);
    *(undefined1 *)(iVar7 + 0x61) = 0;
  }
  piVar5 = (int *)func_005841A8(*DAT_0033d89c,*DAT_0033d8a0,*(int **)(DAT_0033d8a4 + *DAT_0033d89c))
  ;
  if (*piVar5 != 0) {
    *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(*piVar5 + 0x2cc);
  }
  puVar6 = (undefined4 *)(iVar7 + -0x78);
  *(int *)(iVar7 + -100) = iVar8;
  *(undefined1 *)(iVar7 + -0x72) = 6;
  iVar9 = func_0010BA78(0x60);
  *(int *)(iVar7 + -0x60) = iVar9;
  *(uint *)(iVar7 + -0x5c) = iVar9 + (uint)*(byte *)(iVar7 + -0x72) * 8;
  iVar12 = 6;
  puVar10 = (undefined4 *)(iVar9 + -8);
  do {
    uVar14 = puVar2[0x27];
    iVar12 = iVar12 + -1;
    puVar10[2] = puVar2[0x26];
    puVar10[3] = uVar14;
    uVar14 = puVar2[0x27];
    puVar10[4] = puVar2[0x26];
    puVar10[5] = uVar14;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(iVar7 + -0x72);
  uVar18 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar18 << 3);
  *(undefined4 **)(iVar7 + -0x58) = puVar10;
  if (uVar18 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[0x29];
      *puVar10 = puVar2[0x28];
      puVar10[1] = uVar14;
      puVar11 = puVar10;
    }
    for (iVar9 = (int)uVar18 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar14 = puVar2[0x29];
      puVar11[2] = puVar2[0x28];
      puVar11[3] = uVar14;
      uVar14 = puVar2[0x29];
      puVar11[4] = puVar2[0x28];
      puVar11[5] = uVar14;
      puVar11 = puVar11 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar4 = DAT_0033d8a8;
  iVar9 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 6;
    *puVar10 = 0x24;
    iVar9 = func_00100118((int)(puVar10 + 2),puVar4,0x24,6);
  }
  if (iVar9 != 0) {
    *(int *)(iVar7 + -0x6c) = iVar9;
    *(undefined4 *)(iVar7 + -0x70) = 6;
  }
  iVar9 = DAT_0033d8ac;
  *(undefined4 **)(iVar7 + -0x130) = puVar6;
  iVar12 = DAT_0033d8c0;
  *(undefined2 *)(iVar9 + iVar8) = 6;
  local_34 = s_cState_PreShot_0033d8b0;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,0,&local_38);
  puVar10 = *(undefined4 **)(iVar7 + -0x60);
  uVar17 = puVar2[3];
  uVar16 = puVar2[6];
  uVar14 = puVar2[4];
  uVar15 = puVar2[5];
  uVar13 = puVar2[7];
  *puVar10 = puVar2[2];
  puVar10[1] = uVar17;
  puVar10 = *(undefined4 **)(iVar7 + -0x5c);
  *puVar10 = uVar14;
  puVar10[1] = uVar15;
  puVar10 = *(undefined4 **)(iVar7 + -0x58);
  *puVar10 = uVar16;
  puVar10[1] = uVar13;
  local_34 = s_cState_Shot_0033dac0;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,1,&local_38);
  iVar9 = *(int *)(iVar7 + -0x60);
  uVar17 = puVar2[9];
  uVar15 = puVar2[10];
  uVar14 = puVar2[0xb];
  uVar13 = puVar2[0xc];
  uVar16 = puVar2[0xd];
  *(undefined4 *)(iVar9 + 8) = puVar2[8];
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = *(int *)(iVar7 + -0x5c);
  *(undefined4 *)(iVar9 + 8) = uVar15;
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  iVar9 = *(int *)(iVar7 + -0x58);
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  local_34 = s_cState_Hit_0033dacc;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,2,&local_38);
  iVar9 = *(int *)(iVar7 + -0x60);
  uVar14 = puVar2[0x10];
  uVar15 = puVar2[0x11];
  uVar16 = puVar2[0x12];
  uVar17 = puVar2[0x13];
  uVar13 = puVar2[0xf];
  *(undefined4 *)(iVar9 + 0x10) = puVar2[0xe];
  *(undefined4 *)(iVar9 + 0x14) = uVar13;
  iVar9 = *(int *)(iVar7 + -0x5c);
  *(undefined4 *)(iVar9 + 0x10) = uVar14;
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  iVar9 = *(int *)(iVar7 + -0x58);
  *(undefined4 *)(iVar9 + 0x10) = uVar16;
  *(undefined4 *)(iVar9 + 0x14) = uVar17;
  local_34 = s_cState_Balance_0033dad8;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,3,&local_38);
  iVar9 = *(int *)(iVar7 + -0x60);
  uVar13 = puVar2[0x15];
  uVar15 = puVar2[0x16];
  uVar14 = puVar2[0x19];
  uVar16 = puVar2[0x18];
  uVar17 = puVar2[0x17];
  *(undefined4 *)(iVar9 + 0x18) = puVar2[0x14];
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = *(int *)(iVar7 + -0x5c);
  *(undefined4 *)(iVar9 + 0x18) = uVar15;
  *(undefined4 *)(iVar9 + 0x1c) = uVar17;
  iVar9 = *(int *)(iVar7 + -0x58);
  *(undefined4 *)(iVar9 + 0x18) = uVar16;
  *(undefined4 *)(iVar9 + 0x1c) = uVar14;
  local_34 = s_cState_Reflect_0033dae8;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,4,&local_38);
  iVar9 = *(int *)(iVar7 + -0x60);
  uVar14 = puVar2[0x1c];
  uVar15 = puVar2[0x1d];
  uVar16 = puVar2[0x1e];
  uVar13 = puVar2[0x1f];
  uVar17 = puVar2[0x1b];
  *(undefined4 *)(iVar9 + 0x20) = puVar2[0x1a];
  *(undefined4 *)(iVar9 + 0x24) = uVar17;
  iVar9 = *(int *)(iVar7 + -0x5c);
  *(undefined4 *)(iVar9 + 0x20) = uVar14;
  *(undefined4 *)(iVar9 + 0x24) = uVar15;
  iVar9 = *(int *)(iVar7 + -0x58);
  *(undefined4 *)(iVar9 + 0x20) = uVar16;
  *(undefined4 *)(iVar9 + 0x24) = uVar13;
  local_34 = s_cState_Delete_0033daf8;
  local_38 = iVar12;
  func_0010BEC4((int)puVar6,5,&local_38);
  iVar9 = *(int *)(iVar7 + -0x60);
  uVar16 = puVar2[0x21];
  uVar14 = puVar2[0x22];
  uVar17 = puVar2[0x23];
  uVar13 = puVar2[0x24];
  uVar15 = puVar2[0x25];
  *(undefined4 *)(iVar9 + 0x28) = puVar2[0x20];
  *(undefined4 *)(iVar9 + 0x2c) = uVar16;
  iVar9 = *(int *)(iVar7 + -0x5c);
  *(undefined4 *)(iVar9 + 0x28) = uVar14;
  *(undefined4 *)(iVar9 + 0x2c) = uVar17;
  iVar7 = *(int *)(iVar7 + -0x58);
  *(undefined4 *)(iVar7 + 0x28) = uVar13;
  *(undefined4 *)(iVar7 + 0x2c) = uVar15;
  func_00665E08(puVar6,0);
  return iVar8;
}

