#include "ghidra_types.h"

extern undefined4 DAT_00108ad8;

// USA 00108AA4 <- EU 00108AA4 (Ghidra, non-matching)
// GLOBAL DAT_00108ad8 undefined4

uint func_00108AA4(uint *param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00108ad8;
  *(undefined1 *)(iVar2 + 0x84) = param_2;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

