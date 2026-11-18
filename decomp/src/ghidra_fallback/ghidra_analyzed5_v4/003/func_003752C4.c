#include "ghidra_types.h"

extern int func_00375314(int *param_1);

// USA 003752C4 <- EU 003752A0 (Ghidra, non-matching)

undefined4 func_003752C4(int *param_1,int param_2)

{
  param_1[0x125] = param_2;
  *(undefined1 *)((int)param_1 + 0x4a1) = 1;
  *(undefined1 *)((int)param_1 + 0x4a2) = 0;
  if (param_1[0x114] != 0) {
    *(undefined1 *)(param_1[0x114] + 0x61) = 1;
  }
  if (param_2 == 0) {
    return func_00375314(param_1);
  }
  return 0;
}

