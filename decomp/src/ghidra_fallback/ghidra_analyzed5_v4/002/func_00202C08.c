#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00202c1c;

// USA 00202C08 <- EU 00202C08 (Ghidra, non-matching)
// GLOBAL DAT_00202c1c int

undefined4 func_00202C08(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00202c1c + 0x84;
  *param_1 = DAT_00202c1c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

