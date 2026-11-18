#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_004f48ac;

// USA 004F48C0 <- EU 004F4898 (Ghidra, non-matching)
// GLOBAL DAT_004f48ac int

undefined4 func_004F48C0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004f48ac + 0x84;
  *param_1 = DAT_004f48ac;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

