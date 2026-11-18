#include "ghidra_types.h"

extern undefined4 DAT_0010b270;
extern uint *DAT_0010b274;

// USA 0010B240 <- EU 0010B240 (Ghidra, non-matching)
// GLOBAL DAT_0010b270 undefined4
// GLOBAL DAT_0010b274 uint *

uint func_0010B240(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010b270;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_0010b274;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

