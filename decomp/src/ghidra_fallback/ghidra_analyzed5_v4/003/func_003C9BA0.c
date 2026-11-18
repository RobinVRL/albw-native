#include "ghidra_types.h"

extern undefined4 DAT_003c9ba4;

// USA 003C9BA0 <- EU 003C9B7C (Ghidra, non-matching)
// GLOBAL DAT_003c9ba4 undefined4

uint func_003C9BA0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c9ba4;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

