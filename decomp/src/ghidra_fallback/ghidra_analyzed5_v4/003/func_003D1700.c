#include "ghidra_types.h"

extern undefined4 DAT_003d1730;
extern uint *DAT_003d1734;

// USA 003D1700 <- EU 003D16DC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003d1730 undefined4
// GLOBAL DAT_003d1734 uint *

uint func_003D1700(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003d1730;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(int *)(iVar3 + 0x8c) = param_5;
  *(uint *)(iVar3 + 0x90) = param_5 << 4 | 10;
  *(undefined4 *)(iVar3 + 0x94) = param_4;
  *(undefined4 *)(iVar3 + 0x9c) = param_1;
  puVar1 = DAT_003d1734;
  *(uint *)(iVar3 + 0x98) = param_2 << 4 | 0xc;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

