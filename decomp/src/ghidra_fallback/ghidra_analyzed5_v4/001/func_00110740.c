#include "ghidra_types.h"

extern undefined4 DAT_00110774;

// USA 00110740 <- EU 00110740 (Ghidra, non-matching)
// GLOBAL DAT_00110774 undefined4

int func_00110740(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00110774;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

