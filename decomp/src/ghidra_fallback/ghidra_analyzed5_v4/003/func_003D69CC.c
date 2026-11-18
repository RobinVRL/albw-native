#include "ghidra_types.h"

extern int func_003DA498(int *param_1,int param_2);

// USA 003D69CC <- EU 003D69AC (Ghidra, non-matching)

undefined4 func_003D69CC(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(int **)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  puVar1 = (undefined1 *)func_003DA498(param_2,param_3 + 0xf >> 4);
  *(undefined1 **)(param_1 + 0x1c) = puVar1;
  uVar3 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    if (param_4 != 0 && param_3 != 0) {
      uVar2 = param_3 & 1;
      uVar4 = (uint)(uVar2 == 1);
      if (uVar2 == 1) {
        *puVar1 = 0;
      }
      for (; uVar2 < param_3; uVar2 = uVar2 + 2) {
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar4) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar4 + 1) = 0;
        uVar4 = uVar4 + 2;
      }
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    uVar3 = 1;
  }
  return uVar3;
}

