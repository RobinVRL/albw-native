#include "ghidra_types.h"

extern int func_004FB404(void *param_1);

// USA 002B4338 <- EU 002B4314 (Ghidra, non-matching)

void * func_002B4338(int param_1)

{
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x988) = 0;
  pvVar1 = func_004FB404(param_1);
  return pvVar1;
}

