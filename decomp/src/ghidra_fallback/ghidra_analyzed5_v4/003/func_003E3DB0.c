#include "ghidra_types.h"

extern undefined4 DAT_00190000;

// USA 003E3DB0 <- EU 003E3D90 (Ghidra, non-matching)
// GLOBAL DAT_00190000 undefined4

uint func_003E3DB0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_00190000;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

