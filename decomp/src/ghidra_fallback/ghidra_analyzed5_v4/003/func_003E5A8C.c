#include "ghidra_types.h"

extern undefined4 DAT_003e5ab0;
extern uint *DAT_003e5ab4;

// USA 003E5A8C <- EU 003E5A6C (Ghidra, non-matching)
// GLOBAL DAT_003e5ab0 undefined4
// GLOBAL DAT_003e5ab4 uint *

uint func_003E5A8C(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003e5ab0;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x8c) = param_1;
  puVar1 = DAT_003e5ab4;
  *(uint *)(iVar3 + 0x88) = param_2 << 0xe | 2;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

