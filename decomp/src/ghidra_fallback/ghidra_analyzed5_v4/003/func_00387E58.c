#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_005681C0(int param_1,int *param_2);
extern int func_005683D0(int param_1,int *param_2,int param_3,uint param_4);
extern uint DAT_00387fb0;
extern undefined4 DAT_00387fb4;
extern uint *DAT_00387fb8;
extern undefined4 DAT_00387fbc;
extern undefined4 DAT_00387fc0;
extern undefined4 *DAT_00387fc4;

// USA 00387E58 <- EU 00387E34 (Ghidra, non-matching)
// GLOBAL DAT_00387fb0 uint
// GLOBAL DAT_00387fb4 undefined4
// GLOBAL DAT_00387fb8 uint *
// GLOBAL DAT_00387fbc undefined4
// GLOBAL DAT_00387fc0 undefined4
// GLOBAL DAT_00387fc4 undefined4 *

void func_00387E58(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  
  uVar2 = DAT_00387fb4;
  uVar1 = DAT_00387fb0;
  iVar6 = *(int *)(param_1 + 0xa8);
  piVar7 = param_2;
  if (iVar6 != 0) {
    piVar7 = (int *)(uint)*(byte *)(iVar6 + 0x30);
  }
  if (iVar6 != 0 && piVar7 != (int *)0x0) {
    if (*(char *)(iVar6 + 0x16b) == '\0') {
      puVar9 = (uint *)*param_2;
      *puVar9 = *(byte *)(param_3 + 0x1a) | 0x80000000;
      puVar9[1] = uVar1;
      func_001150CC(puVar9 + 2,(undefined4 *)(iVar6 + 0x104),uVar2);
      *param_2 = (int)(puVar9 + 0x10);
    }
    else {
      puVar9 = (uint *)*param_2;
      if (((*DAT_00387fb8 & 1) == 0) &&
         (iVar6 = func_00100174((int *)DAT_00387fb8), puVar5 = DAT_00387fc4, uVar4 = DAT_00387fc0,
         uVar3 = DAT_00387fbc, iVar6 != 0)) {
        puVar8 = DAT_00387fc4 + 4;
        *DAT_00387fc4 = DAT_00387fbc;
        puVar5[1] = uVar4;
        puVar5[2] = uVar4;
        puVar5[3] = uVar4;
        *puVar8 = uVar4;
        puVar5[5] = uVar3;
        puVar5[6] = uVar4;
        puVar5[7] = uVar4;
        puVar5[8] = uVar4;
        puVar5[9] = uVar4;
        puVar5[10] = uVar3;
        puVar5[0xb] = uVar4;
      }
      puVar5 = DAT_00387fc4;
      *puVar9 = *(byte *)(param_3 + 10) | 0x80000000;
      puVar9[1] = uVar1;
      func_001150CC(puVar9 + 2,puVar5,uVar2);
      *param_2 = (int)(puVar9 + 0x10);
    }
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xa8) + 0x50) + 8);
    piVar7 = (int *)(iVar6 + 0x40);
    iVar6 = *(int *)(iVar6 + 0x44);
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x16b) == '\0') {
      iVar10 = 0;
      if (0 < iVar6) {
        do {
          func_005681C0(*piVar7 + iVar10 * 0x38,param_2);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
        return;
      }
    }
    else {
      iVar10 = 0;
      if (0 < iVar6) {
        do {
          func_005683D0(*piVar7 + iVar10 * 0x38,param_2,*(int *)(*(int *)(param_1 + 0xa8) + 0x24),
                        param_3 + 0x18);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
      }
    }
  }
  return;
}

