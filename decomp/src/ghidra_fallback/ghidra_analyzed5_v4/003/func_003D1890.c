#include "ghidra_types.h"

extern int *DAT_003d18a4;

// USA 003D1890 <- EU 003D186C (Ghidra, non-matching)
// GLOBAL DAT_003d18a4 int *

int func_003D1890(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0000;
  iVar1 = *DAT_003d18a4;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

