#include "ghidra_types.h"

extern undefined4 DAT_003d15f8;
extern uint *DAT_003d15fc;

// USA 003D15EC <- EU 003D15C8 (Ghidra, non-matching)
// GLOBAL DAT_003d15f8 undefined4
// GLOBAL DAT_003d15fc uint *

uint func_003D15EC(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d15f8;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_003d15fc;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

