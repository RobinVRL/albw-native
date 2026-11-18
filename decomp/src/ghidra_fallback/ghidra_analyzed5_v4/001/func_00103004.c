#include "ghidra_types.h"

extern undefined4 DAT_00103058;
extern int *DAT_0010305c;

// USA 00103004 <- EU 00103004 (Ghidra, non-matching)
// GLOBAL DAT_00103058 undefined4
// GLOBAL DAT_0010305c int *

int func_00103004(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00103058;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *DAT_0010305c;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    *param_4 = *(undefined4 *)(iVar2 + 0x8c);
    *param_1 = *(undefined4 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

