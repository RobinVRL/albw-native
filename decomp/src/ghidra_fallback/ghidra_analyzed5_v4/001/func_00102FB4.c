#include "ghidra_types.h"

extern undefined4 DAT_00102ffc;
extern int *DAT_00103000;

// USA 00102FB4 <- EU 00102FB4 (Ghidra, non-matching)
// GLOBAL DAT_00102ffc undefined4
// GLOBAL DAT_00103000 int *

int func_00102FB4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00102ffc;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  iVar1 = *DAT_00103000;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

