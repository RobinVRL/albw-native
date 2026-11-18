#include "ghidra_types.h"


// USA 0056B41C <- EU 0056B3F4 (Ghidra, non-matching)

int func_0056B41C(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 5) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

