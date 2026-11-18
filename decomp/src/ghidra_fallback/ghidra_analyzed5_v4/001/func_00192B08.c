#include "ghidra_types.h"

extern int func_00192A48(int param_1,undefined4 param_2,uint param_3);

// USA 00192B08 <- EU 00192B08 (Ghidra, non-matching)

undefined4 func_00192B08(int param_1,undefined4 param_2,uint param_3)

{
  func_00192A48(param_1,2,param_3);
  return 0;
}

