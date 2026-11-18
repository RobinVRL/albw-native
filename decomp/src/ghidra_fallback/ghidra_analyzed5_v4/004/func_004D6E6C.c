#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern undefined *DAT_004d72d8;
extern int *DAT_004d72dc;
extern int *DAT_004d72e0;
extern int *DAT_004d72e4;
extern int *DAT_004d72e8;
extern int *DAT_004d72ec;
extern int *DAT_004d72f0;
extern undefined4 DAT_004d72f4;
extern int DAT_004d72f8;
extern int DAT_004d72fc;
extern uint DAT_004d7300;
extern undefined4 DAT_004d7304;
extern undefined4 DAT_004d7308;
extern int *DAT_004d730c;
extern undefined4 DAT_004d7310;
extern undefined4 DAT_004d7314;
extern int *DAT_004d7318;

// USA 004D6E6C <- EU 004D6E44 (Ghidra, non-matching)
// GLOBAL DAT_004d72d8 undefined *
// GLOBAL DAT_004d72dc int *
// GLOBAL DAT_004d72e0 int *
// GLOBAL DAT_004d72e4 int *
// GLOBAL DAT_004d72e8 int *
// GLOBAL DAT_004d72ec int *
// GLOBAL DAT_004d72f0 int *
// GLOBAL DAT_004d72f4 undefined4
// GLOBAL DAT_004d72f8 int
// GLOBAL DAT_004d72fc int
// GLOBAL DAT_004d7300 uint
// GLOBAL DAT_004d7304 undefined4
// GLOBAL DAT_004d7308 undefined4
// GLOBAL DAT_004d730c int *
// GLOBAL DAT_004d7310 undefined4
// GLOBAL DAT_004d7314 undefined4
// GLOBAL DAT_004d7318 int *

