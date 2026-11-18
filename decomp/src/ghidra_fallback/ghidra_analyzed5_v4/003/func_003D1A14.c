#include "ghidra_types.h"

extern int *DAT_003d1a28;

// USA 003D1A14 <- EU 003D19F0 (Ghidra, non-matching)
// GLOBAL DAT_003d1a28 int *

int func_003D1A14(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x100000;
  iVar1 = *DAT_003d1a28;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

