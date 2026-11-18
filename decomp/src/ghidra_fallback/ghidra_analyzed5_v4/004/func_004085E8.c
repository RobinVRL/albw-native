#include "ghidra_types.h"

extern int func_0040789C(int param_1,undefined4 param_2);

// USA 004085E8 <- EU 004085C8 (Ghidra, non-matching)

void func_004085E8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x81) == '\0') {
    func_0040789C(param_1,param_2);
    *(undefined1 *)(param_1 + 0x81) = 1;
    *(undefined4 *)(param_1 + 0x5c) = param_3;
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  return;
}

