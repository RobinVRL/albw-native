#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0021ed28;

// USA 0021ED14 <- EU 0021ED14 (Ghidra, non-matching)
// GLOBAL DAT_0021ed28 int

undefined4 func_0021ED14(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0021ed28 + 0x84;
  *param_1 = DAT_0021ed28;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

