// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 00564908 <- EU 005648E0 (Ghidra, non-matching)

int func_00564908(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0xc) + 8)) {
    do {
      uVar1 = func_0010FBAC(param_2,(uint *)(*(int *)(param_1 + 0x10) +
                                            *(int *)(*(int *)(*(int *)(param_1 + 0x18) +
                                                             iVar2 * 0x3c) + 8)));
      if (uVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 0xc) + 8));
  }
  return -1;
}

