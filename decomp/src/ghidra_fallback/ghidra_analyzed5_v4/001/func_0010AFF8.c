#include "ghidra_types.h"

extern undefined4 DAT_0010b06c;
extern int *DAT_0010b070;

// USA 0010AFF8 <- EU 0010AFF8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4 *
// GLOBAL DAT_0010b06c undefined4
// GLOBAL DAT_0010b070 int *

int func_0010AFF8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_0010b06c;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  *(int *)(iVar3 + 0x88) = param_3;
  *(int *)(iVar3 + 0x8c) = param_5;
  *(uint *)(iVar3 + 0x90) = param_3 << 0xe | 0x402;
  *(undefined4 *)(iVar3 + 0x94) = param_2;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar1 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar1 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar1 + 0x184) = param_4;
  iVar2 = *DAT_0010b070;
  software_interrupt(0x32);
  *puVar4 = uVar5;
  *(undefined4 *)(iVar1 + 0x184) = uVar6;
  if (-1 < iVar2) {
    *param_6 = *(undefined4 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}

