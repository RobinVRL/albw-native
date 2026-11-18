#include "ghidra_types.h"

extern int func_00100404(uint *param_1,undefined4 param_2,uint param_3,uint param_4);
extern int func_0030008C(uint param_1,int *param_2);

// USA 00100448 <- EU 00100448 (Ghidra, function missing from the decomp table)

undefined4 func_00100448(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  uVar1 = func_0030008C(*param_3,(int *)param_1);
  return func_00100404(param_1,extraout_r1,uVar1,0);
}

