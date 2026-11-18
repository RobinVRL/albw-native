#include "ghidra_types.h"

extern int func_0044191C(int *param_1);
extern int DAT_0058ec40;

// USA 0058EC54 <- EU 0058EC2C (Ghidra, non-matching)
// GLOBAL DAT_0058ec40 int

undefined4 func_0058EC54(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ec40;
  *param_1 = DAT_0058ec40 + 0xac;
  param_1[-0xe] = iVar1;
  return func_0044191C(param_1 + -0xe);
}

