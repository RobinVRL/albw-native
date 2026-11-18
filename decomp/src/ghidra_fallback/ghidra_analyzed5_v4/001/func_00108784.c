#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);

// USA 00108784 <- EU 00108784 (Ghidra, non-matching)

uint func_00108784(uint *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10800;
  func_00110D44((undefined4 *)(iVar2 + 0x84),param_2,0x80);
  uVar1 = *param_1;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

