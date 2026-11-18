#include "ghidra_types.h"

extern int func_0010AF18(void);
extern undefined4 DAT_003e3d50;

// USA 006019B4 <- EU 0060198C (Ghidra, non-matching)
// GLOBAL DAT_003e3d50 undefined4

uint func_003E3D04(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)func_0010AF18();
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003e3d50;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  *(int *)(iVar3 + 0x88) = param_3;
  *(uint *)(iVar3 + 0x8c) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar3 + 0x90) = param_2;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}

