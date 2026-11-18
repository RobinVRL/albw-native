#include "ghidra_types.h"

extern uint *DAT_003e5ae4;

// USA 003E5AD8 <- EU 003E5AB8 (Ghidra, non-matching)
// GLOBAL DAT_003e5ae4 uint *

uint func_003E5AD8(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2b0000;
  uVar1 = *DAT_003e5ae4;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

