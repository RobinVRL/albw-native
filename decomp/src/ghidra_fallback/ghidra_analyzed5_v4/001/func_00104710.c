#include "ghidra_types.h"

extern int *DAT_00104784;

// USA 00104710 <- EU 00104710 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4 *
// GLOBAL DAT_00104784 int *

int func_00104710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  iVar1 = *DAT_00104784;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    *param_2 = *(undefined4 *)(iVar2 + 0x90);
    *param_3 = *(undefined4 *)(iVar2 + 0x94);
    *param_4 = *(undefined4 *)(iVar2 + 0x98);
    *param_5 = *(undefined4 *)(iVar2 + 0x9c);
    *param_6 = *(undefined4 *)(iVar2 + 0xa0);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

