#include "ghidra_types.h"

extern undefined4 DAT_003c9a5c;

// USA 003C9A4C <- EU 003C9A28 (Ghidra, non-matching)
// GLOBAL DAT_003c9a5c undefined4

int func_003C9A4C(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c9a5c;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

