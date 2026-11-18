#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_002a990c;

// USA 002A991C <- EU 002A98F8 (Ghidra, non-matching)
// GLOBAL DAT_002a990c int

undefined4 func_002A991C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002a990c + 0x84;
  *param_1 = DAT_002a990c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

