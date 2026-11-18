#include "ghidra_types.h"

extern undefined4 DAT_003c9b78;

// USA 003C9B68 <- EU 003C9B44 (Ghidra, non-matching)
// GLOBAL DAT_003c9b78 undefined4

int func_003C9B68(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003c9b78;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}

