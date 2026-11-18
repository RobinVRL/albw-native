#include "ghidra_types.h"

extern int func_0010BFD4(int *param_1);

// USA 0010C0B8 <- EU 0010C0B8 (Ghidra, non-matching)

int func_0010C0B8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    func_0010BFD4((int *)(param_1 + 0x10));
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  return iVar1;
}

