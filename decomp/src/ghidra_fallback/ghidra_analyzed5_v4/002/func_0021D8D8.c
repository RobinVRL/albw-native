#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0021d8ec;

// USA 0021D8D8 <- EU 0021D8D8 (Ghidra, non-matching)
// GLOBAL DAT_0021d8ec int

undefined4 func_0021D8D8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0021d8ec + 0x84;
  *param_1 = DAT_0021d8ec;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

