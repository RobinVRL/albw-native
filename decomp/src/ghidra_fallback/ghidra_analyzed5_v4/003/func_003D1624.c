#include "ghidra_types.h"

extern undefined4 DAT_003d1630;
extern uint *DAT_003d1634;

// USA 003D1624 <- EU 003D1600 (Ghidra, non-matching)
// GLOBAL DAT_003d1630 undefined4
// GLOBAL DAT_003d1634 uint *

uint func_003D1624(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d1630;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_003d1634;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

