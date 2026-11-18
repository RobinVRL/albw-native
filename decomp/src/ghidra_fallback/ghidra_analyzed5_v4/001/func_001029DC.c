#include "ghidra_types.h"

extern int *DAT_00102a14;

// USA 001029DC <- EU 001029DC (Ghidra, non-matching)
// GLOBAL DAT_00102a14 int *

int func_001029DC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  iVar1 = *DAT_00102a14;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

