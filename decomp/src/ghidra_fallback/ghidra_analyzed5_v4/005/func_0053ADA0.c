#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053adc8;
extern undefined4 *DAT_0053adcc;
extern undefined4 DAT_0053add0;

// USA 0053ADA0 <- EU 0053AD78 (Ghidra, non-matching)
// GLOBAL DAT_0053adc8 uint *
// GLOBAL DAT_0053adcc undefined4 *
// GLOBAL DAT_0053add0 undefined4

bool func_0053ADA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053adc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053adc8), iVar1 != 0)) {
    *DAT_0053adcc = DAT_0053add0;
  }
  return DAT_0053adcc == param_2;
}

