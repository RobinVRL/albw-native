#include "ghidra_types.h"

extern undefined4 DAT_001030e8;
extern uint *DAT_001030ec;

// USA 001030B4 <- EU 001030B4 (Ghidra, non-matching)
// GLOBAL DAT_001030e8 undefined4
// GLOBAL DAT_001030ec uint *

uint func_001030B4(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_001030e8;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_001030ec;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

