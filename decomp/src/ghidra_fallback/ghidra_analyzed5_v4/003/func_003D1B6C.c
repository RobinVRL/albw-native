#include "ghidra_types.h"

extern undefined4 DAT_003d1b88;
extern uint *DAT_003d1b8c;

// USA 003D1B6C <- EU 003D1B48 (Ghidra, non-matching)
// GLOBAL DAT_003d1b88 undefined4
// GLOBAL DAT_003d1b8c uint *

uint func_003D1B6C(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d1b88;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  uVar1 = *DAT_003d1b8c;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

