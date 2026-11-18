#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00435610(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_0014992c;
extern uint DAT_00149930;
extern int DAT_00149934;
extern int DAT_00149938;
extern float DAT_0014993c;
extern int DAT_00149940;
extern int DAT_00149944;
extern undefined4 *DAT_00149948;
extern undefined4 DAT_0014994c;
extern float DAT_00149950;
extern float DAT_00149954;
extern float DAT_00149958;
extern undefined4 DAT_0014995c;
extern undefined4 DAT_00149960;
extern int DAT_00149970;
extern undefined4 DAT_00149974;
extern float DAT_00149978;
extern float DAT_0014997c;
extern int *DAT_00149b28;
extern float DAT_00149b2c;
extern int DAT_00149b30;
extern float DAT_00149b34;
extern float DAT_00149b38;
extern undefined4 DAT_00149b3c;
extern char s_Ef_Tornado_00149964[];

// USA 00149560 <- EU 00149560 (Ghidra, non-matching)
// GLOBAL DAT_0014992c int
// GLOBAL DAT_00149930 uint
// GLOBAL DAT_00149934 int
// GLOBAL DAT_00149938 int
// GLOBAL DAT_0014993c float
// GLOBAL DAT_00149940 int
// GLOBAL DAT_00149944 int
// GLOBAL DAT_00149948 undefined4 *
// GLOBAL DAT_0014994c undefined4
// GLOBAL DAT_00149950 float
// GLOBAL DAT_00149954 float
// GLOBAL DAT_00149958 float
// GLOBAL DAT_0014995c undefined4
// GLOBAL DAT_00149960 undefined4
// GLOBAL DAT_00149970 int
// GLOBAL DAT_00149974 undefined4
// GLOBAL DAT_00149978 float
// GLOBAL DAT_0014997c float
// GLOBAL DAT_00149b28 int *
// GLOBAL DAT_00149b2c float
// GLOBAL DAT_00149b30 int
// GLOBAL DAT_00149b34 float
// GLOBAL DAT_00149b38 float
// GLOBAL DAT_00149b3c undefined4
// GLOBAL s_Ef_Tornado_00149964 string

