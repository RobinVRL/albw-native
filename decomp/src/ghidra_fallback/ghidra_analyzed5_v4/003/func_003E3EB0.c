#include "ghidra_types.h"

extern undefined4 DAT_003e3edc;

// USA 003E3EB0 <- EU 003E3E90 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_003e3edc undefined4

int func_003E3EB0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e3edc;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

