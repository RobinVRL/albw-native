#include "ghidra_types.h"

extern int func_0036C45C(int param_1);

// USA 001A1364 <- EU 001A1364 (Ghidra, non-matching)

void func_001A1364(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x1226) == '\0') {
    if (*(char *)(param_1 + 0x121f) < '\0') {
      uVar1 = *(uint *)(param_1 + 0x11d4);
      if (*(uint *)(param_1 + 0x11d8) <= uVar1) {
        uVar1 = *(uint *)(param_1 + 0x59c) | 0x1000;
        goto LAB_001a13f0;
      }
      *(uint *)(param_1 + 0x11d4) = uVar1 + 1;
    }
  }
  else {
    func_0036C45C(param_1 + 0x8c8);
    if (*(uint *)(param_1 + 0x990) <= *(uint *)(param_1 + 0x98c)) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x9b4) == 6) {
      uVar1 = *(uint *)(param_1 + 0x59c) | 0x2000;
LAB_001a13f0:
      *(uint *)(param_1 + 0x59c) = uVar1;
      return;
    }
  }
  return;
}

