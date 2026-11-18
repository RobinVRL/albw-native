#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00159980;

// USA 00159968 <- EU 0015996C (Ghidra, non-matching)
// GLOBAL DAT_00159980 int

undefined4 func_00159968(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00159980 + 0x84;
  *param_1 = DAT_00159980;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

