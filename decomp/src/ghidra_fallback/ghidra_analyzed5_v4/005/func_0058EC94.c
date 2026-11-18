#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058ec80;

// USA 0058EC94 <- EU 0058EC6C (Ghidra, non-matching)
// GLOBAL DAT_0058ec80 int

undefined4 func_0058EC94(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ec80;
  *param_1 = DAT_0058ec80 + 0x54;
  param_1[-0xe] = iVar1;
  return func_004B9AA0(param_1 + -0xe);
}

