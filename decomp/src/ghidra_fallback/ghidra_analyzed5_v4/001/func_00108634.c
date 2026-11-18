#include "ghidra_types.h"

extern undefined4 DAT_00108678;
extern uint *DAT_0010867c;

// USA 00108634 <- EU 00108634 (Ghidra, non-matching)
// GLOBAL DAT_00108678 undefined4
// GLOBAL DAT_0010867c uint *

uint func_00108634(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_00108678;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(undefined4 *)(iVar3 + 0x90) = param_1;
  puVar1 = DAT_0010867c;
  *(uint *)(iVar3 + 0x8c) = param_2 << 4 | 0xc;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

