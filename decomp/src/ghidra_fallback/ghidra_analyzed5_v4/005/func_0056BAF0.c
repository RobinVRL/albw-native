#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0011629C(uint *param_1,uint *param_2,uint param_3);

// USA 0056BAF0 <- EU 0056BAC8 (Ghidra, non-matching)

undefined4 func_0056BAF0(int param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar2 = func_00103CBC((char *)param_2);
  uVar3 = *puVar1;
  uVar4 = 0;
  if (0 < (int)uVar3) {
    do {
      if (uVar4 < uVar3) {
        iVar5 = puVar1[uVar4 * 2 + 2] + (int)puVar1;
      }
      else {
        iVar5 = 0;
      }
      uVar3 = func_0011629C(param_2,(uint *)(iVar5 + 0xc),uVar2);
      if (uVar3 == 0) {
        *param_3 = *(undefined4 *)(iVar5 + 4);
        return 1;
      }
      uVar3 = *puVar1;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar3);
  }
  return 0;
}

