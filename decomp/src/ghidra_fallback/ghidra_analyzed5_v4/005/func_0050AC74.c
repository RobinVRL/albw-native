// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0066B580(undefined4 *param_1,undefined1 param_2);
extern int DAT_0050b0b0;
extern undefined4 DAT_0050b0b4;
extern undefined4 DAT_0050b0b8;
extern int *DAT_0050b0bc;
extern undefined4 *DAT_0050b0c0;
extern undefined4 DAT_0050b0c4;
extern int DAT_0050b0c8;
extern int DAT_0050b0cc;
extern int *DAT_0050b0d0;
extern float DAT_0050b0d4;
extern float *DAT_0050b0d8;
extern undefined4 DAT_0050b0dc;
extern undefined4 DAT_0050b56c;
extern int *DAT_0050b570;
extern undefined *DAT_0050b574;
extern int DAT_0050b578;
extern int DAT_0050b588;
extern undefined4 DAT_0050b5d0;
extern undefined4 DAT_0050b5d4;
extern char s_cState_Down_0050b5a8[];
extern char s_cState_Freeze_0050b5b4[];
extern char s_cState_Melt_0050b5c4[];
extern char s_cState_Prepare_0050b58c[];
extern char s_cState_Up_0050b59c[];
extern char s_cState_Wait_0050b57c[];

// USA 0050AC74 <- EU 0050AC4C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050b0b0 int
// GLOBAL DAT_0050b0b4 undefined4
// GLOBAL DAT_0050b0b8 undefined4
// GLOBAL DAT_0050b0bc int *
// GLOBAL DAT_0050b0c0 undefined4 *
// GLOBAL DAT_0050b0c4 undefined4
// GLOBAL DAT_0050b0c8 int
// GLOBAL DAT_0050b0cc int
// GLOBAL DAT_0050b0d0 int *
// GLOBAL DAT_0050b0d4 float
// GLOBAL DAT_0050b0d8 float *
// GLOBAL DAT_0050b0dc undefined4
// GLOBAL DAT_0050b56c undefined4
// GLOBAL DAT_0050b570 int *
// GLOBAL DAT_0050b574 undefined *
// GLOBAL DAT_0050b578 int
// GLOBAL DAT_0050b588 int
// GLOBAL DAT_0050b5d0 undefined4
// GLOBAL DAT_0050b5d4 undefined4
// GLOBAL s_cState_Down_0050b5a8 string
// GLOBAL s_cState_Freeze_0050b5b4 string
// GLOBAL s_cState_Melt_0050b5c4 string
// GLOBAL s_cState_Prepare_0050b58c string
// GLOBAL s_cState_Up_0050b59c string
// GLOBAL s_cState_Wait_0050b57c string

