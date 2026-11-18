#include "ghidra_types.h"

extern undefined4 DAT_003d1a74;
extern int *DAT_003d1a78;

// USA 003D1A50 <- EU 003D1A2C (Ghidra, non-matching)
// GLOBAL DAT_003d1a74 undefined4
// GLOBAL DAT_003d1a78 int *

int func_003D1A50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d1a74;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = 0x20;
  iVar1 = *DAT_003d1a78;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_4 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

