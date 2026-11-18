#include "ghidra_types.h"


// USA 006146B8 <- EU 00614690 (Ghidra, non-matching)

undefined4 func_006146B8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[0x206] = iVar1;
  if (*(char *)((int)param_1 + 0x861) != '\0') {
    (**(code **)(*param_1 + 0xac))(param_1,(char)param_1[0x215],0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x006146e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

