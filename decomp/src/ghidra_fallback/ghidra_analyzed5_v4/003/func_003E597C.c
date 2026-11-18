#include "ghidra_types.h"

extern undefined4 DAT_003e59c4;
extern int *DAT_003e59c8;

// USA 003E597C <- EU 003E595C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_003e59c4 undefined4
// GLOBAL DAT_003e59c8 int *

int func_003E597C(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e59c4;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  iVar1 = *DAT_003e59c8;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    *param_3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    *param_5 = *(undefined4 *)(iVar2 + 0x94);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

