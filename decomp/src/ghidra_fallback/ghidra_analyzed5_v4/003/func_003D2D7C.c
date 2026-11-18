#include "ghidra_types.h"

extern undefined4 DAT_003d2d98;

// USA 003D2D7C <- EU 003D2D58 (Ghidra, non-matching)
// GLOBAL DAT_003d2d98 undefined4

int func_003D2D7C(int *param_1,undefined2 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d2d98;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_3 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

