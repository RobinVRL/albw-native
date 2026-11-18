#include "ghidra_types.h"

extern undefined4 DAT_003e3e3c;

// USA 003E3E00 <- EU 003E3DE0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003e3e3c undefined4

uint func_003E3E00(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_003e3e3c;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_5;
  *(uint *)(iVar2 + 0x8c) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  *(uint *)(iVar2 + 0x94) = param_5 << 0xe | 0x402;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

