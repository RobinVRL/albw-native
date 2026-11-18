#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 0012DEC8 <- EU 0012DEC8 (Ghidra, non-matching)

undefined4 func_0012DEC8(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint unaff_r6;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0xf1c);
  puVar4 = puVar1;
  if (param_3 < 2) {
    puVar4 = puVar1 + param_3 * 0xa3;
  }
  uVar3 = *puVar4;
  if ((int)uVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar3 & 1;
    if (uVar5 != 0) {
      unaff_r6 = puVar4[2];
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      do {
        if (*(int *)(unaff_r6 + uVar2 * 4) == param_2) goto LAB_0012df60;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar5);
    }
  }
  uVar2 = uVar5;
  if ((int)uVar2 < (int)uVar3) {
    do {
      if (*(int *)(puVar4[2] + uVar2 * 4) == param_2) {
LAB_0012df60:
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (param_3 < 2) {
          puVar1 = puVar1 + param_3 * 0xa3;
        }
        return func_0048C320((int *)puVar1,uVar2,1);
      }
      if (*(int *)(puVar4[2] + uVar2 * 4 + 4) == param_2) {
        uVar2 = uVar2 + 1;
        goto LAB_0012df60;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar3);
  }
  return 0;
}

