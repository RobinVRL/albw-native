#include "ghidra_types.h"

extern int func_0041C81C(void);
extern int func_0041C880(int *param_1,int param_2);

// USA 0041D5C0 <- EU 0041D5A0 (Ghidra, non-matching)

int func_0041D5C0(int param_1)

{
  int *piVar1;
  
  piVar1 = func_0041C81C();
  func_0041C880(piVar1,param_1 + 0x80);
  return param_1;
}

