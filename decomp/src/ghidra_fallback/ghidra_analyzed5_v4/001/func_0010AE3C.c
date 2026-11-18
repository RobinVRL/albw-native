#include "ghidra_types.h"

extern undefined4 DAT_0010ae7c;

// USA 0010AE3C <- EU 0010AE3C (Ghidra, non-matching)
// GLOBAL DAT_0010ae7c undefined4

uint func_0010AE3C(uint *param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0010ae7c;
  *(undefined1 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

