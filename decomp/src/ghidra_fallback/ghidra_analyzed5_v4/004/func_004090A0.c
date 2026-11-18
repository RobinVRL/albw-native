#include "ghidra_types.h"

extern int func_0040D80C(int param_1);

// USA 004090A0 <- EU 00409080 (Ghidra, non-matching)

char func_004090A0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,0,param_4);
  if (cVar1 == '\0') {
    if (*param_2 != 0) {
      func_0040D80C(*param_2);
    }
    cVar1 = '\0';
  }
  return cVar1;
}

