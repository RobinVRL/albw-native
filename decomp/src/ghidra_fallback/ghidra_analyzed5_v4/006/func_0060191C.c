#include "ghidra_types.h"

extern int func_0010AF18(void);
extern undefined4 DAT_003e3ce0;

// USA 0060191C <- EU 006018F4 (Ghidra, non-matching)
// GLOBAL DAT_003e3ce0 undefined4

uint func_003E3C88(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = (uint *)func_0010AF18();
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = DAT_003e3ce0;
  *(undefined4 *)(iVar5 + 0x84) = param_1;
  *(int *)(iVar5 + 0x88) = param_3;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar3 + 0x180);
  uVar6 = *puVar4;
  uVar7 = *(undefined4 *)(iVar3 + 0x184);
  *puVar4 = param_3 << 0xe | 2;
  *(undefined4 *)(iVar3 + 0x184) = param_2;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  *puVar4 = uVar6;
  *(undefined4 *)(iVar3 + 0x184) = uVar7;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar5 + 0x84);
  }
  return uVar2;
}

