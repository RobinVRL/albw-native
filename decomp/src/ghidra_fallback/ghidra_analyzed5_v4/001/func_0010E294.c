#include "ghidra_types.h"


// USA 0010E294 <- EU 0010E294 (Ghidra, non-matching)

undefined4 func_0010E294(int *param_1)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return *(undefined4 *)(iVar1 + *param_1 * 4);
}

