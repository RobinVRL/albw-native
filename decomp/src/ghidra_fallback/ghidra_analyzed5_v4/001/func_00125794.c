#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001257a8;

// USA 00125794 <- EU 00125794 (Ghidra, non-matching)
// GLOBAL DAT_001257a8 int

undefined4 func_00125794(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001257a8 + 0x84;
  *param_1 = DAT_001257a8;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

