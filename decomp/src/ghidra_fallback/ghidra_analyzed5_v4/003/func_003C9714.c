#include "ghidra_types.h"

extern undefined4 DAT_003c973c;

// USA 003C9714 <- EU 003C96F0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003c973c undefined4

uint func_003C9714(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003c973c;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(int *)(iVar2 + 0x94) = param_7;
  *(uint *)(iVar2 + 0x98) = param_7 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x9c) = param_6;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

