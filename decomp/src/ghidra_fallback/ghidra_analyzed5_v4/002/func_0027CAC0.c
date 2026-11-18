#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0027cafc;

// USA 0027CAC0 <- EU 0027CAE8 (Ghidra, non-matching)
// GLOBAL DAT_0027cafc int

undefined4 func_0027CAC0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0027cafc + 0x54;
  *param_1 = DAT_0027cafc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

