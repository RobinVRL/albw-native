#include "ghidra_types.h"


// USA 003E3E60 <- EU 003E3E40 (Ghidra, non-matching)

int func_003E3E60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = 0x180000;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar5 + 0x88);
    uVar3 = *(undefined4 *)(iVar5 + 0x8c);
    uVar4 = *(undefined4 *)(iVar5 + 0x90);
    uVar9 = *(undefined4 *)(iVar5 + 0x94);
    uVar6 = *(undefined4 *)(iVar5 + 0x98);
    uVar7 = *(undefined4 *)(iVar5 + 0x9c);
    uVar8 = *(undefined4 *)(iVar5 + 0xa0);
    param_2[7] = *(undefined4 *)(iVar5 + 0xa4);
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar9;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}

