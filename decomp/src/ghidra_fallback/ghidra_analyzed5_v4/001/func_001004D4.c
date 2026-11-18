#include "ghidra_types.h"

extern int func_0010047C(uint *param_1,int param_2,uint param_3,uint param_4);
extern int func_0030008C(uint param_1,int *param_2);

// USA 001004D4 <- EU 001004D4 (Ghidra, function missing from the decomp table)

undefined4 func_001004D4(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = func_0030008C(*param_3,(int *)param_1);
  return func_0010047C(param_1,param_2,uVar1,0);
}

