#include "ghidra_types.h"

extern int func_0048EEC0(int *param_1);
extern int func_0058FA5C();

// USA 00321358 <- EU 00321334 (Ghidra, non-matching)

undefined4 func_00321358(int *param_1)

{
  int iVar1;
  
  iVar1 = func_0048EEC0(param_1);
  return func_0058FA5C(iVar1);
}

