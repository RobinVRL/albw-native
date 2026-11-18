#include "ghidra_types.h"

extern undefined4 DAT_003e5b50;
extern uint *DAT_003e5b54;

// USA 003E5B40 <- EU 003E5B20 (Ghidra, non-matching)
// GLOBAL DAT_003e5b50 undefined4
// GLOBAL DAT_003e5b54 uint *

uint func_003E5B40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e5b50;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_003e5b54;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

