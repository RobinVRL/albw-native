#include "ghidra_types.h"


// USA 00560D54 <- EU 00560D2C (Ghidra, non-matching)

undefined4 func_00560D54(int *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  if ((puVar1 != (uint *)0x0) && (*puVar1 >> 8 != 0)) {
    *(char *)(param_2 + 1) = (char)(puVar1[param_3 * 2 + 1] >> 0x18);
    *param_2 = (puVar1 + param_3 * 2 + 1)[1];
    return 1;
  }
  return 0;
}

