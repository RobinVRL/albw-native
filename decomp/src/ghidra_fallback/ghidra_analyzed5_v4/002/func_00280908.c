#include "ghidra_types.h"

extern undefined4 DAT_0028096c;

// USA 00280908 <- EU 00280930 (Ghidra, non-matching)
// GLOBAL DAT_0028096c undefined4

undefined4 func_00280908(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0028096c;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x440) = 5;
  *(undefined4 *)(param_1 + 0x444) = uVar1;
  *(undefined4 *)(param_1 + 0x43c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00280968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 0x40c) + 0x10))(*(int **)(param_1 + 0x40c),0xc4);
}

