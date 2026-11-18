#include "ghidra_types.h"

extern undefined4 DAT_003c9ab4;

// USA 003C9A84 <- EU 003C9A60 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003c9ab4 undefined4

int func_003C9A84(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c9ab4;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_5;
  *(uint *)(iVar2 + 0x90) = param_6 << 4 | 0xc;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

