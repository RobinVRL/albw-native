#include "ghidra_types.h"

extern int *DAT_0010b328;

// USA 0010B2F0 <- EU 0010B2F0 (Ghidra, non-matching)
// GLOBAL DAT_0010b328 int *

int func_0010B2F0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3b0000;
  iVar1 = *DAT_0010b328;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

