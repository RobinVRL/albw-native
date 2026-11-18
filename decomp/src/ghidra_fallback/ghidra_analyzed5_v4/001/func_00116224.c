#include "ghidra_types.h"


// USA 00116224 <- EU 00116224 (Ghidra, non-matching)

undefined8 func_00116224(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
}