undefined4 * func_0050AC74(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define fStack_dc (*(float *)(albw_frame + 0x4))
  #define fStack_d8 (*(float *)(albw_frame + 0x8))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x14))
  #define aiStack_c4 ((int *)(albw_frame + 0x1c))
  #define fStack_68 (*(float *)(albw_frame + 0x78))
  #define fStack_64 (*(float *)(albw_frame + 0x7c))
  #define fStack_60 (*(float *)(albw_frame + 0x80))
  #define uStack_5c (*(uint *)(albw_frame + 0x84))
  #define iStack_58 (*(int *)(albw_frame + 0x88))
  #define pcStack_54 (*(char * *)(albw_frame + 0x8c))
  #define puStack_50 (*(undefined4 * *)(albw_frame + 0x90))
  #define piStack_4c (*(int * *)(albw_frame + 0x94))
  #define piStack_44 (*(int * *)(albw_frame + 0x9c))
  #define fStack_3c (*(float *)(albw_frame + 0xa4))
  #define fStack_38 (*(float *)(albw_frame + 0xa8))
  #define fStack_34 (*(float *)(albw_frame + 0xac))
  piVar2 = func_00150E40(param_1,param_2);
  iVar7 = DAT_0050b0b0;
  piVar2[200] = DAT_0050b0b0 + 0x54;
  *piVar2 = iVar7;
  piVar2[0x103] = 0;
  piVar2[0x104] = 0;
  piVar2[0x105] = 0;
  puVar3 = func_0010A794(piVar2 + 0x106);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar13 = puVar3 + -0x106;
  puVar4 = (undefined4 *)func_0010BAB4(100);
  uVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    uVar5 = func_004EE484(puVar4);
  }
  piStack_4c = puVar3 + 9;
  puVar3[9] = uVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar6);
  }
  puVar3[10] = puVar4;
  piVar16 = puVar3 + 10;
  iVar7 = func_0054D964((int)puVar13,0);
  puVar3[0xb] = iVar7;
  piVar15 = puVar3 + 0xb;
  iVar7 = func_0054D964((int)puVar13,0);
  puStack_50 = puVar3 + 0xc;
  puVar3[0xc] = iVar7;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  uVar18 = DAT_0050b0b8;
  uVar5 = DAT_0050b0b4;
  puVar3[0xf] = DAT_0050b0b4;
  puVar4 = DAT_0050b0c0;
  puVar3[0x10] = uVar18;
  puVar3[0x11] = uVar5;
  puVar3[0x12] = (int)*(short *)((int)param_2 + 0x2a);
  piVar2 = DAT_0050b0bc;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)((int)puVar3 + 0x4d) = 0;
  *(undefined1 *)((int)puVar3 + 0x4e) = 0;
  *(undefined1 *)((int)puVar3 + 0x4f) = 0;
  *(bool *)(puVar3 + 0x14) = *(char *)(*piVar2 + 0x18) == '\a' || *(char *)(*piVar2 + 0x18) == '%';
  uVar5 = puVar4[1];
  puVar3[0x17] = *puVar4;
  puVar3[0x18] = uVar5;
  puVar3[0x15] = DAT_0050b0c4;
  puVar3[0x16] = puVar13;
  iVar7 = func_0014E428((int)puVar13,1,0,0,1,0,0);
  piStack_44 = puVar3 + -3;
  puVar3[-3] = iVar7;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar7 + 0x8c) = puVar3[-0x12];
  *(undefined4 *)(iVar7 + 0x9c) = puVar3[-0x11];
  *(undefined4 *)(iVar7 + 0xac) = puVar3[-0x10];
  (**(code **)(*(int *)puVar3[-3] + 0x10))((int *)puVar3[-3],0x24);
  uVar5 = func_0014E904((int)puVar13,2,1);
  iVar7 = DAT_0050b0c8;
  piVar2 = puVar3 + -2;
  uVar14 = 0;
  puVar3[-2] = uVar5;
  do {
    func_00169688((uint *)puVar3[-2],uVar14,(int *)(iVar7 + uVar14 * 8),
                  *(int *)(puVar3[-0x52] + 0x1c8));
    func_00133870(*piVar2,uVar14,puVar3[-3]);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 2);
  func_0016A02C(puVar3[-2],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8(aiStack_c4,0,10,0);
  func_0016898C(*piVar2,puVar8);
  func_00168E9C((int *)*piVar2,puVar3[-3],(int *)0x0);
  uVar5 = func_0014E904((int)puVar13,3,1);
  iVar7 = DAT_0050b0cc;
  piVar2 = puVar3 + -1;
  uVar14 = 0;
  puVar3[-1] = uVar5;
  do {
    func_00169608((uint *)puVar3[-1],uVar14,(int *)(iVar7 + uVar14 * 8),
                  *(int *)(puVar3[-0x52] + 0x1c8));
    func_00133870(*piVar2,uVar14,puVar3[-3]);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 3);
  func_0016A02C(puVar3[-1],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8(aiStack_c4,0,10,0);
  func_0016898C(*piVar2,puVar8);
  fVar22 = *(float *)(*(int *)(*piVar2 + 0x14) + 0x14);
  uVar14 = func_00111A64((uint *)(*DAT_0050b0d0 + 0x660));
  fVar17 = (float)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
  iVar7 = *(int *)(puVar3[-1] + 0x14);
  fVar22 = fVar17 * DAT_0050b0d4 * fVar22;
  if (*(float *)(iVar7 + 8) != fVar22) {
    *(float *)(iVar7 + 8) = fVar22;
    *(undefined1 *)(iVar7 + 0x26) = 1;
  }
  func_00168E9C((int *)puVar3[-1],puVar3[-3],(int *)0x0);
  if (*(short *)(puVar3 + -0xfb) == 1) {
    func_00115D70(&fStack_3c,DAT_0050b0d8,DAT_0050b0d8[-2] / DAT_0050b0d8[-8]);
    fStack_68 = fStack_3c;
    fStack_64 = fStack_38;
    fStack_60 = fStack_34;
  }
  else {
    fStack_68 = *DAT_0050b0d8;
    fStack_64 = DAT_0050b0d8[1];
    fStack_60 = DAT_0050b0d8[2];
  }
  func_00115C54(&fStack_dc,(float *)(puVar3 + -0x12),&fStack_68);
  fVar17 = func_0054DE3C(puVar13,0,1);
  fStack_d8 = fVar17 + fStack_d8;
  iVar7 = puVar3[0xb];
  *(float *)(iVar7 + 4) = fStack_dc;
  *(float *)(iVar7 + 8) = fStack_d8;
  *(undefined4 *)(iVar7 + 0xc) = uStack_d4;
  uStack_cc = DAT_0050b0dc;
  *(short *)(*piVar15 + 0x28) = (short)DAT_0050b0dc;
  uVar14 = *(uint *)(*piVar15 + 0x2c);
  *(uint *)(*piVar15 + 0x2c) = uVar14 | 0x8000;
  *(uint *)(*piVar15 + 0x2c) = uVar14 & 0xfffff8ff | 0x8300;
  *(uint *)(*piVar15 + 0x2c) = *(uint *)(*piVar15 + 0x2c) | 0x1800;
  func_004356B4((int *)*piVar15);
  iVar7 = puVar3[0xc];
  *(float *)(iVar7 + 4) = fStack_dc;
  *(float *)(iVar7 + 8) = fStack_d8;
  *(undefined4 *)(iVar7 + 0xc) = uStack_d4;
  func_004356B4((int *)*puStack_50);
  *(undefined1 *)(puVar3[9] + 0x61) = 0;
  puVar9 = (undefined2 *)func_0054DDF4((int)puVar13,0);
  puVar3[-0x1e] = puVar9;
  puVar3[-0x1d] = puVar9;
  uStack_5c = puVar3[-0x53];
  func_0014EB8C(*piStack_4c,*piVar15,puVar9,&uStack_5c,(short)param_2[0x14],0,(short)DAT_0050b56c);
  *(int *)(puVar3[10] + 0x18) = *piVar15;
  func_004ED9C8(*piVar16);
  uStack_5c = puVar3[-0x53];
  func_004EDAD0(*piVar16,&uStack_5c);
  *(short *)(*piVar16 + 0x2c) = (short)param_2[0x14];
  func_004A879C(*DAT_0050b570,*piVar16,0);
  *(undefined1 *)((int)puVar3 + 6) = 6;
  puVar3[5] = puVar13;
  iVar7 = func_0010BA78(0x60);
  puVar3[6] = iVar7;
  puVar4 = DAT_0050b0c0;
  puVar3[7] = iVar7 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar12 = 6;
  puVar6 = (undefined4 *)(iVar7 + -8);
  do {
    uVar5 = puVar4[0x23];
    iVar12 = iVar12 + -1;
    puVar6[2] = puVar4[0x22];
    puVar6[3] = uVar5;
    uVar5 = puVar4[0x23];
    puVar6[4] = puVar4[0x22];
    puVar6[5] = uVar5;
    puVar6 = puVar6 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar6;
  if (uVar14 != 0) {
    puVar10 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar4[0xd];
      *puVar6 = puVar4[0xc];
      puVar6[1] = uVar5;
      puVar10 = puVar6;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar5 = puVar4[0xd];
      puVar10[2] = puVar4[0xc];
      puVar10[3] = uVar5;
      uVar5 = puVar4[0xd];
      puVar10[4] = puVar4[0xc];
      puVar10[5] = uVar5;
      puVar10 = puVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar7 = func_00100118((int)(puVar6 + 2),DAT_0050b574,0x24,6);
  }
  if (iVar7 != 0) {
    puVar3[3] = iVar7;
    puVar3[2] = 6;
  }
  iVar7 = DAT_0050b578;
  puVar3[-0x31] = puVar3;
  iVar12 = DAT_0050b588;
  *(undefined2 *)(iVar7 + (int)puVar13) = 6;
  pcStack_54 = s_cState_Wait_0050b57c;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,0,&iStack_58);
  puVar6 = (undefined4 *)puVar3[6];
  uVar5 = puVar4[3];
  uVar18 = puVar4[4];
  uVar19 = puVar4[5];
  uVar20 = puVar4[6];
  uVar21 = puVar4[7];
  *puVar6 = puVar4[2];
  puVar6[1] = uVar5;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar18;
  puVar6[1] = uVar19;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar20;
  puVar6[1] = uVar21;
  pcStack_54 = s_cState_Prepare_0050b58c;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,1,&iStack_58);
  iVar7 = puVar3[6];
  uVar18 = puVar4[9];
  uVar5 = puVar4[10];
  uVar19 = puVar4[0xb];
  uVar23 = *(undefined8 *)(puVar4 + 0xc);
  *(undefined4 *)(iVar7 + 8) = puVar4[8];
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar5;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 8) = (int)uVar23;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_54 = s_cState_Up_0050b59c;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,2,&iStack_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0xf];
  uVar18 = puVar4[0x10];
  uVar19 = puVar4[0x11];
  *(undefined4 *)(iVar7 + 0x10) = puVar4[0xe];
  *(undefined4 *)(iVar7 + 0x14) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar18;
  *(undefined4 *)(iVar7 + 0x14) = uVar19;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x10) = (int)uVar23;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_54 = s_cState_Down_0050b5a8;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,3,&iStack_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0x13];
  uVar18 = puVar4[0x14];
  uVar19 = puVar4[0x15];
  uVar20 = puVar4[0x16];
  uVar21 = puVar4[0x17];
  *(undefined4 *)(iVar7 + 0x18) = puVar4[0x12];
  *(undefined4 *)(iVar7 + 0x1c) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar18;
  *(undefined4 *)(iVar7 + 0x1c) = uVar19;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar20;
  *(undefined4 *)(iVar7 + 0x1c) = uVar21;
  pcStack_54 = s_cState_Freeze_0050b5b4;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,4,&iStack_58);
  iVar7 = puVar3[6];
  uVar18 = puVar4[0x1a];
  uVar20 = puVar4[0x1b];
  uVar5 = puVar4[0xc];
  uVar19 = puVar4[0xd];
  uVar21 = puVar4[0x19];
  *(undefined4 *)(iVar7 + 0x20) = puVar4[0x18];
  *(undefined4 *)(iVar7 + 0x24) = uVar21;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar18;
  *(undefined4 *)(iVar7 + 0x24) = uVar20;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar5;
  *(undefined4 *)(iVar7 + 0x24) = uVar19;
  pcStack_54 = s_cState_Melt_0050b5c4;
  iStack_58 = iVar12;
  func_0010BEC4((int)puVar3,5,&iStack_58);
  iVar7 = puVar3[6];
  uVar5 = puVar4[0x1d];
  uVar18 = puVar4[0x1e];
  uVar19 = puVar4[0x1f];
  uVar20 = puVar4[0x20];
  uVar21 = puVar4[0x21];
  *(undefined4 *)(iVar7 + 0x28) = puVar4[0x1c];
  *(undefined4 *)(iVar7 + 0x2c) = uVar5;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar18;
  *(undefined4 *)(iVar7 + 0x2c) = uVar19;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x28) = uVar20;
  *(undefined4 *)(iVar7 + 0x2c) = uVar21;
  func_0066B580(puVar3,0);
  piVar2 = DAT_0050b0d0;
  uVar14 = func_00111A64((uint *)(*DAT_0050b0d0 + 0x660));
  iVar7 = puVar3[-3];
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar7 + 0x80),(int)((ulonglong)uVar14 * 4 >> 0x20) << 0x1e,
                (float *)(puVar3 + -0x12));
  func_004CEAF0(*piStack_44);
  if (*(short *)(puVar3 + -0xfa) == 1) {
    uVar14 = (uint)*(short *)((int)puVar3 + -0x3ea);
    if ((int)uVar14 < 1) {
      uVar14 = 0xb4;
    }
    uVar11 = func_00111A64((uint *)(*piVar2 + 0x660));
    iVar7 = (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
  }
  else {
    iVar7 = (int)*(short *)((int)puVar3 + -0x3ea);
    if (iVar7 < 1) {
      iVar7 = 0xb4;
    }
  }
  puVar3[0x12] = iVar7;
  if ((short)param_2[10] == 1) {
    puVar3[0x11] = DAT_0050b5d0;
  }
  uVar5 = DAT_0050b5d4;
  if (*(char *)(puVar3 + 0x14) != '\0') {
    *(undefined1 *)(puVar3[9] + 0x21) = 0;
    *(undefined2 *)(*piStack_4c + 0x30) = 4;
    puVar3[-0x1b] = uVar5;
  }
  return puVar13;
}

