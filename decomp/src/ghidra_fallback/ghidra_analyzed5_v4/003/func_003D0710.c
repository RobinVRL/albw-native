#include "ghidra_types.h"

extern int func_003CFDB4(int *param_1,int param_2);
extern int func_003D0B10(int *param_1);
extern undefined4 DAT_003d0754;

// USA 003D0710 <- EU 003D06EC (Ghidra, non-matching)
// GLOBAL DAT_003d0754 undefined4

undefined4 func_003D0710(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0,0,0);
    uVar1 = func_003D0B10(param_1);
    param_1[1] = 0;
    func_003CFDB4(param_1,0);
    return uVar1;
  }
  return DAT_003d0754;
}

