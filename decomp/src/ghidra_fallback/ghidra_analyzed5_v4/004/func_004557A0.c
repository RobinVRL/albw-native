#include "ghidra_types.h"

extern int func_00231524(int param_1);

// USA 004557A0 <- EU 00455778 (Ghidra, non-matching)

undefined4 func_004557A0(int param_1,int param_2)

{
  *(char *)(param_1 + 0x98) = (char)param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 5;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 6;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 7;
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  return func_00231524(param_1 + 0x5c);
}

