#include "ghidra_types.h"


// USA 00408E40 <- EU 00408E20 (Ghidra, non-matching)

undefined4 func_00408E40(int *param_1,undefined4 param_2,int param_3)

{
  return (**(code **)(*param_1 + 0x10))(param_1);
}

