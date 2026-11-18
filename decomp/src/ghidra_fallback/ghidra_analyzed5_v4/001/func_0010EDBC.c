#include "ghidra_types.h"


// USA 0010EDBC <- EU 0010EDBC (Ghidra, non-matching)

void func_0010EDBC(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + *param_1 * 4) = param_2;
  return;
}

