#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0037148c;

// USA 0037149C <- EU 00371478 (Ghidra, non-matching)
// GLOBAL DAT_0037148c int

undefined4 func_0037149C(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0037148c + 0x84;
  *param_1 = DAT_0037148c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

