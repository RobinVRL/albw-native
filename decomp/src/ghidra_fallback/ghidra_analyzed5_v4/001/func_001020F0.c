#include "ghidra_types.h"

extern undefined4 DAT_0010211c;

// USA 001020F0 <- EU 001020F0 (Ghidra, non-matching)
// GLOBAL DAT_0010211c undefined4

uint func_001020F0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010211c;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