void func_004D6E6C(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined2 *)(albw_frame + 0x0))
  #define local_54 (*(uint *)(albw_frame + 0x1c))
  #define local_50 ((uint *)(albw_frame + 0x20))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  iVar12 = *(int *)(param_1 + 0x478);
  if (0 < iVar12) {
    iVar2 = func_0010CEE0(iVar12 * 0x38,(int *)0x0,4);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = func_00100118(iVar2,DAT_004d72d8,0x38,iVar12);
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x620) = iVar3;
      *(int *)(param_1 + 0x61c) = iVar12;
    }
  }
  func_00588BE4(param_1);
  iVar12 = func_00588BE4(param_1);
  if ((((iVar12 == *DAT_004d72dc) || (iVar12 == *DAT_004d72e0)) || (iVar12 == *DAT_004d72e4)) ||
     (((iVar12 == *DAT_004d72e8 || (iVar12 == *DAT_004d72ec)) || (iVar12 == *DAT_004d72f0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  piVar15 = *(int **)(param_1 + 0x480);
  piVar10 = piVar15 + *(int *)(param_1 + 0x478);
  puVar13 = (uint *)(param_1 + 0x61c);
  if (bVar1) {
    uVar14 = 0;
    *(undefined4 *)(param_1 + 0x624) = DAT_004d72f4;
    if (piVar15 != piVar10) {
      local_44 = param_1 + 0x600;
      uVar22 = (ulonglong)DAT_004d7300;
      uVar21 = CONCAT44(DAT_004d7308,DAT_004d7304);
      iVar12 = DAT_004d72f8;
      iVar3 = DAT_004d72fc;
      do {
        uVar4 = *puVar13;
        uVar5 = uVar4;
        if (uVar14 < uVar4) {
          uVar5 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        if (uVar4 <= uVar14) {
          uVar5 = *(uint *)(param_1 + 0x620);
        }
        if (uVar14 < *(uint *)(param_1 + 0x604)) {
          uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar14 * 4);
        }
        else {
          uVar11 = 0;
        }
        *(undefined4 *)(uVar5 + 4) = uVar11;
        piVar6 = (int *)func_0054D964(param_1,0);
        iVar2 = *(int *)(param_1 + 0x620);
        if (uVar14 < *puVar13) {
          iVar2 = iVar2 + uVar14 * 0x38;
        }
        *(int **)(iVar2 + 8) = piVar6;
        piVar6[0x16] = iVar12;
        piVar6[0x17] = iVar3;
        piVar6[0x18] = iVar12;
        puVar7 = (undefined4 *)func_0010BAB4(0x48);
        puVar8 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = func_004EDC9C(puVar7);
        }
        if (uVar14 < *(uint *)(param_1 + 0x61c)) {
          iVar2 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x620);
        }
        *(undefined4 **)(iVar2 + 0x10) = puVar8;
        iVar2 = *piVar15;
        uVar4 = *puVar13;
        fVar20 = *(float *)(param_1 + 0x624);
        piVar9 = (int *)(iVar2 + 4);
        iVar19 = *piVar9;
        fVar16 = *(float *)(iVar2 + 0xc);
        fVar17 = *(float *)(iVar2 + 8);
        uVar5 = uVar4;
        if (uVar14 < uVar4) {
          piVar9 = *(int **)(param_1 + 0x620);
          uVar5 = uVar14 * 7;
        }
        if (uVar14 < uVar4) {
          piVar9 = piVar9 + uVar5 * 2;
        }
        else {
          piVar9 = *(int **)(param_1 + 0x620);
        }
        iVar2 = piVar9[4];
        *(undefined2 *)(piVar6 + 10) = 100;
        piVar6[1] = iVar19;
        piVar6[2] = (int)ALBW_AS_U32((fVar17 + fVar20));
        piVar6[3] = (int)ALBW_AS_U32((fVar16 + ALBW_AS_F32(uVar22)));
        func_004356B4(piVar6);
        *(int **)(iVar2 + 0x18) = piVar6;
        local_54 = *(uint *)(param_1 + 0x2cc);
        func_004EDAD0(iVar2,&local_54);
        *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
        func_004A879C(*DAT_004d730c,iVar2,2);
        piVar6 = (int *)func_0054D964(param_1,0);
        piVar6[0x16] = (int)uVar21;
        piVar6[0x17] = (int)((ulonglong)uVar21 >> 0x20);
        piVar6[0x18] = (int)uVar21;
        puVar7 = (undefined4 *)func_0010BAB4(0x48);
        puVar8 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = func_004EDC9C(puVar7);
        }
        if (uVar14 < *(uint *)(param_1 + 0x61c)) {
          iVar2 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x620);
        }
        *(undefined4 **)(iVar2 + 0x14) = puVar8;
        iVar2 = *(int *)(param_1 + 0x620);
        fVar16 = *(float *)(param_1 + 0x624);
        if (uVar14 < *puVar13) {
          iVar2 = iVar2 + uVar14 * 0x38;
        }
        iVar19 = *piVar15;
        iVar2 = *(int *)(iVar2 + 0x14);
        iVar18 = *(int *)(iVar19 + 4);
        fVar17 = *(float *)(iVar19 + 8);
        iVar19 = *(int *)(iVar19 + 0xc);
        local_70 = (undefined2)DAT_004d7310;
        *(undefined2 *)(piVar6 + 10) = local_70;
        piVar6[1] = iVar18;
        piVar6[2] = (int)ALBW_AS_U32((fVar17 + fVar16));
        piVar6[3] = iVar19;
        func_004356B4(piVar6);
        *(int **)(iVar2 + 0x18) = piVar6;
        local_50[0] = *(uint *)(param_1 + 0x2cc);
        func_004EDAD0(iVar2,local_50);
        *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
        func_004A879C(*DAT_004d730c,iVar2,2);
        piVar6 = (int *)func_0054D964(param_1,0);
        piVar6[0x16] = (int)uVar21;
        piVar6[0x17] = (int)((ulonglong)uVar21 >> 0x20);
        piVar6[0x18] = (int)uVar21;
        puVar7 = (undefined4 *)func_0010BAB4(0x48);
        puVar8 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = func_004EDC9C(puVar7);
        }
        if (uVar14 < *(uint *)(param_1 + 0x61c)) {
          iVar2 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x620);
        }
        *(undefined4 **)(iVar2 + 0x18) = puVar8;
        iVar2 = *(int *)(param_1 + 0x620);
        fVar16 = *(float *)(param_1 + 0x624);
        if (uVar14 < *puVar13) {
          iVar2 = iVar2 + uVar14 * 0x38;
        }
        iVar19 = *piVar15;
        iVar2 = *(int *)(iVar2 + 0x18);
        iVar18 = *(int *)(iVar19 + 4);
        fVar17 = *(float *)(iVar19 + 8);
        iVar19 = *(int *)(iVar19 + 0xc);
        local_70 = (undefined2)DAT_004d7314;
        *(undefined2 *)(piVar6 + 10) = local_70;
        piVar6[1] = iVar18;
        piVar6[2] = (int)ALBW_AS_U32((fVar17 + fVar16));
        piVar6[3] = iVar19;
        func_004356B4(piVar6);
        *(int **)(iVar2 + 0x18) = piVar6;
        local_54 = *(uint *)(param_1 + 0x2cc);
        func_004EDAD0(iVar2,&local_54);
        *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
        func_004A879C(*DAT_004d730c,iVar2,2);
        if (*(char *)(local_44 + 0x39) != '\0') {
          puVar7 = (undefined4 *)func_0010BAB4(0x48);
          puVar8 = (undefined4 *)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            puVar8 = func_0034CAA0(puVar7);
          }
          if (uVar14 < *(uint *)(param_1 + 0x61c)) {
            iVar2 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x620);
          }
          *(undefined4 **)(iVar2 + 0xc) = puVar8;
        }
        if ((uint *)(*DAT_004d7318 + 0x660) != (uint *)0x0) {
          if (uVar14 < *puVar13) {
            iVar2 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x620);
          }
          uVar5 = func_00111A64((uint *)(*DAT_004d7318 + 0x660));
          *(short *)(iVar2 + 0x34) = (short)((ulonglong)uVar5 * 100 >> 0x20);
        }
        uVar14 = uVar14 + 1;
        piVar15 = piVar15 + 1;
      } while (piVar15 != piVar10);
    }
  }
  else {
    uVar14 = 0;
    if (piVar15 != piVar10) {
      do {
        uVar4 = *puVar13;
        uVar5 = uVar4;
        if (uVar14 < uVar4) {
          uVar5 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        if (uVar4 <= uVar14) {
          uVar5 = *(uint *)(param_1 + 0x620);
        }
        if (uVar14 < *(uint *)(param_1 + 0x604)) {
          uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar14 * 4);
        }
        else {
          uVar11 = 0;
        }
        *(undefined4 *)(uVar5 + 4) = uVar11;
        piVar6 = (int *)func_0054D964(param_1,0);
        puVar7 = (undefined4 *)func_0010BAB4(0x48);
        puVar8 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = func_004EDC9C(puVar7);
        }
        if (uVar14 < *(uint *)(param_1 + 0x61c)) {
          iVar12 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x620);
        }
        *(undefined4 **)(iVar12 + 0x10) = puVar8;
        iVar12 = *(int *)(param_1 + 0x620);
        fVar16 = *(float *)(param_1 + 0x624);
        if (uVar14 < *puVar13) {
          iVar12 = iVar12 + uVar14 * 0x38;
        }
        iVar3 = *piVar15;
        iVar12 = *(int *)(iVar12 + 0x10);
        fVar17 = *(float *)(iVar3 + 8);
        iVar2 = *(int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 0xc);
        *(undefined2 *)(piVar6 + 10) = 100;
        piVar6[1] = iVar2;
        piVar6[2] = (int)ALBW_AS_U32((fVar17 + fVar16));
        piVar6[3] = iVar3;
        func_004356B4(piVar6);
        *(int **)(iVar12 + 0x18) = piVar6;
        local_54 = *(uint *)(param_1 + 0x2cc);
        func_004EDAD0(iVar12,&local_54);
        *(undefined2 *)(iVar12 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
        func_004A879C(*DAT_004d730c,iVar12,2);
        piVar15 = piVar15 + 1;
        if (uVar14 < *puVar13) {
          iVar12 = *(int *)(param_1 + 0x620) + uVar14 * 0x38;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x620);
        }
        uVar14 = uVar14 + 1;
        *(undefined2 *)(iVar12 + 0x34) = 0xffff;
      } while (piVar15 != piVar10);
      return;
    }
  }
  return;
}

