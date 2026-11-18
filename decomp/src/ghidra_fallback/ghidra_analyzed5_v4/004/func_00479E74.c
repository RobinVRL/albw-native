#include "ghidra_types.h"

extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 00479E74 <- EU 00479E4C (Ghidra, non-matching)

undefined4 func_00479E74(int param_1)

{
  if (*(int *)(param_1 + 0x298) < 1) {
    return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\n');
  }
  *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + -1;
  return 0;
}

