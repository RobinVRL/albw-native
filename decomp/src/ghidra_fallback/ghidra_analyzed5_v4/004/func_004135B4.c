#include "ghidra_types.h"

extern int DAT_004135f4;
extern uint DAT_004135f8;

// USA 004135B4 <- EU 00413594 (Ghidra, non-matching)
// GLOBAL DAT_004135f4 int
// GLOBAL DAT_004135f8 uint

void func_004135B4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*param_2 != DAT_004135f4) {
    return;
  }
  iVar1 = param_2[2];
  if (iVar1 + 0xfe000000U <= DAT_004135f8) {
    iVar7 = param_2[1];
    iVar2 = param_2[3];
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = iVar7;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    param_1[6] = iVar5;
    param_1[7] = iVar6;
    iVar1 = param_2[9];
    iVar2 = param_2[10];
    iVar3 = param_2[0xb];
    iVar4 = param_2[0xc];
    iVar5 = param_2[0xd];
    param_1[8] = param_2[8];
    param_1[9] = iVar1;
    param_1[10] = iVar2;
    param_1[0xb] = iVar3;
    param_1[0xc] = iVar4;
    param_1[0xd] = iVar5;
  }
  return;
}

