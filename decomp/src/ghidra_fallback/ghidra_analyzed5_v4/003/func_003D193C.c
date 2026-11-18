#include "ghidra_types.h"

extern undefined4 DAT_003d1968;
extern uint *DAT_003d196c;

// USA 003D193C <- EU 003D1918 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_003d1968 undefined4
// GLOBAL DAT_003d196c uint *

uint func_003D193C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003d1968;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(undefined4 *)(iVar3 + 0x8c) = param_4;
  *(undefined4 *)(iVar3 + 0x90) = param_5;
  *(undefined4 *)(iVar3 + 0x94) = 0x20;
  *(undefined4 *)(iVar3 + 0xa0) = param_1;
  puVar1 = DAT_003d196c;
  *(uint *)(iVar3 + 0x9c) = param_2 << 4 | 10;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

