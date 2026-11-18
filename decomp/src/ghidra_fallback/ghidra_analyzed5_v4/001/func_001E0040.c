#include "ghidra_types.h"

extern int func_001DFB30(int param_1);

// USA 001E0040 <- EU 001E0040 (Ghidra, non-matching)

uint func_001E0040(uint param_1,uint param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    if (param_2 < 0x1000000) {
      *(uint *)(param_1 + 0xf0) = param_2;
      if (param_2 != 0) {
        return param_1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      bVar1 = func_001DFB30(param_1);
      return (uint)bVar1;
    }
  }
  return param_1;
}