int func_00149560(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 extraout_r1;
  undefined4 *puVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_f4 ((uint *)(albw_frame + 0xc))
  #define local_ec (*(undefined4 * *)(albw_frame + 0x14))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_e4 (*(float *)(albw_frame + 0x1c))
  #define iStack_e0 (*(int *)(albw_frame + 0x20))
  #define local_dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_d8 (*(int *)(albw_frame + 0x28))
  #define local_d4 (*(uint *)(albw_frame + 0x2c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_9c (*(undefined1 *)(albw_frame + 0x64))
  #define local_94 (*(float * *)(albw_frame + 0x6c))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x70))
  #define local_8c (*(undefined4 *)(albw_frame + 0x74))
  #define local_88 (*(undefined4 *)(albw_frame + 0x78))
  #define local_84 (*(uint *)(albw_frame + 0x7c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x84))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x88))
  #define local_74 (*(undefined4 * *)(albw_frame + 0x8c))
  #define local_70 (*(float *)(albw_frame + 0x90))
  #define local_6c (*(undefined1 *)(albw_frame + 0x94))
  #define local_6b (*(undefined1 *)(albw_frame + 0x95))
  #define local_64 (*(uint *)(albw_frame + 0x9c))
  #define local_60 (*(int *)(albw_frame + 0xa0))
  #define local_5c (*(char * *)(albw_frame + 0xa4))
  #define local_58 (*(float *)(albw_frame + 0xa8))
  #define local_54 (*(float *)(albw_frame + 0xac))
  #define fStack_50 (*(float *)(albw_frame + 0xb0))
  #define local_4c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_48 (*(float *)(albw_frame + 0xb8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_40 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_3c (*(float *)(albw_frame + 0xc4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xc8))
  piVar3 = func_00150E40(param_1,param_2);
  uVar1 = DAT_00149930;
  iVar9 = DAT_0014992c;
  piVar3[200] = DAT_0014992c + 0x58;
  *piVar3 = iVar9;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  iVar9 = DAT_00149934;
  piVar3[0x107] = uVar1;
  piVar3[0x108] = iVar9;
  piVar3[0x106] = 0;
  iVar4 = DAT_00149940;
  fVar18 = DAT_0014993c;
  iVar9 = DAT_00149938;
  piVar3[0x109] = DAT_00149938;
  iVar2 = DAT_00149944;
  piVar3[0x10a] = iVar4;
  piVar3[0x10b] = (int)ALBW_AS_U32(fVar18);
  piVar3[0x10c] = iVar2;
  piVar3[0x110] = piVar3[0xf4];
  piVar3[0x111] = piVar3[0xf5];
  piVar3[0x112] = piVar3[0xf6];
  fVar16 = func_0054DE3C(piVar3,0,1);
  piVar3[0x113] = (int)ALBW_AS_U32(fVar16);
  piVar3[0x114] = iVar9;
  piVar3[0x115] = 0;
  *(undefined1 *)(piVar3 + 0x116) = 1;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x117] = iVar4;
  iVar4 = func_004EE484(piVar3 + 0x118);
  puVar5 = func_0014D9B4((undefined4 *)(iVar4 + 100),fVar18);
  puVar8 = DAT_00149948;
  puVar5[3] = 0;
  uVar12 = puVar8[3];
  puVar14 = puVar5 + -0x131;
  puVar5[4] = puVar8[2];
  puVar5[5] = uVar12;
  puVar5[2] = DAT_0014994c;
  uVar12 = DAT_0014995c;
  fVar16 = DAT_00149958;
  *(bool *)((int)puVar5 + -0x6b) = ALBW_AS_F32(param_2[0x11]) != fVar18;
  puVar5[-0x1c] = param_2[0x13];
  fVar17 = DAT_00149950;
  if (*(char *)((int)puVar5 + -0x6b) == '\0') {
    fVar17 = DAT_00149954;
  }
  puVar5[-0x24] = ALBW_AS_U32(fVar17 * fVar16);
  puVar5[-0x23] = uVar12;
  puVar5[-0x22] = ALBW_AS_U32(fVar17 * fVar16);
  uVar6 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[-0x2e] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_00149960,1);
  }
  puVar5[-0x2d] = puVar8;
  iVar4 = DAT_00149970;
  local_5c = s_Ef_Tornado_00149964;
  local_60 = DAT_00149970;
  func_00169688((uint *)puVar5[-0x2d],0,&local_60,*(int *)(puVar5[-0x7d] + 0x1c8));
  func_0016A02C(puVar5[-0x2d],-1,(int *)0xffffffff,0);
  local_f4[1] = 3;
  uVar19 = CONCAT44(uVar12,DAT_00149974);
  local_ec = &local_e8;
  local_a0 = 10;
  local_9c = 0;
  local_e8 = 0;
  local_f4[0] = 1;
  local_d4 = (uint)(puVar5 + -0x2d) | 0xff;
  local_dc = DAT_00149974;
  local_e4 = fVar18;
  iStack_e0 = iVar9;
  local_d8 = iVar9;
  func_0016898C(puVar5[-0x2d],local_f4);
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0016A2FC(puVar7,1,DAT_00149960,1);
  }
  puVar5[-0x2c] = puVar8;
  local_5c = s_Ef_Tornado_00149964;
  local_60 = iVar4;
  func_00169608((uint *)puVar5[-0x2c],0,&local_60,*(int *)(puVar5[-0x7d] + 0x1c8));
  func_0016A02C(puVar5[-0x2c],-1,(int *)0xffffffff,0);
  local_ec = &local_e8;
  local_f4[1] = 3;
  local_a0 = 10;
  local_9c = 0;
  local_e8 = 0;
  local_f4[0] = 1;
  local_dc = (undefined4)uVar19;
  local_d4 = (uint)(puVar5 + -0x2c) | 0xff;
  local_e4 = fVar18;
  iStack_e0 = iVar9;
  local_d8 = iVar9;
  func_0016898C(puVar5[-0x2c],local_f4);
  pfVar10 = (float *)0x0;
  if (*(char *)((int)puVar5 + -0x6b) != '\0') {
    iVar9 = puVar5[-0x2e];
    fVar16 = *(float *)(iVar9 + 0x74) * DAT_00149978;
    fVar17 = *(float *)(iVar9 + 0x7c) * DAT_00149978;
    *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
    pfVar10 = (float *)(iVar9 + 0x74);
    *pfVar10 = fVar16;
    *(undefined4 *)(iVar9 + 0x78) = *(undefined4 *)(iVar9 + 0x78);
    *(float *)(iVar9 + 0x7c) = fVar17;
  }
  local_48 = DAT_0014997c;
  uVar12 = *DAT_00149948;
  uVar6 = DAT_00149948[1];
  puVar5[3] = puVar14;
  puVar5[4] = uVar12;
  puVar5[5] = uVar6;
  local_8c = 0;
  local_84 = DAT_00149930 | (uint)pfVar10 & 0xffff0000;
  local_88 = 0;
  uStack_7c = 0;
  local_6c = 0;
  local_6b = 1;
  local_4c = puVar5[-0x3d];
  uStack_44 = puVar5[-0x3b];
  local_48 = ALBW_AS_F32(puVar5[-0x3c]) + local_48;
  local_40 = puVar5[-0x3d];
  uStack_38 = puVar5[-0x3b];
  local_78 = &local_40;
  local_3c = ALBW_AS_F32(puVar5[-0x3c]) + ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
  local_74 = &local_4c;
  local_80 = 0x7f;
  local_94 = &local_58;
  uVar12 = 3;
  local_90 = puVar5 + 2;
  local_70 = fVar18;
  iVar4 = func_004A8030(*DAT_00149b28,(int *)&local_94,3);
  fVar18 = DAT_00149b38;
  iVar9 = DAT_00149b30;
  if (iVar4 != 0) {
    fVar16 = (ALBW_AS_F32(puVar5[-0x23]) -
             SQRT(local_58 * local_58 + local_54 * local_54 + fStack_50 * fStack_50)) - DAT_00149b2c
    ;
    puVar5[-0x23] = ALBW_AS_U32(fVar16);
    if ((int)ALBW_AS_U32(fVar16) <= iVar9) {
      fVar16 = DAT_00149b34;
    }
    puVar5[-0x23] = ALBW_AS_U32(fVar16);
    fVar16 = fVar16 * fVar18;
    puVar5[-0x1d] = ALBW_AS_U32(fVar16);
    if (fVar16 != 1.0) {
      iVar9 = puVar5[-0x2e];
      uVar12 = *(undefined4 *)(iVar9 + 0x7c);
      *(undefined4 *)(iVar9 + 0x74) = *(undefined4 *)(iVar9 + 0x74);
      *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
      *(float *)(iVar9 + 0x78) = *(float *)(iVar9 + 0x78) * fVar16;
      *(undefined4 *)(iVar9 + 0x7c) = uVar12;
    }
  }
  puVar5[-0x20] = ALBW_AS_U32(ALBW_AS_F32(puVar5[-0x20]) + ALBW_AS_F32(puVar5[-0x23]) * ALBW_AS_F32(puVar5[-0x1e]));
  uVar13 = *(uint *)(puVar5[-0x1a] + 0x2c);
  *(uint *)(puVar5[-0x1a] + 0x2c) = uVar13 | 0x20000;
  *(uint *)(puVar5[-0x1a] + 0x2c) = uVar13 | 0x20008;
  iVar9 = puVar5[-0x1a];
  *(undefined4 *)(iVar9 + 4) = puVar5[-0x21];
  piVar3 = (int *)puVar5[-0x20];
  *(int **)(iVar9 + 8) = piVar3;
  *(undefined4 *)(iVar9 + 0xc) = puVar5[-0x1f];
  func_004356B4((int *)puVar5[-0x1a]);
  func_00435610((int)puVar14,extraout_r1,uVar12,piVar3);
  uVar12 = DAT_00149b3c;
  puVar5[-0x2a] = 0x3c;
  puVar5[-0x29] = uVar12;
  puVar5[-0x2b] = 0;
  bVar15 = *(char *)((int)puVar5 + -0x6b) != '\0';
  uVar13 = (uint)bVar15;
  if (!bVar15) {
    uVar13 = 0;
  }
  iVar9 = func_0054DDF4((int)puVar14,uVar13);
  puVar5[-0x49] = iVar9;
  puVar5[-0x48] = iVar9;
  puVar11 = (undefined2 *)func_0054DDF4((int)puVar14,(uint)(*(char *)((int)puVar5 + -0x6b) != '\0'))
  ;
  local_64 = puVar5[-0x7e];
  func_0014EB8C((int)(puVar5 + -0x19),puVar5[-0x1a],puVar11,&local_64,
                *(undefined2 *)(puVar5 + -0x11c),0,(short)uVar1);
  return (int)puVar14;
}

