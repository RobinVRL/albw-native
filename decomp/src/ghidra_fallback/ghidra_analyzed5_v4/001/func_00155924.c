#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0015593c;

// USA 00155924 <- EU 00155928 (Ghidra, non-matching)
// GLOBAL DAT_0015593c int

undefined4 func_00155924(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0015593c + 0x84;
  *param_1 = DAT_0015593c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

