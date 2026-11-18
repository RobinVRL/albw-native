#include "ghidra_types.h"

extern undefined4 DAT_003c9858;

// USA 003C97F4 <- EU 003C97D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined1 *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 undefined4
// PARAM param_9 Stack[0x10]:4 int
// GLOBAL DAT_003c9858 undefined4

int func_003C97F4(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c9858;
  *(int *)(iVar2 + 0x8c) = param_9;
  *(uint *)(iVar2 + 0x90) = param_9 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x94) = param_8;
  *(undefined4 *)(iVar2 + 0x84) = param_6;
  *(undefined4 *)(iVar2 + 0x88) = param_7;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    *param_5 = *(undefined1 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

