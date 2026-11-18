#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined *DAT_00238734;
extern uint DAT_00238738;
extern uint DAT_0023873c;
extern int DAT_00238740;
extern float DAT_00238744;
extern undefined4 DAT_00238748;
extern undefined4 DAT_0023874c;
extern undefined4 DAT_00238750;
extern int *DAT_00238754;
extern undefined4 DAT_00238758;
extern int DAT_0023875c;
extern undefined *DAT_00238760;

// USA 0023830C <- EU 0023830C (Ghidra, non-matching)
// GLOBAL DAT_00238734 undefined *
// GLOBAL DAT_00238738 uint
// GLOBAL DAT_0023873c uint
// GLOBAL DAT_00238740 int
// GLOBAL DAT_00238744 float
// GLOBAL DAT_00238748 undefined4
// GLOBAL DAT_0023874c undefined4
// GLOBAL DAT_00238750 undefined4
// GLOBAL DAT_00238754 int *
// GLOBAL DAT_00238758 undefined4
// GLOBAL DAT_0023875c int
// GLOBAL DAT_00238760 undefined *

void func_0023830C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  longlong lVar19;
  ulonglong uVar20;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(undefined2 *)(albw_frame + 0xc))
  #define local_50 (*(uint *)(albw_frame + 0x50))
  #define local_4c ((uint *)(albw_frame + 0x54))
  iVar11 = *(int *)(param_1 + 0x478);
  if (0 < iVar11) {
    puVar4 = (undefined4 *)func_0010CEE0(iVar11 * 0xd8 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xd8;
      puVar4[1] = iVar11;
      iVar5 = func_00100118((int)(puVar4 + 2),DAT_00238734,0xd8,iVar11);
    }
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x630) = iVar5;
      *(int *)(param_1 + 0x62c) = iVar11;
    }
  }
  uVar3 = DAT_00238750;
  uVar2 = DAT_0023874c;
  uVar1 = DAT_00238748;
  piVar13 = *(int **)(param_1 + 0x480);
  uVar14 = 0;
  piVar6 = piVar13 + *(int *)(param_1 + 0x478);
  if (piVar13 != piVar6) {
    lVar19 = (ulonglong)DAT_00238738 << 0x20;
    uVar20 = (ulonglong)DAT_0023873c;
    fVar18 = DAT_00238744;
    iVar11 = DAT_00238740;
    do {
      iVar5 = (int)((ulonglong)lVar19 >> 0x20);
      if (uVar14 < *(uint *)(param_1 + 0x62c)) {
        iVar12 = *(int *)(param_1 + 0x630) + uVar14 * 0xd8;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x630);
      }
      piVar7 = (int *)func_0054D964(param_1,0);
      piVar7[0x16] = iVar5;
      piVar7[0x17] = iVar11;
      piVar7[0x18] = iVar5;
      piVar7[0xb] = piVar7[0xb] & 0xfffff8ffU | 0x500;
      iVar8 = *piVar13;
      lVar19 = CONCAT44(iVar5,*(undefined4 *)(iVar8 + 4));
      uVar17 = CONCAT44(*(undefined4 *)(iVar8 + 8),*(float *)(iVar8 + 0xc) - ALBW_AS_F32(uVar20));
      puVar9 = (undefined4 *)func_0010BAB4(0x48);
      puVar4 = (undefined4 *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        puVar4 = func_004EDC9C(puVar9);
      }
      *(undefined4 **)(iVar12 + 0x7c) = puVar4;
      *(float *)(param_1 + 0x628) = fVar18;
      piVar7[0xb] = piVar7[0xb] | 0x85;
      *(undefined2 *)(piVar7 + 10) = 0x66;
      piVar7[1] = (int)lVar19;
      piVar7[2] = (int)ALBW_AS_U32((ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)) + fVar18));
      piVar7[3] = (int)uVar17;
      func_004356B4(piVar7);
      puVar4[6] = piVar7;
      local_50 = *(uint *)(param_1 + 0x2cc);
      func_004EDAD0((int)puVar4,&local_50);
      piVar7 = DAT_00238754;
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(param_1 + 0x54);
      func_004A879C(*piVar7,(int)puVar4,2);
      piVar7 = (int *)func_0054D964(param_1,0);
      piVar7[0x16] = iVar11;
      piVar7[0x17] = iVar11;
      piVar7[0x18] = iVar11;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = func_004EDC9C(puVar4);
      }
      *(undefined4 **)(iVar12 + 0x80) = puVar4;
      iVar5 = *piVar13;
      iVar8 = *(int *)(iVar5 + 4);
      fVar16 = *(float *)(iVar5 + 8);
      iVar5 = *(int *)(iVar5 + 0xc);
      *(float *)(param_1 + 0x628) = fVar18;
      piVar7[0xb] = piVar7[0xb] | 0x85;
      local_94 = (undefined2)DAT_00238758;
      *(undefined2 *)(piVar7 + 10) = local_94;
      piVar7[1] = iVar8;
      piVar7[2] = (int)ALBW_AS_U32((fVar16 + fVar18));
      piVar7[3] = iVar5;
      func_004356B4(piVar7);
      puVar4[6] = piVar7;
      local_4c[0] = *(uint *)(param_1 + 0x2cc);
      func_004EDAD0((int)puVar4,local_4c);
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(param_1 + 0x54);
      func_004A879C(*DAT_00238754,(int)puVar4,2);
      if (uVar14 < *(uint *)(param_1 + 0x604)) {
        uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar14 * 4);
      }
      else {
        uVar10 = 0;
      }
      *(undefined4 *)(iVar12 + 8) = uVar10;
      if (uVar14 < *(uint *)(param_1 + 0x61c)) {
        uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x624) + uVar14 * 4);
      }
      else {
        uVar10 = 0;
      }
      *(undefined4 *)(iVar12 + 0xc) = uVar10;
      *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)(*piVar13 + 0x20);
      iVar5 = *piVar13;
      uVar10 = *(undefined4 *)(iVar5 + 4);
      uVar15 = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar12 + 0x24) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar12 + 0x1c) = uVar10;
      *(undefined4 *)(iVar12 + 0x20) = uVar15;
      iVar5 = *piVar13;
      uVar10 = *(undefined4 *)(iVar5 + 8);
      uVar15 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar12 + 0x14) = uVar10;
      *(undefined4 *)(iVar12 + 0x18) = uVar15;
      puVar9 = (undefined4 *)func_0010BAB4(0x48);
      puVar4 = (undefined4 *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        puVar4 = func_0034CAA0(puVar9);
      }
      *(undefined4 **)(iVar12 + 0xcc) = puVar4;
      puVar9 = (undefined4 *)func_0010BAB4(0x48);
      puVar4 = (undefined4 *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        puVar4 = func_0034CAA0(puVar9);
      }
      *(undefined4 **)(iVar12 + 0xd0) = puVar4;
      puVar4 = (undefined4 *)func_0010BAB4(0x58);
      iVar5 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        func_00110490(puVar4,0x58);
        puVar4 = func_0010CE7C(puVar4);
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = puVar4;
        puVar4[7] = 0;
        puVar4[8] = 0;
        *(undefined1 *)(puVar4 + 0xe) = 0;
        *puVar4 = uVar1;
        uVar10 = *(undefined4 *)(DAT_0023875c + 0x10);
        uVar15 = *(undefined4 *)(DAT_0023875c + 0x14);
        puVar9 = puVar4 + 9;
        if (puVar9 != (undefined4 *)0x0) {
          puVar4[10] = puVar4;
          puVar4[0xb] = uVar10;
          puVar4[0xc] = uVar15;
          *puVar9 = uVar2;
        }
        puVar4[8] = puVar9;
        *puVar4 = uVar3;
        iVar5 = func_00100118((int)puVar4 + 0x39,DAT_00238760,5,6);
        iVar5 = iVar5 + -0x39;
      }
      *(int *)(iVar12 + 0x9c) = iVar5;
      puVar4 = (undefined4 *)func_0010BAB4(0x58);
      iVar5 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        func_00110490(puVar4,0x58);
        puVar4 = func_0010CE7C(puVar4);
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = puVar4;
        puVar4[7] = 0;
        puVar4[8] = 0;
        *(undefined1 *)(puVar4 + 0xe) = 0;
        *puVar4 = uVar1;
        uVar10 = *(undefined4 *)(DAT_0023875c + 0x10);
        uVar15 = *(undefined4 *)(DAT_0023875c + 0x14);
        puVar9 = puVar4 + 9;
        if (puVar9 != (undefined4 *)0x0) {
          puVar4[10] = puVar4;
          puVar4[0xb] = uVar10;
          puVar4[0xc] = uVar15;
          *puVar9 = uVar2;
        }
        puVar4[8] = puVar9;
        *puVar4 = uVar3;
        iVar5 = func_00100118((int)puVar4 + 0x39,DAT_00238760,5,6);
        iVar5 = iVar5 + -0x39;
      }
      *(int *)(iVar12 + 0xa0) = iVar5;
      puVar4 = (undefined4 *)func_00584CA8(*(int *)(iVar12 + 0xc),0,0);
      *(undefined4 *)(iVar12 + 0xa4) = *puVar4;
      puVar4 = (undefined4 *)func_00584CA8(*(int *)(iVar12 + 0xc),0,1);
      *(undefined4 *)(iVar12 + 0xa8) = *puVar4;
      iVar5 = *(int *)(iVar12 + 0x9c);
      piVar13 = piVar13 + 1;
      uVar14 = uVar14 + 1;
      *(undefined1 *)(iVar5 + 0x3d) = 1;
      *(undefined4 *)(iVar5 + 0x39) = *(undefined4 *)(iVar12 + 0xa4);
      iVar5 = *(int *)(iVar12 + 0x9c);
      *(undefined1 *)(iVar5 + 0x42) = 1;
      *(undefined4 *)(iVar5 + 0x3e) = *(undefined4 *)(iVar12 + 0xa8);
      iVar5 = *(int *)(iVar12 + 0xa0);
      *(undefined1 *)(iVar5 + 0x3d) = 1;
      *(undefined4 *)(iVar5 + 0x39) = *(undefined4 *)(iVar12 + 0xa4);
      iVar5 = *(int *)(iVar12 + 0xa0);
      *(undefined1 *)(iVar5 + 0x42) = 1;
      *(undefined4 *)(iVar5 + 0x3e) = *(undefined4 *)(iVar12 + 0xa8);
    } while (piVar13 != piVar6);
  }
  return;
}

