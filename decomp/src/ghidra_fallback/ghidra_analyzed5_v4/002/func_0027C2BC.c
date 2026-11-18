#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern undefined *DAT_0027c5ac;
extern int *DAT_0027c5b0;
extern int *DAT_0027c5b4;

// USA 0027C2BC <- EU 0027C2E4 (Ghidra, non-matching)
// GLOBAL DAT_0027c5ac undefined *
// GLOBAL DAT_0027c5b0 int *
// GLOBAL DAT_0027c5b4 int *

void func_0027C2BC(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(int * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(ushort *)(albw_frame + 0x14))
  iVar9 = *(int *)(param_1 + 0x478);
  if (0 < iVar9) {
    iVar3 = func_0010CEE0(iVar9 * 0x28,(int *)0x0,4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = func_00100118(iVar3,DAT_0027c5ac,0x28,iVar9);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x628) = iVar4;
      *(int *)(param_1 + 0x624) = iVar9;
    }
  }
  iVar9 = *(int *)(param_1 + 0x478);
  piVar12 = *(int **)(param_1 + 0x480);
  local_34 = piVar12 + iVar9;
  iVar4 = func_00588BE4(param_1);
  piVar1 = DAT_0027c5b0;
  uVar11 = 0;
  if (piVar12 != piVar12 + iVar9) {
    local_30 = param_1 + 0x400;
    puVar10 = (uint *)(param_1 + 0x624);
    do {
      piVar5 = (int *)func_0054D964(param_1,0);
      if (iVar4 == *piVar1) {
        sVar2 = 7;
      }
      else {
        sVar2 = 3;
      }
      local_2c = sVar2 << 5 | 4;
      *(ushort *)(piVar5 + 10) = local_2c;
      piVar5[0xb] = piVar5[0xb] | 0x2000002;
      iVar9 = *piVar12;
      fVar13 = *(float *)(iVar9 + 8);
      fVar14 = *(float *)(local_30 + 0x21c);
      iVar3 = *(int *)(iVar9 + 0xc);
      piVar5[1] = *(int *)(iVar9 + 4);
      piVar5[2] = (int)ALBW_AS_U32((fVar13 + fVar14));
      piVar5[3] = iVar3;
      func_004356B4(piVar5);
      iVar9 = *(int *)(param_1 + 0x628);
      if (uVar11 < *puVar10) {
        iVar9 = iVar9 + uVar11 * 0x28;
      }
      if (uVar11 < *(uint *)(param_1 + 0x604)) {
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar11 * 4);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(iVar9 + 4) = uVar8;
      if (iVar4 == *piVar1) {
        if (uVar11 < *puVar10) {
          iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x628);
        }
        func_004CEA18(*(int *)(iVar9 + 4),1,0);
        if (uVar11 < *puVar10) {
          iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x628);
        }
        func_004CEA18(*(int *)(iVar9 + 4),0,1);
      }
      puVar6 = (undefined4 *)func_0010BAB4(0x48);
      puVar7 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = func_0034CAA0(puVar6);
      }
      iVar9 = *(int *)(param_1 + 0x628);
      if (uVar11 < *(uint *)(param_1 + 0x624)) {
        iVar9 = iVar9 + uVar11 * 0x28;
      }
      *(undefined4 **)(iVar9 + 0xc) = puVar7;
      if (uVar11 < *puVar10) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      *(int **)(iVar9 + 8) = piVar5;
      puVar6 = (undefined4 *)func_0010BAB4(0x48);
      puVar7 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = func_004EDC9C(puVar6);
      }
      if (uVar11 < *(uint *)(param_1 + 0x624)) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      *(undefined4 **)(iVar9 + 0x10) = puVar7;
      if (uVar11 < *puVar10) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      *(int **)(*(int *)(iVar9 + 0x10) + 0x18) = piVar5;
      local_38 = *(uint *)(param_1 + 0x2cc);
      if (uVar11 < *puVar10) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      func_004EDAD0(*(int *)(iVar9 + 0x10),&local_38);
      if (uVar11 < *puVar10) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      *(undefined2 *)(*(int *)(iVar9 + 0x10) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
      if (uVar11 < *puVar10) {
        iVar9 = *(int *)(param_1 + 0x628) + uVar11 * 0x28;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x628);
      }
      func_004A879C(*DAT_0027c5b4,*(int *)(iVar9 + 0x10),2);
      piVar12 = piVar12 + 1;
      uVar11 = uVar11 + 1;
    } while (piVar12 != local_34);
  }
  return;
}

