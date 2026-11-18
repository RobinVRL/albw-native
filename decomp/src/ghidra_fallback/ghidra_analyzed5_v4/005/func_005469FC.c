#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_00546c88;
extern float DAT_00546c8c;
extern float DAT_00546c90;
extern uint DAT_00546c94;

// USA 005469FC <- EU 005469D4 (Ghidra, non-matching)
// GLOBAL DAT_00546c88 float
// GLOBAL DAT_00546c8c float
// GLOBAL DAT_00546c90 float
// GLOBAL DAT_00546c94 uint

float func_005469FC(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fparam_0;
  float fVar12;
  float fparam_0_00;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define fStack_e4 (*(float *)(albw_frame + 0xc))
  #define fStack_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define fStack_d8 (*(float *)(albw_frame + 0x18))
  #define fStack_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define fStack_cc (*(float *)(albw_frame + 0x24))
  #define fStack_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 (*(float *)(albw_frame + 0x2c))
  #define fStack_c0 (*(float *)(albw_frame + 0x30))
  #define fStack_bc (*(float *)(albw_frame + 0x34))
  #define local_b8 (*(float *)(albw_frame + 0x38))
  #define fStack_b4 (*(float *)(albw_frame + 0x3c))
  #define fStack_b0 (*(float *)(albw_frame + 0x40))
  #define local_ac (*(float *)(albw_frame + 0x44))
  #define fStack_a8 (*(float *)(albw_frame + 0x48))
  #define fStack_a4 (*(float *)(albw_frame + 0x4c))
  #define local_a0 (*(float *)(albw_frame + 0x50))
  #define fStack_9c (*(float *)(albw_frame + 0x54))
  #define fStack_98 (*(float *)(albw_frame + 0x58))
  #define local_94 (*(float *)(albw_frame + 0x5c))
  #define fStack_90 (*(float *)(albw_frame + 0x60))
  #define fStack_8c (*(float *)(albw_frame + 0x64))
  #define local_88 (*(float *)(albw_frame + 0x68))
  #define fStack_84 (*(float *)(albw_frame + 0x6c))
  #define fStack_80 (*(float *)(albw_frame + 0x70))
  #define local_7c (*(float *)(albw_frame + 0x74))
  #define fStack_78 (*(float *)(albw_frame + 0x78))
  #define fStack_74 (*(float *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define fStack_6c (*(float *)(albw_frame + 0x84))
  #define fStack_68 (*(float *)(albw_frame + 0x88))
  #define local_64 (*(float *)(albw_frame + 0x8c))
  #define fStack_60 (*(float *)(albw_frame + 0x90))
  #define fStack_5c (*(float *)(albw_frame + 0x94))
  #define local_58 (*(float *)(albw_frame + 0x98))
  #define fStack_54 (*(float *)(albw_frame + 0x9c))
  #define fStack_50 (*(float *)(albw_frame + 0xa0))
  iVar4 = 0x14;
  iVar1 = *(int *)(param_1 + 0x70);
  piVar3 = *(int **)(iVar1 + 0x28);
  uVar15 = (ulonglong)DAT_00546c94;
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if (piVar3 != (int *)0x0 && iVar1 != 0) {
    iVar1 = *piVar3;
  }
  else {
    iVar1 = 0;
  }
  uVar10 = CONCAT44(*(undefined4 *)(iVar1 + 0x18),DAT_00546c8c);
  uVar11 = *(undefined8 *)(iVar1 + 0x1c);
  fVar13 = DAT_00546c8c;
  fVar14 = DAT_00546c88;
  fVar12 = DAT_00546c90;
  do {
    piVar3 = *(int **)(param_2 + 0x28);
    if ((piVar3 == (int *)0x0) || (*(int *)(param_2 + 0x20) == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar3;
    }
    if ((piVar3 == (int *)0x0) ||
       (uVar2 = *(uint *)(param_2 + 0x20) - 1, *(uint *)(param_2 + 0x20) <= uVar2)) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar3[uVar2];
    }
    fVar9 = ALBW_AS_F32(uVar10);
    fVar8 = fVar14 - fVar9;
    fVar6 = fVar9 * ALBW_AS_F32(uVar15);
    fparam_0_00 = fVar9 * fVar9 * fVar9;
    fVar7 = fVar8 * fVar8 * fVar8;
    fparam_0 = fVar6 * fVar8 * fVar8;
    fVar8 = fVar6 * fVar9 * fVar8;
    if (*(char *)(param_1 + 0x74) == '\0') {
      func_00115D70(&local_58,(float *)(iVar1 + 0x18),fVar7);
      local_a0 = local_58;
      fStack_9c = fStack_54;
      fStack_98 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar1 + 0x30),fparam_0);
      local_94 = local_58;
      fStack_90 = fStack_54;
      fStack_8c = fStack_50;
      func_00115C54(&local_58,&local_a0,&local_94);
      local_88 = local_58;
      fStack_84 = fStack_54;
      fStack_80 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar5 + 0x24),fVar8);
      local_7c = local_58;
      fStack_78 = fStack_54;
      fStack_74 = fStack_50;
      func_00115C54(&local_58,&local_88,&local_7c);
      local_70 = local_58;
      fStack_6c = fStack_54;
      fStack_68 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar5 + 0x18),fparam_0_00);
      local_64 = local_58;
      fStack_60 = fStack_54;
      fStack_5c = fStack_50;
      func_00115C54(&local_58,&local_70,&local_64);
    }
    else {
      func_00115D70(&local_58,(float *)(iVar1 + 0x18),fVar7);
      local_e8 = local_58;
      fStack_e4 = fStack_54;
      fStack_e0 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar1 + 0x24),fparam_0);
      local_dc = local_58;
      fStack_d8 = fStack_54;
      fStack_d4 = fStack_50;
      func_00115C54(&local_58,&local_e8,&local_dc);
      local_d0 = local_58;
      fStack_cc = fStack_54;
      fStack_c8 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar5 + 0x30),fVar8);
      local_c4 = local_58;
      fStack_c0 = fStack_54;
      fStack_bc = fStack_50;
      func_00115C54(&local_58,&local_d0,&local_c4);
      local_b8 = local_58;
      fStack_b4 = fStack_54;
      fStack_b0 = fStack_50;
      func_00115D70(&local_58,(float *)(iVar5 + 0x18),fparam_0_00);
      local_ac = local_58;
      fStack_a8 = fStack_54;
      fStack_a4 = fStack_50;
      func_00115C54(&local_58,&local_b8,&local_ac);
    }
    iVar4 = iVar4 + -1;
    fVar6 = local_58 - ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
    fVar7 = fStack_54 - ALBW_AS_F32(uVar11);
    fVar8 = fStack_50 - ALBW_AS_F32(((ulonglong)uVar11 >> 0x20));
    uVar10 = CONCAT44(local_58,ALBW_AS_F32(uVar10) + fVar13);
    uVar11 = CONCAT44(fStack_50,fStack_54);
    fVar12 = fVar12 + SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
  } while (0 < iVar4);
  return fVar12;
}

