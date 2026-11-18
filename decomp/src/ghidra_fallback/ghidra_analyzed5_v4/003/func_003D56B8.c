#include "ghidra_types.h"

extern undefined4 DAT_003d56c8;
extern uint *DAT_003d56cc;

// USA 003D56B8 <- EU 003D5698 (Ghidra, non-matching)
// GLOBAL DAT_003d56c8 undefined4
// GLOBAL DAT_003d56cc uint *

uint func_003D56B8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d56c8;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_003d56cc;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

