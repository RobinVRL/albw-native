#include "ghidra_types.h"

extern undefined4 DAT_0010ab08;

// USA 0010AAAC <- EU 0010AAAC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// PARAM param_6 Stack[0x4]:4 undefined1 *
// GLOBAL DAT_0010ab08 undefined4

int func_0010AAAC(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5,
                 undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010ab08;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined2 *)(iVar2 + 0x88) = param_4;
  *(undefined2 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_6 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

