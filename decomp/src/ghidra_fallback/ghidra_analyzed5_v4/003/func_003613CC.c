#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_003613bc;

// USA 003613CC <- EU 003613A8 (Ghidra, non-matching)
// GLOBAL DAT_003613bc int

undefined4 func_003613CC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_003613bc + 0x54;
  *param_1 = DAT_003613bc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

