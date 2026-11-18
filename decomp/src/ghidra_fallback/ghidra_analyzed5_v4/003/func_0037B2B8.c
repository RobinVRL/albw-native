#include "ghidra_types.h"

extern int func_0014ABEC(int param_1);
extern int func_0066777C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0037b2e4;
extern int *DAT_0037b2e8;

// USA 0037B2B8 <- EU 0037B294 (Ghidra, non-matching)
// GLOBAL DAT_0037b2e4 int *
// GLOBAL DAT_0037b2e8 int *

undefined4 func_0037B2B8(int param_1)

{
  if (*(short *)(param_1 + 0xbc) < 1) {
    return func_0014ABEC(*DAT_0037b2e4);
  }
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -1;
  if ((~*(uint *)(*DAT_0037b2e8 + 0x5dc) & 0x1b) == 0) {
    func_0066777C((undefined4 *)(param_1 + 0xc0),3);
  }
  return 0;
}

