#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_00359f54;
extern int *DAT_00359f58;

// USA 00359D98 <- EU 00359D74 (Ghidra, non-matching)
// GLOBAL DAT_00359f54 undefined *
// GLOBAL DAT_00359f58 int *

void func_00359D98(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((uint *)(albw_frame + 0x8))
  iVar7 = *(int *)(param_1 + 0x478);
  if (0 < iVar7) {
    iVar1 = func_0010CEE0(iVar7 * 0x18,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_00359f54,0x18,iVar7);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x640) = iVar2;
      *(int *)(param_1 + 0x63c) = iVar7;
    }
  }
  iVar7 = *(int *)(param_1 + 0x478);
  piVar10 = *(int **)(param_1 + 0x480);
  if (piVar10 != piVar10 + iVar7) {
    puVar8 = (uint *)(param_1 + 0x63c);
    puVar9 = (undefined4 *)0x0;
    piVar11 = piVar10;
    do {
      piVar3 = (int *)func_0054D964(param_1,0);
      iVar2 = *piVar11;
      fVar13 = *(float *)(param_1 + 0x61c);
      fVar14 = *(float *)(param_1 + 0x620);
      fVar12 = *(float *)(iVar2 + 8);
      iVar1 = *(int *)(iVar2 + 0xc);
      piVar3[1] = *(int *)(iVar2 + 4);
      piVar3[2] = (int)ALBW_AS_U32(((fVar12 + fVar13) - fVar14));
      piVar3[3] = iVar1;
      func_004356B4(piVar3);
      *(undefined2 *)(piVar3 + 10) = 3;
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar2 = *(int *)(param_1 + 0x640) + (int)puVar9 * 0x18;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x640);
      }
      *(int **)(iVar2 + 4) = piVar3;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = func_004EDC9C(puVar4);
      }
      puVar4[6] = piVar3;
      func_004ED9C8((int)puVar4);
      local_38[0] = *(uint *)(param_1 + 0x2cc);
      func_004EDAD0((int)puVar4,local_38);
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(param_1 + 0x54);
      func_004A879C(*DAT_00359f58,(int)puVar4,2);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar2 = *(int *)(param_1 + 0x640) + (int)puVar9 * 0x18;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x640);
      }
      *(undefined4 **)(iVar2 + 8) = puVar4;
      puVar5 = (undefined4 *)*puVar8;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x640) + (int)puVar9 * 0x18);
      }
      if (puVar5 <= puVar9) {
        puVar4 = *(undefined4 **)(param_1 + 0x640);
      }
      if (puVar9 < *(undefined4 **)(param_1 + 0x604)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + (int)puVar9 * 4);
      }
      else {
        uVar6 = 0;
      }
      *puVar4 = uVar6;
      puVar5 = (undefined4 *)*puVar8;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x640) + (int)puVar9 * 0x18);
      }
      piVar3 = piVar11 + 1;
      iVar2 = *piVar11;
      if (puVar5 <= puVar9) {
        puVar4 = *(undefined4 **)(param_1 + 0x640);
      }
      puVar4[3] = *(undefined4 *)(iVar2 + 4);
      puVar4[4] = *(undefined4 *)(iVar2 + 8);
      puVar4[5] = *(undefined4 *)(iVar2 + 0xc);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      piVar11 = piVar3;
    } while (piVar3 != piVar10 + iVar7);
  }
  return;
}

