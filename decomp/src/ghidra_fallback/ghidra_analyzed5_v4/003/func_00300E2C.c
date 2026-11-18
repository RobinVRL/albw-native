#include "ghidra_types.h"

extern int func_00111A14(void);

// USA 00300E2C <- EU 00300E08 (Ghidra, non-matching)

int func_00300E2C(void)

{
  int iVar1;
  
  iVar1 = func_00111A14();
  return iVar1 + 4;
}

