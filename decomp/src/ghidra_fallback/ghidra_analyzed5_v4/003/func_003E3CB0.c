#include "ghidra_types.h"

extern undefined4 DAT_003e3ce0;

// USA 003E3CB0 <- EU 003E3C90 (Ghidra, non-matching)
// GLOBAL DAT_003e3ce0 undefined4

uint func_003E3CB0(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = DAT_003e3ce0;
  *(undefined4 *)(iVar4 + 0x84) = param_2;
  *(int *)(iVar4 + 0x88) = param_4;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar3 = param_4 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_3;
  uVar1 = *param_1;
  software_interrupt(0x32);
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar4 + 0x84);
  }
  return uVar1;
}

