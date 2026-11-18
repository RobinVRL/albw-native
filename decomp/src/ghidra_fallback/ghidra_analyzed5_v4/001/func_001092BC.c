#include "ghidra_types.h"

extern undefined4 DAT_001092f8;
extern int *DAT_001092fc;

// USA 001092BC <- EU 001092BC (Ghidra, non-matching)
// GLOBAL DAT_001092f8 undefined4
// GLOBAL DAT_001092fc int *

int func_001092BC(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_001092f8;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  iVar1 = *DAT_001092fc;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

