#include "ghidra_types.h"

extern undefined4 DAT_00103120;
extern uint *DAT_00103124;

// USA 001030F0 <- EU 001030F0 (Ghidra, non-matching)
// GLOBAL DAT_00103120 undefined4
// GLOBAL DAT_00103124 uint *

uint func_001030F0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00103120;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_00103124;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

