#include "ghidra_types.h"

extern int func_00122C78(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_001FF628(int param_1);
extern int func_004B76D4(int *param_1);
extern int func_004B7810(int param_1);
extern int func_004C7A54(int *param_1,undefined4 param_2,undefined *param_3,int *param_4);
extern int func_004F1310(int *param_1,undefined4 param_2,float *param_3,int *param_4);
extern int func_004F2084(undefined4 *param_1);
extern int *DAT_004b09e0;

// USA 004B08FC <- EU 004B08D4 (Ghidra, non-matching)
// GLOBAL DAT_004b09e0 int *

void func_004B08FC(int param_1,undefined4 param_2,float *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar3;
  int extraout_r1_02;
  uint uVar4;
  
  func_004B7810(param_1);
  func_00122C78((int *)(param_1 + 0x216c),extraout_r1,param_3);
  func_004F2084((undefined4 *)(param_1 + 0x2204));
  func_004B76D4((int *)(param_1 + 0x23b0));
  uVar4 = 0;
  iVar3 = extraout_r1_00;
  do {
    puVar1 = (undefined4 *)(param_1 + 0x1418);
    if (uVar4 < 0x10) {
      puVar1 = (undefined4 *)(param_1 + 0x1418) + uVar4;
    }
    if ((int *)*puVar1 != (int *)0x0) {
      func_004F1310((int *)*puVar1,iVar3,param_3,param_4);
      iVar3 = extraout_r1_01;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x23e0) != 0) {
    do {
      piVar2 = (int *)(param_1 + 0x1458);
      if (uVar4 < 6) {
        param_3 = (float *)(uVar4 * 3);
        iVar3 = uVar4 * 0x13;
        piVar2 = (int *)(param_1 + 0x1458) + uVar4 * 0x13;
      }
      func_004C7A54(piVar2,iVar3,(undefined *)param_3,param_4);
      uVar4 = uVar4 + 1;
      iVar3 = extraout_r1_02;
    } while (uVar4 < *(uint *)(param_1 + 0x23e0));
  }
  uVar4 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x18a4);
    if (uVar4 < 4) {
      piVar2 = (int *)(param_1 + 0x18a4) + uVar4;
    }
    if (*piVar2 != 0) {
      func_001FF628(*piVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if (*(int *)(param_1 + 0x23f8) != 0) {
    *(int *)(param_1 + 0x23f8) = *(int *)(param_1 + 0x23f8) + -1;
    *(undefined1 *)(*DAT_004b09e0 + 0x2c1b) = 0;
  }
  return;
}

