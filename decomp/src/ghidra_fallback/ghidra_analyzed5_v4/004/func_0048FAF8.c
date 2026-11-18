#include "ghidra_types.h"


// USA 0048FAF8 <- EU 0048FAD0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

int * func_0048FAF8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1[5] != 0) {
    return param_1;
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  if (param_5 == 0) {
    uVar2 = param_1[8] & 0xfffffffe;
  }
  else {
    uVar2 = param_1[8] | 1;
  }
  param_1[8] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0048fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
  return piVar1;
}

