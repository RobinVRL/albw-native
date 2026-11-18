#include "ghidra_types.h"

extern undefined4 DAT_003d19e4;
extern undefined4 DAT_003d19e8;
extern uint *DAT_003d19ec;

// USA 003D1994 <- EU 003D1970 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_003d19e4 undefined4
// GLOBAL DAT_003d19e8 undefined4
// GLOBAL DAT_003d19ec uint *

uint func_003D1994(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,int param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d19e4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  *(int *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_6;
  *(uint *)(iVar2 + 0x94) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  *(undefined4 *)(iVar2 + 0x9c) = DAT_003d19e8;
  *(undefined4 *)(iVar2 + 0xa0) = param_7;
  *(uint *)(iVar2 + 0xa4) = param_4 << 4 | 0xe;
  *(undefined4 *)(iVar2 + 0xa8) = param_3;
  uVar1 = *DAT_003d19ec;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

