#include "ghidra_types.h"

extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 00479E24 <- EU 00479DFC (Ghidra, non-matching)

void func_00479E24(int param_1)

{
  if ((5 < (int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U) &&
     (5 < (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1U)) {
    if (*(int *)(param_1 + 0x298) == 0) {
      func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
    }
    else {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return;
}

