#include "ghidra_types.h"

extern int func_0053F5E0(int param_1);

// USA 00556B14 <- EU 00556A9C (Ghidra, function missing from the decomp table)

bool func_00556B14(int param_1)

{
  char cVar1;
  
  cVar1 = func_0053F5E0(*(int *)(param_1 + 0x14));
  return cVar1 == '\b';
}

