#include "ghidra_types.h"

extern undefined4 DAT_003d2d18;

// USA 003D2D08 <- EU 003D2CE4 (Ghidra, non-matching)
// GLOBAL DAT_003d2d18 undefined4

uint func_003D2D08(uint *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d2d18;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

