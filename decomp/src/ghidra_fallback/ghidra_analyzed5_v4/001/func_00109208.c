#include "ghidra_types.h"

extern undefined4 DAT_00109238;
extern uint *DAT_0010923c;

// USA 00109208 <- EU 00109208 (Ghidra, non-matching)
// GLOBAL DAT_00109238 undefined4
// GLOBAL DAT_0010923c uint *

uint func_00109208(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00109238;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  uVar1 = *DAT_0010923c;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

