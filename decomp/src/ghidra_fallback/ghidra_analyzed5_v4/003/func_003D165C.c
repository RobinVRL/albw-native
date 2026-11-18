#include "ghidra_types.h"

extern undefined4 DAT_003d168c;
extern uint *DAT_003d1690;

// USA 003D165C <- EU 003D1638 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003d168c undefined4
// GLOBAL DAT_003d1690 uint *

uint func_003D165C(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d168c;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x90) = param_5;
  *(uint *)(iVar2 + 0x94) = param_5 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  uVar1 = *DAT_003d1690;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

