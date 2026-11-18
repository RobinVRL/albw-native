#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00126cc0;

// USA 00126CAC <- EU 00126CAC (Ghidra, non-matching)
// GLOBAL DAT_00126cc0 int

undefined4 func_00126CAC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00126cc0 + 0x84;
  *param_1 = DAT_00126cc0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

