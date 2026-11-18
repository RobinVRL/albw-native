#include "ghidra_types.h"

extern undefined4 DAT_003d2e80;

// USA 003D2E40 <- EU 003D2E1C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 ushort
// PARAM param_6 Stack[0x4]:4 undefined2 *
// GLOBAL DAT_003d2e80 undefined4

int func_003D2E40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ushort param_5,undefined2 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_003d2e80;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(ushort *)(iVar3 + 0x8c) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = (uint)param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = *param_1;
  software_interrupt(0x32);
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_6 = *(undefined2 *)(iVar3 + 0x88);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}

