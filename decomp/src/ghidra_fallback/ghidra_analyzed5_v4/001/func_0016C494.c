#include "ghidra_types.h"

extern int func_0016B2E4(undefined4 param_1,int param_2);
extern int func_001B7070(int param_1,int param_2,int *param_3);

// USA 0016C494 <- EU 0016C494 (Ghidra, non-matching)

undefined4 func_0016C494(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_3;
  iVar1 = func_0016B2E4(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    uVar4 = *(uint *)(param_1 + 0x90);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      if (uVar2 < uVar4) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
      }
      else {
        iVar5 = 0;
      }
      if ((int)*(short *)(iVar5 + 6) == param_3) {
        uVar3 = uVar2;
        if (uVar2 < uVar4) {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
        }
        if (uVar4 <= uVar2) {
          uVar3 = 0;
        }
        func_001B7070(uVar3,iVar1,*(int **)(param_1 + (uint)*(byte *)(param_1 + 0xf94) * 4 + 0xf8c))
        ;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar4);
  }
  return 1;
}

