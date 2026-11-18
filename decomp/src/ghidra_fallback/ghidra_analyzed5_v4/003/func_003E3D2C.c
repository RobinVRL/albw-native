#include "ghidra_types.h"

extern undefined4 DAT_003e3d50;

// USA 003E3D2C <- EU 003E3D0C (Ghidra, non-matching)
// GLOBAL DAT_003e3d50 undefined4

uint func_003E3D2C(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e3d50;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

