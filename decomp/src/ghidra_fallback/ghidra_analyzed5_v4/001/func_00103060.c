#include "ghidra_types.h"

extern undefined4 DAT_001030ac;
extern uint *DAT_001030b0;

// USA 00103060 <- EU 00103060 (Ghidra, non-matching)
// GLOBAL DAT_001030ac undefined4
// GLOBAL DAT_001030b0 uint *

uint func_00103060(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_001030ac;
  *(undefined4 *)(iVar3 + 0x8c) = param_3;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x94) = param_1;
  puVar1 = DAT_001030b0;
  *(uint *)(iVar3 + 0x90) = param_2 << 0xe | 2;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

