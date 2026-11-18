#include "ghidra_types.h"

extern undefined4 DAT_0010b360;
extern uint *DAT_0010b364;

// USA 0010B32C <- EU 0010B32C (Ghidra, non-matching)
// GLOBAL DAT_0010b360 undefined4
// GLOBAL DAT_0010b364 uint *

uint func_0010B32C(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010b360;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_0010b364;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

