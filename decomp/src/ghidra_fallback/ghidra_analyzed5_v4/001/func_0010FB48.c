#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0010F8B8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);

// USA 0010FB48 <- EU 0010FB48 (Ghidra, non-matching)

undefined4 * func_0010FB48(int param_1)

{
  undefined4 *puVar1;
  
  func_0010C0C0((int *)(param_1 + 0x30));
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = *puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      func_0010F8B8(puVar1,(undefined4 *)(*(int *)(param_1 + 0x18) + (int)puVar1),0);
    }
  }
  func_0010C160((int *)(param_1 + 0x30));
  return puVar1;
}

