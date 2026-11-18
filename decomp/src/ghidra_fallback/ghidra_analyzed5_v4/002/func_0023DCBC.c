#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0023dcd0;

// USA 0023DCBC <- EU 0023DCBC (Ghidra, non-matching)
// GLOBAL DAT_0023dcd0 int

undefined4 func_0023DCBC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0023dcd0 + 0x54;
  *param_1 = DAT_0023dcd0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

