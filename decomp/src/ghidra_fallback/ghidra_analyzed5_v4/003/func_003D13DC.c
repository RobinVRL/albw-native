#include "ghidra_types.h"

extern int *DAT_003d13f0;

// USA 003D13DC <- EU 003D13B8 (Ghidra, non-matching)
// GLOBAL DAT_003d13f0 int *

int func_003D13DC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0000;
  iVar1 = *DAT_003d13f0;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

