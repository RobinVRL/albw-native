#include "ghidra_types.h"

extern int func_00218A04(undefined4 *param_1,undefined2 param_2,undefined4 param_3);

// USA 0038F694 <- EU 0038F670 (Ghidra, non-matching)

void func_0038F694(int param_1)

{
  *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
  if (0xb3 < *(int *)(param_1 + 0x32c)) {
    func_00218A04((undefined4 *)(param_1 + 800),*(undefined2 *)(param_1 + 0x2c),
                  (int)*(char *)(param_1 + 0x330));
    *(undefined4 *)(param_1 + 0x32c) = 0;
  }
  return;
}

