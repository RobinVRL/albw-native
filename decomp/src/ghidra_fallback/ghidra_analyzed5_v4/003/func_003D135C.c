#include "ghidra_types.h"

extern undefined4 DAT_003d13b0;
extern int *DAT_003d13b4;

// USA 003D135C <- EU 003D1338 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003d13b0 undefined4
// GLOBAL DAT_003d13b4 int *

int func_003D135C(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                 undefined4 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d13b0;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  *(int *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_7;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  *(uint *)(iVar2 + 0x9c) = param_7 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0xa0) = param_6;
  iVar1 = *DAT_003d13b4;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

