#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0037DCFC(int param_1,int param_2,int param_3);
extern int func_0043781C(int *param_1,int param_2);
extern int func_0049FBC4(int param_1,int *param_2);
extern int func_0049FC64(int *param_1,int *param_2);
extern undefined4 DAT_0037e4a0;
extern undefined4 DAT_0037e4a4;
extern undefined4 DAT_0037e4a8;

// USA 0037E190 <- EU 0037E16C (Ghidra, non-matching)
// GLOBAL DAT_0037e4a0 undefined4
// GLOBAL DAT_0037e4a4 undefined4
// GLOBAL DAT_0037e4a8 undefined4

undefined4 * func_0037E190(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *extraout_r1;
  int *piVar8;
  uint uVar9;
  uint *unaff_r5;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(uint * *)(albw_frame + 0x18))
  iVar11 = 0;
  param_1[2] = (int)*(short *)(param_2 + 0x70);
  param_1[3] = 0;
  *param_1 = DAT_0037e4a0;
  param_1[1] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_38[0] = 0;
  puStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  if (0 < *(int *)(param_2 + 0x3f4)) {
    do {
      uVar3 = *(uint *)(param_2 + 0x3d4 + iVar11 * 8);
      if (uVar3 < *local_28) {
        iVar4 = *(int *)(local_28[2] + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar3 = 0;
      piVar6 = *(int **)(iVar4 + 0x28);
      if (piVar6 != (int *)0x0) {
        iVar4 = *(int *)(iVar4 + 0x20);
      }
      if (piVar6 != (int *)0x0 && iVar4 != 0) {
        iVar4 = *piVar6;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = *(uint *)(iVar4 + 0x94);
      if (0 < (int)uVar5) {
        do {
          if (uVar3 < uVar5) {
            piVar6 = *(int **)(iVar4 + 0x9c);
            puVar10 = unaff_r5;
          }
          else {
            puVar10 = (uint *)0x0;
          }
          uVar9 = 0;
          if (uVar3 < uVar5) {
            puVar10 = (uint *)piVar6[uVar3];
          }
          unaff_r5 = puVar10 + 0x25;
          uVar5 = *unaff_r5;
          if (0 < (int)uVar5) {
            do {
              if (uVar9 < uVar5) {
                iVar7 = *(int *)(puVar10[0x27] + uVar9 * 4);
              }
              else {
                iVar7 = 0;
              }
              func_0043781C(local_38,iVar7);
              uVar9 = uVar9 + 1;
              local_38[0] = local_38[0] + 1;
              uVar5 = *unaff_r5;
              piVar6 = extraout_r1;
            } while ((int)uVar9 < (int)uVar5);
          }
          uVar3 = uVar3 + 1;
          local_38[0] = local_38[0] + 1;
          uVar5 = *(uint *)(iVar4 + 0x94);
        } while ((int)uVar3 < (int)uVar5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_2 + 0x3f4));
  }
  func_0010B380(param_1 + 4,local_38[0],(int *)0x0,4);
  iVar11 = *(int *)(param_2 + 0x3f4);
  if ((0 < iVar11) && (iVar4 = func_0010CEE0(iVar11 << 2,(int *)0x0,4), iVar4 != 0)) {
    param_1[0x10] = iVar4;
    param_1[0xe] = 0;
    param_1[0xf] = iVar11;
  }
  iVar11 = 0;
  if (0 < *(int *)(param_2 + 0x3f4)) {
    do {
      uVar3 = *(uint *)(param_2 + 0x3d4 + iVar11 * 8);
      if (uVar3 < *local_28) {
        iVar4 = *(int *)(local_28[2] + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar3 = 0;
      piVar6 = *(int **)(iVar4 + 0x28);
      if (piVar6 != (int *)0x0) {
        iVar4 = *(int *)(iVar4 + 0x20);
      }
      if (piVar6 != (int *)0x0 && iVar4 != 0) {
        iVar4 = *piVar6;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = *(uint *)(iVar4 + 0x94);
      if (0 < (int)uVar5) {
        do {
          if (uVar3 < uVar5) {
            iVar7 = *(int *)(*(int *)(iVar4 + 0x9c) + uVar3 * 4);
          }
          else {
            iVar7 = 0;
          }
          func_0037DCFC((int)param_1,iVar4,iVar7);
          uVar5 = *(uint *)(iVar4 + 0x94);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_2 + 0x3f4));
  }
  uVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      uVar5 = uVar3 + 1;
      if (uVar3 < (uint)param_1[4]) {
        piVar6 = *(int **)(param_1[6] + uVar3 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      if ((int)uVar5 < (int)param_1[4]) {
        do {
          iVar11 = piVar6[5];
          if (uVar5 < (uint)param_1[4]) {
            piVar8 = *(int **)(param_1[6] + uVar5 * 4);
          }
          else {
            piVar8 = (int *)0x0;
          }
          if (iVar11 == piVar8[5]) {
            func_0049FC64(piVar6,piVar8);
          }
          else {
            iVar4 = piVar8[6];
            bVar12 = iVar11 != iVar4;
            if (bVar12) {
              iVar11 = piVar6[6];
            }
            if ((bVar12 && iVar11 != iVar4) && (iVar11 == piVar8[5])) {
              func_0049FBC4((int)piVar6,piVar8);
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)param_1[4]);
      }
      if (*piVar6 == 0) {
        iVar11 = param_1[0xe];
        if (iVar11 < (int)param_1[0xf]) {
          param_1[0xe] = iVar11 + 1;
          *(int **)(param_1[0x10] + iVar11 * 4) = piVar6;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)param_1[4]);
  }
  uVar2 = DAT_0037e4a8;
  uVar1 = DAT_0037e4a4;
  param_1[7] = 0;
  param_1[9] = uVar1;
  param_1[0xd] = uVar2;
  return param_1;
}

