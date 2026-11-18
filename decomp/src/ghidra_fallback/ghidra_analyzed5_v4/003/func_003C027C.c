#include "ghidra_types.h"

extern int func_0037A4D8(int param_1);
extern int func_004ECEFC(void *param_1);

// USA 003C027C <- EU 003C0258 (Ghidra, non-matching)

void * func_003C027C(int param_1,undefined4 param_2)

{
  void *pvVar1;
  
  func_0037A4D8(param_1);
  pvVar1 = func_004ECEFC(param_1);
  return pvVar1;
}

