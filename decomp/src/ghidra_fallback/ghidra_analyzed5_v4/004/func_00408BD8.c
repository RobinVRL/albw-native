#include "ghidra_types.h"

extern undefined4 DAT_00408c28;
extern undefined4 DAT_00408c2c;

// USA 00408BD8 <- EU 00408BB8 (Ghidra, non-matching)
// GLOBAL DAT_00408c28 undefined4
// GLOBAL DAT_00408c2c undefined4

undefined4 func_00408BD8(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1);
  return 0;
}

