#include "ghidra_types.h"

extern float func_004FAD90(int param_1);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);

// USA 00202EE0 <- EU 00202EE0 (Ghidra, non-matching)

void func_00202EE0(int param_1)

{
  func_004FAD90(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    func_0065D264((undefined4 *)(param_1 + 0x8bc),4);
  }
  return;
}

