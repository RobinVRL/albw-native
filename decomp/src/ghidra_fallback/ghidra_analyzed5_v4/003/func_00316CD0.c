#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_0032493C(undefined4 *param_1);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00664D94(undefined4 *param_1,undefined1 param_2);
extern float fRam003170c0;
extern float fRam003170c4;
extern int iRam003170dc;
extern undefined4 uRam003170c8;
extern undefined4 *puRam003170cc;
extern int DAT_003170ac;
extern undefined4 *DAT_003170b0;
extern undefined4 DAT_003170b4;
extern float DAT_003170b8;
extern undefined4 *DAT_003170bc;
extern char s_cState_Delete_0031730c[];
extern char s_cState_Shot_003170d0[];

// USA 00316CD0 <- EU 00316CAC (Ghidra, non-matching)
// GLOBAL DAT_003170ac int
// GLOBAL DAT_003170b0 undefined4 *
// GLOBAL DAT_003170b4 undefined4
// GLOBAL DAT_003170b8 float
// GLOBAL DAT_003170bc undefined4 *
// GLOBAL UNK_003170c0 float
// GLOBAL UNK_003170c4 float
// GLOBAL UNK_003170c8 uint
// GLOBAL UNK_003170cc undefined *
// GLOBAL UNK_003170dc int
// GLOBAL s_cState_Delete_0031730c string
// GLOBAL s_cState_Shot_003170d0 string

/* WARNING: Variable defined which should be unmapped: objStack_8c */

