#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00223fcc;

// USA 00223FB8 <- EU 00223FB8 (Ghidra, non-matching)
// GLOBAL DAT_00223fcc int

undefined4 func_00223FB8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00223fcc + 0x84;
  *param_1 = DAT_00223fcc;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

