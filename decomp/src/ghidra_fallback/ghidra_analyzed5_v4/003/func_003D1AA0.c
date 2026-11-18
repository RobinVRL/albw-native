#include "ghidra_types.h"

extern undefined4 DAT_003d1aac;
extern uint *DAT_003d1ab0;

// USA 003D1AA0 <- EU 003D1A7C (Ghidra, non-matching)
// GLOBAL DAT_003d1aac undefined4
// GLOBAL DAT_003d1ab0 uint *

uint func_003D1AA0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d1aac;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_003d1ab0;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