undefined4 * func_00316CD0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  uint in_fpscr;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_8c ((uint *)(albw_frame + 0x4))
  #define iStack_78 (*(int *)(albw_frame + 0x18))
  #define puStack_74 (*(uint * *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define auStack_6c ((uint *)(albw_frame + 0x24))
  #define uStack_4c (*(uint *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_003170ac;
  *piVar3 = DAT_003170ac;
  piVar3[200] = iVar5 + 0x5c;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar13 = puVar4 + -0x103;
  puVar4[8] = 0;
  iVar5 = func_0054D964((int)puVar13,0);
  puVar4[9] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  puVar4[10] = uVar7;
  iVar5 = func_0054D89C((int)puVar13,0);
  puVar4[0xb] = iVar5;
  puVar6 = DAT_003170b0;
  puVar4[0xc] = 0;
  uVar7 = puVar6[1];
  puVar4[0x10] = *puVar6;
  puVar4[0x11] = uVar7;
  uVar7 = DAT_003170b4;
  puVar4[0xe] = DAT_003170b4;
  puVar4[0xf] = puVar13;
  puVar4[0x13] = 0;
  uVar11 = puVar6[0x18];
  uVar12 = puVar6[0x19];
  puVar4[0x12] = uVar7;
  puVar4[0x14] = uVar11;
  puVar4[0x15] = uVar12;
  puVar4[0x17] = 0;
  uVar12 = puVar6[0x19];
  uVar11 = puVar6[0x18];
  puVar4[0x16] = uVar7;
  puVar4[0x18] = uVar11;
  puVar4[0x19] = uVar12;
  puVar6 = (undefined4 *)func_0010BAB4(0xc);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_0032493C(puVar6);
  }
  puVar4[0x1a] = uVar7;
  puVar6 = DAT_003170bc;
  fVar16 = DAT_003170b8;
  puVar4[0x1b] = ALBW_AS_U32(DAT_003170b8);
  puVar4[0x1c] = 0;
  uVar7 = *puVar6;
  uVar11 = puVar6[1];
  puVar4[0x1f] = puVar6[2];
  puVar4[0x1d] = uVar7;
  puVar4[0x1e] = uVar11;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = ALBW_AS_U32(fVar16);
  puVar4[0x2f] = 0;
  func_00151148(puVar4[0xb],1);
  fVar21 = fRam003170c0;
  puVar6 = DAT_003170b0;
  fVar19 = (float)VectorSignedToFloat((int)(short)param_2[10],(byte)(in_fpscr >> 0x15) & 3);
  fVar20 = fRam003170c0;
  if ((fRam003170c0 <= fVar19) && (fVar20 = fVar19, fRam003170c4 < fVar19)) {
    fVar20 = fRam003170c4;
  }
  puVar4[0x1c] = (int)fVar20;
  puVar4[0x2f] = param_2[7];
  uVar7 = puVar6[2];
  uVar11 = puVar6[3];
  puVar4[0xf] = puVar13;
  puVar4[0x10] = uVar7;
  puVar4[0x11] = uVar11;
  puVar4[-8] = puVar4 + 0xe;
  iVar5 = func_0054DDF4((int)puVar13,0);
  puVar6 = DAT_003170b0;
  puVar4[-0x1b] = iVar5;
  puVar4[-0x1a] = iVar5;
  uVar7 = puVar6[4];
  uVar11 = puVar6[5];
  puVar4[0x13] = puVar13;
  puVar4[0x14] = uVar7;
  puVar4[0x15] = uVar11;
  if ((puVar4[0x1c] & 1) == 0) {
    uVar2 = 0x1a0;
  }
  else {
    uVar2 = 0x120;
  }
  *(undefined2 *)(puVar4[9] + 0x28) = uVar2;
  auStack_6c[0] = puVar4[-0x50];
  objStack_8c[1] = uRam003170c8;
  uVar14 = objStack_8c[1];
  (*(undefined2 *)((char *)&objStack_8c[1] + 0)) = (undefined2)uRam003170c8;
  uVar2 = (undefined2)objStack_8c[1];
  objStack_8c[0] = (uint)(puVar4 + 0x12);
  objStack_8c[1] = uVar14;
  func_0014EB8C(puVar4[10],puVar4[9],(undefined2 *)puVar4[-0x1b],auStack_6c,(short)param_2[0x14],
                puVar4 + 0x12,uVar2);
  iVar5 = puVar4[10];
  func_004D80A4((float *)(iVar5 + 0x24),puVar4[-9],fVar16);
  *(float *)(iVar5 + 0x28) = fVar21;
  *(uint *)(puVar4[9] + 0x2c) = *(uint *)(puVar4[9] + 0x2c) | 0x60000;
  *(undefined1 *)(puVar4[10] + 0x61) = 0;
  fVar16 = func_0054DE3C(puVar13,0,1);
  puVar4[0x1b] = ALBW_AS_U32(fVar16);
  puVar6 = DAT_003170b0;
  uVar7 = DAT_003170b0[6];
  uVar11 = DAT_003170b0[7];
  puVar4[0x17] = puVar13;
  puVar4[0x18] = uVar7;
  puVar4[0x19] = uVar11;
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar13;
  iVar5 = func_0010BA78(0x20);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 2;
  puVar8 = (undefined4 *)(iVar5 + -8);
  do {
    uVar7 = puVar6[0x15];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar6[0x14];
    puVar8[3] = uVar7;
    uVar7 = puVar6[0x15];
    puVar8[4] = puVar6[0x14];
    puVar8[5] = uVar7;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar8;
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar6[0x17];
      *puVar8 = puVar6[0x16];
      puVar8[1] = uVar7;
      puVar9 = puVar8;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar7 = puVar6[0x17];
      puVar9[2] = puVar6[0x16];
      puVar9[3] = uVar7;
      uVar7 = puVar6[0x17];
      puVar9[4] = puVar6[0x16];
      puVar9[5] = uVar7;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar5 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 2;
    iVar5 = func_00100118((int)(puVar8 + 2),puRam003170cc,0x24,2);
  }
  if (iVar5 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar5;
  }
  puVar4[-0x2e] = puVar4;
  iVar5 = iRam003170dc;
  *(undefined2 *)((int)puVar4 + -0xb2) = 2;
  puStack_74 = (uint *)s_cState_Shot_003170d0;
  iStack_78 = iVar5;
  iVar10 = puVar4[3];
  puVar15 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&iStack_78);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_74 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_003170ec;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_003170ec:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar14) {
    uVar14 = iVar10 - 1;
  }
  (**(code **)(iStack_78 + 8))(&iStack_78);
  func_0010E3C4(puVar15,puStack_74,uVar14);
  *(undefined1 *)((int)puVar15 + uVar14) = 0;
  puVar8 = (undefined4 *)puVar4[6];
  uVar7 = puVar6[9];
  uVar11 = puVar6[10];
  uVar12 = puVar6[0xb];
  uVar17 = puVar6[0xc];
  uVar18 = puVar6[0xd];
  *puVar8 = puVar6[8];
  puVar8[1] = uVar7;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar11;
  puVar8[1] = uVar12;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  puStack_74 = (uint *)s_cState_Delete_0031730c;
  iStack_78 = iVar5;
  if ((uint)puVar4[2] < 2) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&iStack_78);
  uVar14 = 0;
  do {
    if (*(char *)((int)puStack_74 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_003171a4;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_003171a4:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(iStack_78 + 8))(&iStack_78);
  func_0010E3C4(puVar15,puStack_74,uVar14);
  *(undefined1 *)((int)puVar15 + uVar14) = 0;
  iVar5 = puVar4[6];
  uVar11 = puVar6[0xf];
  uVar7 = puVar6[0x10];
  uVar12 = puVar6[0x11];
  uVar17 = puVar6[0x12];
  uVar18 = puVar6[0x13];
  *(undefined4 *)(iVar5 + 8) = puVar6[0xe];
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar7;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  puVar6 = DAT_003170bc;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  uVar7 = *puVar6;
  uVar11 = puVar6[1];
  puVar4[0x1f] = puVar6[2];
  puVar4[0x1d] = uVar7;
  puVar4[0x1e] = uVar11;
  uStack_48 = puVar4[-9];
  uStack_4c = 0;
  uStack_44 = 0;
  func_0049216C((float *)(puVar4 + 0x20),&uStack_4c,(float *)(puVar4 + -0xf));
  piVar3 = (int *)func_00521028((int)puVar13);
  (**(code **)(*piVar3 + 8))(piVar3);
  func_003529A0(&uStack_70,piVar3[1],puVar4 + -0x3b);
  func_002C41BC(puVar4 + -0x3b,&uStack_70,0);
  func_00664D94(puVar4,0);
  if (puVar4[0x1c] == 4) {
    *(undefined2 *)(puVar4[10] + 0x30) = 4;
  }
  iVar5 = puVar4[9];
  *(undefined4 *)(iVar5 + 4) = puVar4[-0xf];
  *(undefined4 *)(iVar5 + 8) = puVar4[-0xe];
  *(undefined4 *)(iVar5 + 0xc) = puVar4[-0xd];
  func_004356B4((int *)puVar4[9]);
  func_00491624((float *)objStack_8c,0,puVar4[-9],0);
  func_001512B4(puVar4[0xb],(float *)(puVar4 + -0xf));
  func_0015133C(puVar4[0xb],objStack_8c);
  return puVar13;
}

