#include "ghidra_types.h"

extern int func_001026D8(int *param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_00101454;

// USA 0010144C <- EU 0010144C (Ghidra, non-matching)
// GLOBAL DAT_00101454 int *

undefined4 func_0010144C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_001026D8(DAT_00101454,param_2,param_3);
  return uVar1;
}

