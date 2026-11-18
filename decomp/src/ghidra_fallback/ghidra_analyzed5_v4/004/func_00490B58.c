#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00490BD8(int param_1);

// USA 00490B58 <- EU 00490B30 (Ghidra, non-matching)

undefined4 func_00490B58(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3d0) != 0) {
    func_0010C0B8(*(int *)(param_1 + 0x3d0));
  }
  if ((*(uint *)(param_1 + 0x3d8) & 1) == 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x3c0))(param_1 + 0x3c0);
  }
  iVar1 = *(int *)(param_1 + 0x3a8);
  if ((iVar1 != 0) && (-1 < *(int *)(param_1 + 0x3d8) << 0x1e)) {
    do {
      func_00490BD8(*(int *)(iVar1 + 0x10));
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    return func_0010EEE0(*(int *)(param_1 + 0x3d0));
  }
  return 0;
}

