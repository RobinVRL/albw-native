#include "ghidra_types.h"

extern uint *DAT_003d5614;

// USA 003D5608 <- EU 003D55E8 (Ghidra, non-matching)
// GLOBAL DAT_003d5614 uint *

uint func_003D5608(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x110000;
  uVar1 = *DAT_003d5614;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

