#include "ghidra_types.h"

extern int func_003CD764(int *param_1);

// USA 003CD8E8 <- EU 003CD8C4 (Ghidra, non-matching)

undefined4 func_003CD8E8(int *param_1)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != param_1[1]) {
    iVar1 = func_003CD764(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    param_1[1] = iVar1;
  }
  param_1[2] = param_1[2] + 1;
  return 1;
}

