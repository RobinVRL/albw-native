#include "ghidra_types.h"

extern int func_00404138(undefined4 param_1,undefined1 param_2);

// USA 003FE2A8 <- EU 003FE288 (Ghidra, non-matching)

void func_003FE2A8(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar5 != 0) {
    iVar1 = func_00404138(uVar5 << 2,4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          puVar4 = (undefined4 *)(iVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
          }
        } while (uVar3 < uVar5);
      }
    }
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (*(short *)(param_2 + 0xc) != 0) {
        do {
          uVar2 = (**(code **)(*param_3 + 0x14))
                            (param_3,*(int *)(param_2 + 0x14 + iVar1 * 4) + param_2 + 0x14);
          *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0xc));
      }
    }
  }
  iVar1 = func_00404138(param_4 << 3,4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar1 + uVar5 * 8);
        uVar5 = uVar5 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      } while (uVar5 < param_4);
    }
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(short *)(param_1 + 0x22) = (short)param_4;
  }
  return;
}

