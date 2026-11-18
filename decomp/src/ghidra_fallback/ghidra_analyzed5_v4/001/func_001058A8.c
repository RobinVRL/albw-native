// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern undefined4 DAT_001058e4;
extern int *DAT_001058e8;

// USA 001058A8 <- EU 001058A8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_001058e4 undefined4
// GLOBAL DAT_001058e8 int *

int func_001058A8(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_001058e4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  iVar1 = *DAT_001058e8;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

