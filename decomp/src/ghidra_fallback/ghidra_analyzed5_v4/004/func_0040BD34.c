#include "ghidra_types.h"


// USA 0040BD34 <- EU 0040BD14 (Ghidra, non-matching)

undefined4 func_0040BD34(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if ((uVar1 & 0x1f) == 0) {
    uVar3 = param_4 + 3U & 0xfffffffc;
    piVar2 = *(int **)(param_1 + 0x84);
    if (piVar2 != (int *)(param_1 + 0x84)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)(param_1 + 0x38)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0x38));
    }
    piVar2 = *(int **)(param_1 + 0xd0);
    if (piVar2 != (int *)(param_1 + 0xd0)) {
      do {
        piVar2[-3] = uVar1;
        piVar2[-2] = uVar3;
        piVar2 = (int *)*piVar2;
        uVar1 = uVar1 + uVar3;
      } while (piVar2 != (int *)(param_1 + 0xd0));
    }
    *(uint *)(param_1 + 0x10c) = uVar3;
    if ((int)(uVar1 - param_3) < 1) {
      return 1;
    }
  }
  return 0;
}

