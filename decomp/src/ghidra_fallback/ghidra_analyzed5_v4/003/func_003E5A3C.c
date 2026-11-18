#include "ghidra_types.h"

extern undefined4 DAT_003e5a64;
extern uint *DAT_003e5a68;

// USA 003E5A3C <- EU 003E5A1C (Ghidra, non-matching)
// GLOBAL DAT_003e5a64 undefined4
// GLOBAL DAT_003e5a68 uint *

uint func_003E5A3C(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e5a64;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(uint *)(iVar2 + 0x94) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  uVar1 = *DAT_003e5a68;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

