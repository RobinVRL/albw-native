#include "ghidra_types.h"


// USA 0055B768 <- EU 0055B740 (Ghidra, non-matching)

undefined4 func_005467C0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 0;
}

