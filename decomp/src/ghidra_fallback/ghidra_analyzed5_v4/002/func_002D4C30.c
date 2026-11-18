#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00663BDC(undefined4 *param_1,undefined1 param_2);
extern float fRam002d4ff4;
extern float fRam002d52f4;
extern undefined4 uRam002d4ff8;
extern int *piRam002d52f0;
extern undefined4 *puRam002d4ffc;
extern undefined4 *puRam002d5000;
extern undefined4 DAT_002d4fdc;
extern undefined4 DAT_002d4fe0;
extern int DAT_002d4fe4;
extern char s_SlitImage_002d4fe8[];
extern char s_cState_Active_002d52d0[];
extern char s_cState_FadeIn_002d5014[];
extern char s_cState_FadeOut_002d52e0[];
extern char s_cState_Sleep_002d5004[];

// USA 002D4C30 <- EU 002D4C0C (Ghidra, non-matching)
// GLOBAL DAT_002d4fdc undefined4
// GLOBAL DAT_002d4fe0 undefined4
// GLOBAL DAT_002d4fe4 int
// GLOBAL UNK_002d4ff4 float
// GLOBAL UNK_002d4ff8 undefined4
// GLOBAL UNK_002d4ffc undefined4 *
// GLOBAL UNK_002d5000 undefined *
// GLOBAL UNK_002d52f0 int *
// GLOBAL UNK_002d52f4 float
// GLOBAL s_SlitImage_002d4fe8 string
// GLOBAL s_cState_Active_002d52d0 string
// GLOBAL s_cState_FadeIn_002d5014 string
// GLOBAL s_cState_FadeOut_002d52e0 string
// GLOBAL s_cState_Sleep_002d5004 string

