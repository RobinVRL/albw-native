#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003DB654(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);

// USA 003CDD84 <- EU 003CDD60 (Ghidra, non-matching)

undefined4 func_003CDD84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  uVar1 = func_003DB654(param_1,param_2,param_3,param_4);
  if (-((int)uVar1 >> 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    func_0010C1B8(-((int)uVar1 >> 0x1f),extraout_r1,param_3);
  }
  return 0;
}

