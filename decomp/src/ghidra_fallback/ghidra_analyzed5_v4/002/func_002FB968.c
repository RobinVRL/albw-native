#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002fb958;

// USA 002FB968 <- EU 002FB944 (Ghidra, non-matching)
// GLOBAL DAT_002fb958 int

undefined4 func_002FB968(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002fb958 + 0x84;
  *param_1 = DAT_002fb958;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

