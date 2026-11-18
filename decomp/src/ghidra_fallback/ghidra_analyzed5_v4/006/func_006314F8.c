#include "ghidra_types.h"


// USA 006314F8 <- EU 006314D0 (Ghidra, non-matching)

undefined4 func_006314F8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[0x206] = iVar1;
  if (*(char *)((int)param_1 + 0x861) != '\0') {
    (**(code **)(*param_1 + 0xac))(param_1,(char)param_1[0x215],0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00631524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

