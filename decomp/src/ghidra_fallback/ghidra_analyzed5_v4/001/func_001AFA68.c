#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_001afa7c;

// USA 001AFA68 <- EU 001AFA68 (Ghidra, non-matching)
// GLOBAL DAT_001afa7c int

undefined4 func_001AFA68(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001afa7c + 0x84;
  *param_1 = DAT_001afa7c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

