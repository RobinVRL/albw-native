#include "ghidra_types.h"

extern undefined4 DAT_001047f8;
extern uint *DAT_001047fc;

// USA 001047C4 <- EU 001047C4 (Ghidra, non-matching)
// GLOBAL DAT_001047f8 undefined4
// GLOBAL DAT_001047fc uint *

uint func_001047C4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_001047f8;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_001047fc;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

