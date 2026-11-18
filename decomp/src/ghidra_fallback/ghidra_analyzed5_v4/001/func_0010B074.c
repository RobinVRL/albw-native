#include "ghidra_types.h"

extern undefined4 DAT_0010b0c4;
extern uint *DAT_0010b0c8;

// USA 0010B074 <- EU 0010B074 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_0010b0c4 undefined4
// GLOBAL DAT_0010b0c8 uint *

uint func_0010B074(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010b0c4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x90) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0x98) = param_6;
  *(uint *)(iVar2 + 0x9c) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa0) = param_4;
  uVar1 = *DAT_0010b0c8;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

