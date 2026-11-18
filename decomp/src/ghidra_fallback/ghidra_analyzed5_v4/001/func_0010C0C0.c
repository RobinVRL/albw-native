#include "ghidra_types.h"

extern int func_0010BFD4(int *param_1);

// USA 0010C0C0 <- EU 0010C0C0 (Ghidra, non-matching)

int func_0010C0C0(int *param_1)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != param_1[1]) {
    func_0010BFD4(param_1);
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    param_1[1] = iVar1;
  }
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  return iVar1 + 1;
}

