#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005706e4;
extern undefined4 *DAT_005706e8;
extern undefined4 DAT_005706ec;

// USA 005706BC <- EU 00570694 (Ghidra, non-matching)
// GLOBAL DAT_005706e4 uint *
// GLOBAL DAT_005706e8 undefined4 *
// GLOBAL DAT_005706ec undefined4

bool func_005706BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005706e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005706e4), iVar1 != 0)) {
    *DAT_005706e8 = DAT_005706ec;
  }
  return DAT_005706e8 == param_2;
}

