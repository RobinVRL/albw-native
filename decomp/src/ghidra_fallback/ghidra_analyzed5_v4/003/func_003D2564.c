#include "ghidra_types.h"

extern int *DAT_003d2578;

// USA 003D2564 <- EU 003D2540 (Ghidra, non-matching)
// GLOBAL DAT_003d2578 int *

int func_003D2564(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  iVar1 = *DAT_003d2578;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

