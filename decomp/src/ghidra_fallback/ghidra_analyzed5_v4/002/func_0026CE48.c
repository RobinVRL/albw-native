#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0026ce84;

// USA 0026CE48 <- EU 0026CE70 (Ghidra, non-matching)
// GLOBAL DAT_0026ce84 int

undefined4 func_0026CE48(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0026ce84 + 0x84;
  *param_1 = DAT_0026ce84;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

