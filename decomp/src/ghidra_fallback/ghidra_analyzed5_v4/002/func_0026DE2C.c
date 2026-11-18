#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0026de68;

// USA 0026DE2C <- EU 0026DE54 (Ghidra, non-matching)
// GLOBAL DAT_0026de68 int

undefined4 func_0026DE2C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0026de68 + 0x84;
  *param_1 = DAT_0026de68;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

