#include "ghidra_types.h"

extern int func_0016C588(int param_1,int *param_2);
extern int func_001B7660(int param_1,uint param_2,ushort *param_3,undefined4 *param_4,int *param_5);

// USA 0016B110 <- EU 0016B110 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

undefined4 func_0016B110(int param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  
  puVar1 = (ushort *)func_0016C588(param_1,param_4);
  if (puVar1 == (ushort *)0x0) {
    return 0;
  }
  uVar4 = extraout_r1;
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
      if (*(short *)(iVar5 + 6) == param_3) {
        uVar3 = uVar2;
        if (uVar2 < uVar4) {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
        }
        if (uVar4 <= uVar2) {
          uVar3 = 0;
        }
        func_001B7660(uVar3,param_2,puVar1,param_5,
                      *(int **)(param_1 + (uint)*(byte *)(param_1 + 0xf94) * 4 + 0xf8c));
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar4);
  }
  return 0;
}

