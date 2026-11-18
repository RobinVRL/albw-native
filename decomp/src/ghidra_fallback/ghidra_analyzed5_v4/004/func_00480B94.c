#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_003A09BC(int param_1);
extern int func_00532BA0(int param_1);
extern int func_0066EDA8(undefined4 *param_1,undefined1 param_2);

// USA 00480B94 <- EU 00480B6C (Ghidra, non-matching)

undefined4 func_00480B94(int param_1)

{
  int iVar1;
  
  iVar1 = func_00532BA0(*(int *)(param_1 + 0x10c) + 0x30);
  if (iVar1 != 0) {
    func_003A09BC(*(int *)(param_1 + 0x10c));
    if (*(int *)(param_1 + 0x11c) == -1) {
      if (0x31 < *(int *)(*(int *)(param_1 + 0x10c) + 0x390)) {
        return func_0066EDA8((undefined4 *)(param_1 + 0x74),3);
      }
      return func_0012C718(param_1);
    }
    func_0066EDA8((undefined4 *)(param_1 + 0x74),2);
  }
  return 0;
}

