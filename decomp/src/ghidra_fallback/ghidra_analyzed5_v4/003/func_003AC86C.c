#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_003aca84;
extern uint DAT_003aca88;
extern int *DAT_003aca8c;

// USA 003AC86C <- EU 003AC848 (Ghidra, non-matching)
// GLOBAL DAT_003aca84 undefined *
// GLOBAL DAT_003aca88 uint
// GLOBAL DAT_003aca8c int *

void func_003AC86C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(int * *)(albw_frame + 0xc))
  #define local_40 ((uint *)(albw_frame + 0x20))
  iVar6 = *(int *)(param_1 + 0x478);
  if (0 < iVar6) {
    iVar1 = func_0010CEE0(iVar6 << 5,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_003aca84,0x20,iVar6);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x63c) = iVar2;
      *(int *)(param_1 + 0x638) = iVar6;
    }
  }
  piVar9 = *(int **)(param_1 + 0x480);
  uVar8 = 0;
  local_54 = piVar9 + *(int *)(param_1 + 0x478);
  if (piVar9 != local_54) {
    uVar14 = (ulonglong)DAT_003aca88;
    puVar7 = (uint *)(param_1 + 0x638);
    do {
      func_00115154(&local_5c,&local_58,*(uint *)(*piVar9 + 0x20));
      piVar3 = (int *)func_0054D964(param_1,0);
      iVar6 = *piVar9;
      fVar12 = ALBW_AS_F32(uVar14) - *(float *)(param_1 + 0x620);
      fVar13 = *(float *)(param_1 + 0x61c);
      fVar10 = *(float *)(iVar6 + 0xc);
      fVar11 = *(float *)(iVar6 + 8);
      piVar3[1] = (int)ALBW_AS_U32((*(float *)(iVar6 + 4) + fVar12 * local_5c));
      piVar3[2] = (int)ALBW_AS_U32((fVar11 + fVar13));
      piVar3[3] = (int)ALBW_AS_U32((fVar10 + fVar12 * local_58));
      func_004356B4(piVar3);
      *(undefined2 *)(piVar3 + 10) = 3;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x63c) + uVar8 * 0x20;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x63c);
      }
      *(int **)(iVar6 + 4) = piVar3;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = func_004EDC9C(puVar4);
      }
      puVar4[6] = piVar3;
      func_004ED9C8((int)puVar4);
      local_40[0] = *(uint *)(param_1 + 0x2cc);
      func_004EDAD0((int)puVar4,local_40);
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(param_1 + 0x54);
      func_004A879C(*DAT_003aca8c,(int)puVar4,2);
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x63c) + uVar8 * 0x20;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x63c);
      }
      *(undefined4 **)(iVar6 + 8) = puVar4;
      if (uVar8 < *puVar7) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x63c) + uVar8 * 0x20);
      }
      else {
        puVar4 = *(undefined4 **)(param_1 + 0x63c);
      }
      if (uVar8 < *(uint *)(param_1 + 0x604)) {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar8 * 4);
      }
      else {
        uVar5 = 0;
      }
      *puVar4 = uVar5;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x63c) + uVar8 * 0x20;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x63c);
      }
      iVar2 = *piVar9;
      piVar9 = piVar9 + 1;
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x63c) + uVar8 * 0x20;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x63c);
      }
      *(float *)(iVar6 + 0x18) = local_5c;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x63c) + uVar8 * 0x20;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x63c);
      }
      uVar8 = uVar8 + 1;
      *(float *)(iVar6 + 0x1c) = local_58;
    } while (piVar9 != local_54);
  }
  return;
}

