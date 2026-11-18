#include "ghidra_types.h"

extern int func_002500F4(int param_1);
extern int func_0065FBB4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00250584;

// USA 0025053C <- EU 0025053C (Ghidra, non-matching)
// GLOBAL DAT_00250584 int *

void func_0025053C(int param_1)

{
  func_002500F4(param_1);
  if ((*(int *)(*(int *)(*DAT_00250584 + 0x28) + 0x14) != *(int *)(param_1 + 0x2cc)) &&
     (*(char *)(param_1 + 0x48c) == '\0')) {
    func_0065FBB4((undefined4 *)(param_1 + 0x41c),3);
  }
  return;
}

