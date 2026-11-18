#include "ghidra_types.h"

extern undefined4 DAT_003c99f4;

// USA 003C99A8 <- EU 003C9984 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 undefined4
// PARAM param_5 Stack[0x4]:4 undefined4
// PARAM param_6 Stack[0x8]:4 undefined4
// PARAM param_7 Stack[0xc]:4 undefined4
// PARAM param_8 Stack[0x10]:4 int
// PARAM param_9 Stack[0x14]:4 undefined4
// PARAM param_10 Stack[0x18]:4 undefined4
// GLOBAL DAT_003c99f4 undefined4

int func_003C99A8(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c99f4;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(int *)(iVar2 + 0x94) = param_8;
  *(undefined4 *)(iVar2 + 0x98) = param_9;
  *(undefined4 *)(iVar2 + 0x9c) = param_10;
  *(uint *)(iVar2 + 0xa0) = param_8 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa4) = param_7;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