undefined4 * func_002D4C30(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define iStack_e0 (*(int *)(albw_frame + 0x0))
  #define puStack_dc (*(uint * *)(albw_frame + 0x4))
  #define auStack_d8 ((uint *)(albw_frame + 0x8))
  #define puStack_d0 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x14))
  #define fStack_c8 (*(float *)(albw_frame + 0x18))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_b8 (*(uint *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_80 (*(undefined1 *)(albw_frame + 0x60))
  #define local_7c (*(int *)(albw_frame + 0x64))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x68))
  #define iStack_74 (*(int *)(albw_frame + 0x6c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x70))
  #define local_6c (*(int * *)(albw_frame + 0x74))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x80))
  #define local_5f (*(undefined1 *)(albw_frame + 0x81))
  #define local_5c (*(undefined4 *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(undefined4 *)(albw_frame + 0x94))
  #define local_48 (*(undefined4 *)(albw_frame + 0x98))
  #define local_44 (*(undefined1 *)(albw_frame + 0x9c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x9d))
  puVar2 = func_0010A794(param_1);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  uVar13 = DAT_002d4fdc;
  puVar2[0xc] = 0;
  puVar2[0xd] = uVar13;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  iVar11 = DAT_002d4fe4;
  local_6c = *(int **)(param_2 + 0x18);
  iVar10 = *local_6c;
  local_7c = DAT_002d4fe4;
  uStack_78 = DAT_002d4fe0;
  iStack_74 = DAT_002d4fe4;
  local_70 = DAT_002d4fe0;
  uStack_68 = 0;
  local_44 = 1;
  local_4c = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_43 = 0xc4;
  local_5f = 1;
  local_5c = 0;
  local_54 = 0;
  local_64 = 1;
  local_60 = 1;
  piVar3 = func_002C2D00(&local_7c);
  puVar2[9] = piVar3;
  uVar4 = piVar3[0x59];
  piVar3[0x59] = uVar4 | 0x90000;
  *(uint *)(puVar2[9] + 0x164) = uVar4 | 0x90001;
  func_004CF478(puVar2[9],0);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puStack_dc = (uint *)s_SlitImage_002d4fe8;
    iStack_e0 = iVar11;
    puVar6 = func_0016A2FC(puVar5,1,&iStack_e0,1);
  }
  puVar2[10] = puVar6;
  if (*(int *)(iVar10 + 0xd4) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(iVar10 + 0xdc);
  }
  func_0016A2A4((uint *)puVar2[10],0,piVar3);
  uVar4 = 0xffffffff;
  func_0016A02C(puVar2[10],-1,(int *)0xffffffff,puVar2[9]);
  auStack_d8[1] = 3;
  uStack_b8 = uVar4 | 0xff;
  puStack_d0 = &uStack_cc;
  auStack_d8[0] = 1;
  uStack_84 = 10;
  uStack_80 = 0;
  uStack_cc = 0;
  uStack_c0 = uRam002d4ff8;
  fStack_c8 = fRam002d4ff4;
  uStack_c4 = uVar13;
  uStack_bc = uVar13;
  fVar16 = fRam002d4ff4;
  func_0016898C(puVar2[10],auStack_d8);
  puVar2[5] = puVar2;
  *(undefined1 *)((int)puVar2 + 6) = 4;
  iVar10 = func_0010BA78(0x40);
  puVar6 = puRam002d4ffc;
  puVar2[6] = iVar10;
  puVar2[7] = iVar10 + (uint)*(byte *)((int)puVar2 + 6) * 8;
  iVar8 = 4;
  puVar5 = (undefined4 *)(iVar10 + -8);
  do {
    uVar13 = puVar6[0x13];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar6[0x12];
    puVar5[3] = uVar13;
    uVar13 = puVar6[0x13];
    puVar5[4] = puVar6[0x12];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar2 + 6);
  uVar4 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar4 << 3);
  puVar2[8] = puVar5;
  if (uVar4 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar13;
      puVar7 = puVar5;
    }
    for (iVar10 = (int)uVar4 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar13 = puVar6[5];
      puVar7[2] = puVar6[4];
      puVar7[3] = uVar13;
      uVar13 = puVar6[5];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar10 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar10 = func_00100118((int)(puVar5 + 2),puRam002d5000,0x24,4);
  }
  if (iVar10 != 0) {
    puVar2[3] = iVar10;
    puVar2[2] = 4;
  }
  puStack_dc = (uint *)s_cState_Sleep_002d5004;
  iStack_e0 = iVar11;
  iVar10 = puVar2[3];
  puVar12 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar11 + 8))(&iStack_e0);
  uVar4 = 0;
  do {
    if (*(char *)((int)puStack_dc + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_002d4f18;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_002d4f18:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar4) {
    uVar4 = iVar10 - 1;
  }
  (**(code **)(iStack_e0 + 8))(&iStack_e0);
  func_0010E3C4(puVar12,puStack_dc,uVar4);
  *(undefined1 *)((int)puVar12 + uVar4) = 0;
  puVar5 = (undefined4 *)puVar2[6];
  uVar13 = puVar6[5];
  uVar9 = puVar6[3];
  uVar14 = puVar6[2];
  uVar17 = puVar6[4];
  uVar18 = puVar6[1];
  *puVar5 = *puVar6;
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar2[7];
  *puVar5 = uVar14;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar2[8];
  *puVar5 = uVar17;
  puVar5[1] = uVar13;
  puStack_dc = (uint *)s_cState_FadeIn_002d5014;
  iStack_e0 = iVar11;
  if ((uint)puVar2[2] < 2) {
    iVar10 = puVar2[3];
  }
  else {
    iVar10 = puVar2[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar11 + 8))(&iStack_e0);
  uVar4 = 0;
  do {
    if (*(char *)((int)puStack_dc + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_002d5030;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_002d5030:
  if (*(int *)(iVar10 + 8) <= (int)uVar4) {
    uVar4 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(iStack_e0 + 8))(&iStack_e0);
  func_0010E3C4(puVar12,puStack_dc,uVar4);
  *(undefined1 *)((int)puVar12 + uVar4) = 0;
  iVar10 = puVar2[6];
  uVar13 = puVar6[7];
  uVar14 = puVar6[8];
  uVar17 = puVar6[9];
  uVar9 = puVar6[5];
  uVar18 = puVar6[4];
  *(undefined4 *)(iVar10 + 8) = puVar6[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar10 = puVar2[7];
  *(undefined4 *)(iVar10 + 8) = uVar14;
  *(undefined4 *)(iVar10 + 0xc) = uVar17;
  iVar10 = puVar2[8];
  *(undefined4 *)(iVar10 + 8) = uVar18;
  *(undefined4 *)(iVar10 + 0xc) = uVar9;
  puStack_dc = (uint *)s_cState_Active_002d52d0;
  iStack_e0 = iVar11;
  if ((uint)puVar2[2] < 3) {
    iVar10 = puVar2[3];
  }
  else {
    iVar10 = puVar2[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar11 + 8))(&iStack_e0);
  uVar4 = 0;
  do {
    if (*(char *)((int)puStack_dc + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_002d50f4;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_002d50f4:
  if (*(int *)(iVar10 + 8) <= (int)uVar4) {
    uVar4 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(iStack_e0 + 8))(&iStack_e0);
  func_0010E3C4(puVar12,puStack_dc,uVar4);
  *(undefined1 *)((int)puVar12 + uVar4) = 0;
  iVar10 = puVar2[6];
  uVar9 = puVar6[0xc];
  uVar13 = puVar6[4];
  uVar14 = puVar6[0xb];
  uVar17 = puVar6[0xd];
  uVar18 = puVar6[5];
  *(undefined4 *)(iVar10 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = puVar2[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar9;
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = puVar2[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  puStack_dc = (uint *)s_cState_FadeOut_002d52e0;
  iStack_e0 = iVar11;
  if ((uint)puVar2[2] < 4) {
    iVar10 = puVar2[3];
  }
  else {
    iVar10 = puVar2[3] + 0x6c;
  }
  puVar12 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar11 + 8))(&iStack_e0);
  uVar4 = 0;
  do {
    if (*(char *)((int)puStack_dc + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_002d51c4;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_002d51c4:
  if (*(int *)(iVar10 + 8) <= (int)uVar4) {
    uVar4 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(iStack_e0 + 8))(&iStack_e0);
  func_0010E3C4(puVar12,puStack_dc,uVar4);
  *(undefined1 *)((int)puVar12 + uVar4) = 0;
  uVar13 = puVar6[5];
  uVar18 = puVar6[4];
  iVar11 = puVar2[6];
  uVar17 = puVar6[0xf];
  uVar9 = puVar6[0x10];
  uVar14 = puVar6[0x11];
  *(undefined4 *)(iVar11 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar11 + 0x1c) = uVar17;
  iVar11 = puVar2[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar9;
  *(undefined4 *)(iVar11 + 0x1c) = uVar14;
  iVar11 = puVar2[8];
  *(undefined4 *)(iVar11 + 0x18) = uVar18;
  *(undefined4 *)(iVar11 + 0x1c) = uVar13;
  func_00663BDC(puVar2,0);
  iVar10 = puVar2[10];
  fVar19 = *(float *)(*(int *)(iVar10 + 0x14) + 0x14);
  uVar4 = func_00111A64((uint *)(*piRam002d52f0 + 0x660));
  fVar15 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = fVar15 * fRam002d52f4 * fVar19;
  iVar11 = (int)fVar19;
  fVar15 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar19) << 0x1e;
  if ((!SUB41(uVar4 >> 0x1e,0)) &&
     (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar19) << 0x1e |
              (uint)(fVar19 <= fVar16) << 0x1d, bVar1 = (byte)(uVar4 >> 0x18),
     !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar11 = iVar11 + 1;
  }
  iVar10 = *(int *)(iVar10 + 0x14);
  fVar16 = (float)VectorSignedToFloat(iVar11,(byte)(uVar4 >> 0x15) & 3);
  if (*(float *)(iVar10 + 8) != fVar16) {
    *(float *)(iVar10 + 8) = fVar16;
    *(undefined1 *)(iVar10 + 0x26) = 1;
  }
  return puVar2;
}

