#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002aad6c;

// USA 002AAD7C <- EU 002AAD58 (Ghidra, non-matching)
// GLOBAL DAT_002aad6c int

undefined4 func_002AAD7C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002aad6c + 0x84;
  *param_1 = DAT_002aad6c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

