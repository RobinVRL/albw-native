#include "ghidra_types.h"

extern int *DAT_004f1cec;
extern undefined4 DAT_004f1cf0;
extern undefined4 *DAT_004f1cf4;

// USA 004F1C4C <- EU 004F1C24 (Ghidra, non-matching)
// GLOBAL DAT_004f1cec int *
// GLOBAL DAT_004f1cf0 undefined4
// GLOBAL DAT_004f1cf4 undefined4 *

void func_004F1C4C(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar7 = *DAT_004f1cec;
  if (iVar7 == 0) {
    return;
  }
  uVar4 = *(uint *)(iVar7 + 0x90);
  uVar5 = uVar4;
  if (0 < (int)uVar4) {
    uVar5 = *(uint *)(iVar7 + 0x90);
  }
  uVar9 = *DAT_004f1cf4;
  uVar2 = 0;
  uVar1 = DAT_004f1cf0;
  uVar3 = DAT_004f1cf0;
  uVar8 = DAT_004f1cf0;
  if (0 < (int)uVar4) {
    do {
      if (uVar2 < uVar5) {
        iVar6 = *(int *)(*(int *)(iVar7 + 0x98) + uVar2 * 4);
      }
      else {
        iVar6 = 0;
      }
      if (*(short *)(iVar6 + 6) == -1) {
        if (uVar2 < uVar5) {
          iVar7 = *(int *)(*(int *)(iVar7 + 0x98) + uVar2 * 4);
        }
        else {
          iVar7 = 0;
        }
        iVar7 = *(int *)(iVar7 + 8);
        uVar9 = *(undefined4 *)(iVar7 + 0x24);
        uVar1 = *(undefined4 *)(iVar7 + 0x18);
        uVar3 = *(undefined4 *)(iVar7 + 0x1c);
        uVar8 = *(undefined4 *)(iVar7 + 0x20);
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar5);
  }
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined4 *)(param_1 + 0x1a0) = param_3;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x188) = uVar8;
  *(undefined4 *)(param_1 + 0x18c) = uVar9;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  *(undefined4 *)(param_1 + 0x19c) = param_2[3];
  *(undefined4 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 *)(param_1 + 0x198) = uVar8;
  return;
}

