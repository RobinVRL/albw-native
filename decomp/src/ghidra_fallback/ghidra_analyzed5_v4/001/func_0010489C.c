#include "ghidra_types.h"

extern undefined4 DAT_001048d0;
extern uint *DAT_001048d4;

// USA 0010489C <- EU 0010489C (Ghidra, non-matching)
// GLOBAL DAT_001048d0 undefined4
// GLOBAL DAT_001048d4 uint *

uint func_0010489C(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_001048d0;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  uVar1 = *DAT_001048d4;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

