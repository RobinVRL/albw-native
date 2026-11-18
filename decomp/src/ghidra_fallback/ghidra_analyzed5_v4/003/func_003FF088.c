#include "ghidra_types.h"

extern int func_003FE1A4(int *param_1,char *param_2);
extern int func_005689FC(int param_1,int param_2);

// USA 003FF088 <- EU 003FF068 (Ghidra, non-matching)

int * func_003FF088(int *param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)func_005689FC((int)(param_1 + 0xc),(int)param_2);
  if ((piVar1 == (int *)0x0) &&
     (piVar1 = func_003FE1A4(param_1 + 0xc,param_2), piVar1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,piVar1,param_2);
  }
  return piVar1;
}

