#include "ghidra_types.h"

extern undefined4 DAT_003d1910;
extern int *DAT_003d1914;

// USA 003D18CC <- EU 003D18A8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_003d1910 undefined4
// GLOBAL DAT_003d1914 int *

int func_003D18CC(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003d1910;
  *(undefined4 *)(iVar3 + 0x8c) = param_5;
  *(undefined4 *)(iVar3 + 0x90) = param_6;
  *(undefined4 *)(iVar3 + 0x94) = 0x20;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  *(undefined4 *)(iVar3 + 0xa0) = param_1;
  piVar1 = DAT_003d1914;
  *(uint *)(iVar3 + 0x9c) = param_2 << 4 | 0xc;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_3 = *(undefined4 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}

