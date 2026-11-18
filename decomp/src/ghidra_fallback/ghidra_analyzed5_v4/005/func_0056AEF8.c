#include "ghidra_types.h"


// USA 0056AEF8 <- EU 0056AED0 (Ghidra, non-matching)

int func_0056AEF8(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 3) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

