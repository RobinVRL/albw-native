#include "ghidra_types.h"

extern undefined4 DAT_003d2f2c;

// USA 003D2F18 <- EU 003D2EF4 (Ghidra, non-matching)
// GLOBAL DAT_003d2f2c undefined4

int func_003D2F18(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003d2f2c;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

