#include "ghidra_types.h"

extern int func_00560AB8(uint *param_1,int param_2,undefined4 param_3,uint param_4);

// USA 00540270 <- EU 00540248 (Ghidra, non-matching)

undefined4 func_00540270(uint *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (-2 < (char)param_1[0xd]) {
    uVar1 = func_00560AB8(param_1,param_2,(int)(char)param_1[0xd],param_4);
    return uVar1;
  }
  return 1;
}

