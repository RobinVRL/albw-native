#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002aad54;

// USA 002AAD64 <- EU 002AAD40 (Ghidra, non-matching)
// GLOBAL DAT_002aad54 int

undefined4 func_002AAD64(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002aad54 + 0x84;
  *param_1 = DAT_002aad54;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

