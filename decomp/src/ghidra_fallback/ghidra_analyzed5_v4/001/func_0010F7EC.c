#include "ghidra_types.h"

extern undefined4 DAT_0010f888;

// USA 0010F7EC <- EU 0010F7EC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 undefined4
// PARAM param_10 Stack[0x14]:4 int
// PARAM param_11 Stack[0x18]:4 undefined4
// PARAM param_12 Stack[0x1c]:4 undefined4
// GLOBAL DAT_0010f888 undefined4

int func_0010F7EC(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                 undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010f888;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(undefined4 *)(iVar2 + 0x9c) = param_11;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x94) = param_8;
  *(int *)(iVar2 + 0x98) = param_10;
  *(undefined4 *)(iVar2 + 0xa0) = param_12;
  *(uint *)(iVar2 + 0xa4) = param_7 << 0xe | 0x802;
  *(undefined4 *)(iVar2 + 0xa8) = param_6;
  *(uint *)(iVar2 + 0xac) = param_10 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xb0) = param_9;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

