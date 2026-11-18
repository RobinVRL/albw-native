#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0012945c;

// USA 00129448 <- EU 00129448 (Ghidra, non-matching)
// GLOBAL DAT_0012945c int

undefined4 func_00129448(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0012945c + 0x84;
  *param_1 = DAT_0012945c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

