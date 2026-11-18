#include "ghidra_types.h"

extern undefined4 DAT_0010b120;
extern int *DAT_0010b124;

// USA 0010B0CC <- EU 0010B0CC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined1 *
// GLOBAL DAT_0010b120 undefined4
// GLOBAL DAT_0010b124 int *

int func_0010B0CC(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_0010b120;
  *(undefined1 *)(iVar3 + 0x84) = param_1;
  *(undefined4 *)(iVar3 + 0x88) = param_2;
  *(undefined1 *)(iVar3 + 0x8c) = param_3;
  piVar1 = DAT_0010b124;
  *(undefined4 *)(iVar3 + 0x90) = param_4;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_5 = *(undefined1 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}

