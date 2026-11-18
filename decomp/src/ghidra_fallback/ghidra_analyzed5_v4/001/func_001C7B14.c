#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int DAT_001c7b44;

// USA 001C7B14 <- EU 001C7B14 (Ghidra, non-matching)
// GLOBAL DAT_001c7b44 int

undefined4 func_001C7B14(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001c7b44 + 0x5c;
  *param_1 = DAT_001c7b44;
  param_1[200] = iVar1;
  func_002E1B70(param_1 + 0x11b);
  return func_001510A4(param_1);
}

