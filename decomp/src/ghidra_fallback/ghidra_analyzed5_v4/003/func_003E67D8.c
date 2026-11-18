#include "ghidra_types.h"

extern int func_003E6868(int param_1,undefined4 *param_2,uint param_3);

// USA 003E67D8 <- EU 003E67B8 (Ghidra, non-matching)

int func_003E67D8(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) != 0) {
    func_003E6868(param_1,*(undefined4 **)(param_1 + 0xc),
                  *(int *)(param_1 + 0x28) - (int)*(undefined4 **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  }
  if ((param_2 & 2) != 0) {
    func_003E6868(param_1,*(undefined4 **)(param_1 + 0x2c),
                  *(int *)(param_1 + 0x10) - (int)*(undefined4 **)(param_1 + 0x2c));
    for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  }
  return param_1;
}

