#include "ghidra_types.h"

extern int func_0053F4F8(undefined4 param_1,uint param_2,char *param_3);

// USA 00361B04 <- EU 00361AE0 (Ghidra, non-matching)

undefined4 func_00361B04(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(char *)(param_1 + 0x5d0) != '\0') || ((*(uint *)(param_2 + 0x24) & 0x10000) == 0)) &&
      (*(char *)(param_1 + 0x5d1) == '\0')) &&
     ((iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x614), *(short *)(iVar1 + 0x42) != 0x45 ||
      (iVar1 = func_0053F4F8(iVar1,*(uint *)(param_2 + 0x24),*(char **)(param_2 + 0x2c)), iVar1 != 0
      )))) {
    *(undefined1 *)(param_1 + 0x33f) = 1;
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x344) = uVar2;
    *(undefined4 *)(param_1 + 0x348) = uVar3;
    *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined2 *)(param_1 + 0x36c) = *(undefined2 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x5d1) = 1;
    iVar1 = *(int *)(param_2 + 0x2c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar1 + 0xc);
      if (*(char *)(*(int *)(param_2 + 0x2c) + 2) == -1) {
        *(undefined1 *)(param_1 + 0x5d1) = 0;
      }
    }
    return 1;
  }
  return 0;
}

