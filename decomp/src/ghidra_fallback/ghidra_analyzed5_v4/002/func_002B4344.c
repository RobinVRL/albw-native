#include "ghidra_types.h"

extern int func_004FC164(void *param_1);

// USA 002B4344 <- EU 002B4320 (Ghidra, non-matching)

void * func_002B4344(int param_1)

{
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x988) = 1;
  pvVar1 = func_004FC164(param_1);
  return pvVar1;
}

