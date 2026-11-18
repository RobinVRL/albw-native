#include "ghidra_types.h"

extern undefined4 DAT_0010b1ac;
extern int *DAT_0010b1b0;

// USA 0010B128 <- EU 0010B128 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4 *
// PARAM param_7 Stack[0x8]:4 undefined4 *
// GLOBAL DAT_0010b1ac undefined4
// GLOBAL DAT_0010b1b0 int *

int func_0010B128(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_0010b1ac;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(int *)(iVar3 + 0x88) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = *DAT_0010b1b0;
  software_interrupt(0x32);
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar3 + 0x88);
    *param_3 = *(undefined4 *)(iVar3 + 0x8c);
    *param_6 = *(undefined4 *)(iVar3 + 0x90);
    *param_7 = *(undefined4 *)(iVar3 + 0x98);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}

