#include "ghidra_types.h"

extern int func_003CD764(int *param_1);

// USA 003CD8E0 <- EU 003CD8BC (Ghidra, non-matching)

undefined4 func_003CD8E0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    iVar1 = func_003CD764((int *)(param_1 + 0x10));
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

