#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_005026ec;

// USA 00502700 <- EU 005026D8 (Ghidra, non-matching)
// GLOBAL DAT_005026ec int

undefined4 func_00502700(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_005026ec + 0x84;
  *param_1 = DAT_005026ec;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

