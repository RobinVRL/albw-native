#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 0012ED38 <- EU 0012ED38 (Ghidra, non-matching)

undefined4 func_0012ED38(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0xe10)) {
    do {
      if (uVar1 < *(uint *)(param_1 + 0xe10)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xe18) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (param_2 == iVar2) {
        return func_0048C320((int *)(param_1 + 0xe10),uVar1,1);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(param_1 + 0xe10));
  }
  return 0;
}

