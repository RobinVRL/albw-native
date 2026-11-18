#include "ghidra_types.h"

extern int *DAT_00104910;

// USA 001048D8 <- EU 001048D8 (Ghidra, non-matching)
// GLOBAL DAT_00104910 int *

int func_001048D8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0000;
  iVar1 = *DAT_00104910;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

