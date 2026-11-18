#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0038777c;

// USA 0038778C <- EU 00387768 (Ghidra, non-matching)
// GLOBAL DAT_0038777c int

undefined4 func_0038778C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0038777c + 0x84;
  *param_1 = DAT_0038777c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

