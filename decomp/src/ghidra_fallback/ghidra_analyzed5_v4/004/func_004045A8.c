#include "ghidra_types.h"

extern undefined4 DAT_004045d8;
extern undefined4 DAT_004045dc;

// USA 004045A8 <- EU 00404588 (Ghidra, non-matching)
// GLOBAL DAT_004045d8 undefined4
// GLOBAL DAT_004045dc undefined4

undefined4 func_004045A8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  return (**(code **)(*param_1 + 0x38))(param_1);
}

