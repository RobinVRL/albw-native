#include "ghidra_types.h"

extern undefined4 DAT_003c9980;

// USA 003C9950 <- EU 003C992C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 undefined4
// PARAM param_10 Stack[0x14]:4 undefined4
// PARAM param_11 Stack[0x18]:1 undefined1
// GLOBAL DAT_003c9980 undefined4

uint func_003C9950(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c9980;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(int *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_7;
  *(undefined4 *)(iVar2 + 0x98) = param_8;
  *(undefined4 *)(iVar2 + 0x9c) = param_9;
  *(undefined4 *)(iVar2 + 0xa0) = param_10;
  *(undefined1 *)(iVar2 + 0xa4) = param_11;
  *(uint *)(iVar2 + 0xa8) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xac) = param_4;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

