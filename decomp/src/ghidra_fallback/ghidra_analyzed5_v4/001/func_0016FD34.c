#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ED9C8(int param_1);
extern int func_004EDAB0(int param_1,undefined4 *param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB1C(int param_1,undefined2 param_2);
extern int func_004EDC5C(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00170108;
extern int DAT_0017010c;
extern undefined *DAT_00170110;
extern uint DAT_00170114;
extern undefined4 DAT_00170118;
extern undefined4 DAT_0017011c;
extern undefined4 DAT_00170120;
extern undefined4 DAT_00170124;
extern int DAT_00170128;
extern undefined4 *DAT_00170140;
extern int *DAT_00170144;
extern int *DAT_00170148;
extern char s_Actor_TileIce_kcl_0017012c[];
extern char s_cf_0017012c[];
extern char s_crack_0017014c[];

// USA 0016FD34 <- EU 0016FD34 (Ghidra, non-matching)
// GLOBAL DAT_00170108 int
// GLOBAL DAT_0017010c int
// GLOBAL DAT_00170110 undefined *
// GLOBAL DAT_00170114 uint
// GLOBAL DAT_00170118 undefined4
// GLOBAL DAT_0017011c undefined4
// GLOBAL DAT_00170120 undefined4
// GLOBAL DAT_00170124 undefined4
// GLOBAL DAT_00170128 int
// GLOBAL DAT_00170140 undefined4 *
// GLOBAL DAT_00170144 int *
// GLOBAL DAT_00170148 int *
// GLOBAL s_cf_0017012c string
// GLOBAL s_crack_0017014c string

int * func_0016FD34(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint unaff_r9;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define auStack_134 ((uint *)(albw_frame + 0xc))
  #define local_118 ((uint *)(albw_frame + 0x28))
  #define local_110 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_10c (*(undefined4 *)(albw_frame + 0x34))
  #define local_108 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_104 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_100 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_fc (*(undefined4 *)(albw_frame + 0x44))
  #define local_f8 (*(uint *)(albw_frame + 0x48))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_c0 (*(undefined1 *)(albw_frame + 0x80))
  #define local_bc (*(int * *)(albw_frame + 0x84))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_ac (*(undefined1 * *)(albw_frame + 0x94))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x98))
  #define local_a4 ((undefined1 *)(albw_frame + 0x9c))
  #define local_64 (*(int *)(albw_frame + 0xdc))
  #define local_60 (*(int *)(albw_frame + 0xe0))
  #define local_5c (*(char * *)(albw_frame + 0xe4))
  #define local_50 (*(int *)(albw_frame + 0xf0))
  #define local_4c (*(undefined4 *)(albw_frame + 0xf4))
  #define local_48 (*(uint * *)(albw_frame + 0xf8))
  #define local_44 ((uint *)(albw_frame + 0xfc))
  piVar1 = func_001E56CC(param_1,param_2);
  iVar4 = DAT_0017010c;
  iVar7 = DAT_00170108 + 0x74;
  *piVar1 = DAT_00170108;
  piVar1[200] = iVar7;
  piVar1[0x187] = 0;
  piVar1[0x188] = 0;
  piVar1[0x189] = iVar4;
  local_64 = piVar1[0xb4];
  puVar9 = (uint *)(piVar1 + 0x187);
  func_001E518C(piVar1,param_2,1,0,0);
  iVar7 = piVar1[0x11e];
  if (0 < iVar7) {
    iVar2 = func_0010CEE0(iVar7 * 0x3c,(int *)0x0,4);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = func_00100118(iVar2,DAT_00170110,0x3c,iVar7);
    }
    if (iVar3 != 0) {
      piVar1[0x188] = iVar3;
      piVar1[0x187] = iVar7;
    }
  }
  iVar7 = DAT_00170128;
  piVar11 = (int *)piVar1[0x120];
  uVar10 = 0;
  local_bc = piVar11 + piVar1[0x11e];
  if (piVar11 != local_bc) {
    local_50 = (int)&uStack_a8 + 3;
    uVar19 = (ulonglong)DAT_00170114;
    local_4c = DAT_00170124;
    uVar17 = CONCAT44(iVar4,DAT_0017011c);
    uVar18 = CONCAT44(DAT_00170118,DAT_00170120);
    local_48 = auStack_134;
    do {
      if (uVar10 < (uint)piVar1[0x181]) {
        piVar12 = *(int **)(piVar1[0x183] + uVar10 * 4);
      }
      else {
        piVar12 = (int *)0x0;
      }
      (**(code **)(*piVar12 + 0x10))(piVar12,0x24);
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
      }
      *(int **)(iVar4 + 0x20) = piVar12;
      puVar5 = (undefined4 *)func_0010BAB4(0x48);
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = func_004EDC9C(puVar5);
      }
      local_ac = local_a4;
      uStack_a8 = 0x40;
      *(undefined1 *)(local_50 + 0x40) = 0;
      local_a4[0] = 0;
      local_b0 = local_4c;
      func_00111A20((int)&local_b0,s_Actor_TileIce_kcl_0017012c,local_48);
      func_004EDC5C((int)puVar6,(int)&local_b0);
      func_004EDAB0((int)puVar6,(undefined4 *)(*piVar11 + 4));
      func_004ED9C8((int)puVar6);
      local_44[0] = piVar1[0xb3];
      func_004EDAD0((int)puVar6,local_44);
      func_004EDB1C((int)puVar6,(short)uVar10);
      *(short *)(puVar6 + 0xb) = (short)piVar1[0x15];
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
        iVar3 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar3 = piVar1[0x188];
      }
      uVar14 = *DAT_00170140;
      uVar15 = DAT_00170140[1];
      *(int *)(iVar3 + 4) = iVar4;
      *(undefined4 *)(iVar3 + 8) = uVar14;
      *(undefined4 *)(iVar3 + 0xc) = uVar15;
      piVar12 = DAT_00170144;
      if (uVar10 < *puVar9) {
        iVar4 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar4 = piVar1[0x188];
      }
      puVar6[10] = iVar4;
      func_004A879C(*piVar12,(int)puVar6,2);
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
      }
      *(undefined4 **)(iVar4 + 0x24) = puVar6;
      piVar12 = (int *)func_0054D964((int)piVar1,0);
      iVar3 = *piVar11;
      fVar16 = *(float *)(iVar3 + 8);
      iVar4 = *(int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 0xc);
      piVar12[1] = iVar4;
      piVar12[2] = (int)ALBW_AS_U32((fVar16 + ALBW_AS_F32(uVar19)));
      piVar12[3] = iVar3;
      iVar3 = (int)((ulonglong)uVar18 >> 0x20);
      piVar12[0x18] = iVar3;
      piVar12[0x16] = iVar3;
      func_004356B4(piVar12);
      *(undefined2 *)(piVar12 + 10) = 0x220;
      uVar8 = *puVar9;
      iVar3 = piVar1[0x188];
      if (uVar10 < uVar8) {
        uVar8 = uVar10 * 0xf;
        iVar3 = iVar3 + uVar10 * 0x3c;
      }
      *(int **)(iVar3 + 0x2c) = piVar12;
      if (uVar10 < *puVar9) {
        iVar4 = uVar10 * 0xf;
        uVar8 = piVar1[0x188] + uVar10 * 0x3c;
      }
      iVar3 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar3 = iVar3 + iVar4 * 4;
      }
      else {
        uVar8 = piVar1[0x188];
      }
      uVar14 = DAT_00170140[2];
      *(undefined4 *)(uVar8 + 0x1c) = DAT_00170140[3];
      *(int *)(uVar8 + 0x14) = iVar3;
      *(undefined4 *)(uVar8 + 0x18) = uVar14;
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
      }
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(*piVar11 + 8);
      puVar6 = (undefined4 *)func_0010BAB4(0xa8);
      piVar12 = DAT_00170148;
      if (puVar6 == (undefined4 *)0x0) {
        puVar13 = (uint *)0x0;
      }
      else {
        (**(code **)(*DAT_00170148 + 8))(DAT_00170148);
        local_5c = (char *)piVar12[1];
        local_60 = iVar7;
        puVar13 = func_0016A2FC(puVar6,1,&local_60,1);
      }
      local_5c = s_crack_0017014c;
      local_60 = iVar7;
      func_00169608(puVar13,0,&local_60,*(int *)(local_64 + 0x1c8));
      func_0016A02C((int)puVar13,-1,(int *)0xffffffff,0);
      local_110 = &local_10c;
      local_118[1] = 3;
      uStack_104 = (undefined4)uVar17;
      local_108 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uStack_100 = (undefined4)uVar18;
      local_c4 = 0;
      local_c0 = 0;
      local_10c = 0;
      local_118[0] = 1;
      unaff_r9 = unaff_r9 | 0xff;
      uStack_fc = uStack_104;
      local_f8 = unaff_r9;
      func_0016898C((int)puVar13,local_118);
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
      }
      *(uint **)(iVar4 + 0x28) = puVar13;
      if (uVar10 < *puVar9) {
        iVar4 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar4 = piVar1[0x188];
      }
      *(undefined1 *)(iVar4 + 0x34) = 0;
      if (uVar10 < *puVar9) {
        iVar4 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar4 = piVar1[0x188];
      }
      *(undefined1 *)(iVar4 + 0x35) = 0x3c;
      if (uVar10 < *puVar9) {
        iVar4 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar4 = piVar1[0x188];
      }
      *(char *)(iVar4 + 0x36) = (char)uVar10;
      if (uVar10 < *puVar9) {
        iVar4 = piVar1[0x188] + uVar10 * 0x3c;
      }
      else {
        iVar4 = piVar1[0x188];
      }
      *(undefined1 *)(iVar4 + 0x37) = 0;
      iVar4 = piVar1[0x188];
      if (uVar10 < *puVar9) {
        iVar4 = iVar4 + uVar10 * 0x3c;
      }
      *(undefined1 *)(iVar4 + 0x38) = 0;
      if (*(short *)(*piVar11 + 0x2e) == 1) {
        iVar4 = piVar1[0x188];
        if (uVar10 < *puVar9) {
          iVar4 = iVar4 + uVar10 * 0x3c;
        }
        *(undefined1 *)(iVar4 + 0x3b) = 1;
        if (uVar10 < *puVar9) {
          iVar4 = piVar1[0x188] + uVar10 * 0x3c;
        }
        else {
          iVar4 = piVar1[0x188];
        }
        *(undefined1 *)(iVar4 + 0x34) = 3;
        func_004CF478(*(int *)(iVar4 + 0x20),0);
        func_004A8304(*DAT_00170144,*(int *)(iVar4 + 0x24));
      }
      else {
        iVar4 = piVar1[0x188];
        if (uVar10 < *puVar9) {
          iVar4 = iVar4 + uVar10 * 0x3c;
        }
        *(undefined1 *)(iVar4 + 0x3b) = 0;
      }
      piVar11 = piVar11 + 1;
      uVar10 = uVar10 + 1;
    } while (piVar11 != local_bc);
  }
  return piVar1;
}

