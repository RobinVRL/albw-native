#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern uint DAT_003fd340;

// USA 003FD1EC <- EU 003FD1CC (Ghidra, non-matching)
// GLOBAL DAT_003fd340 uint

undefined4 func_003FD1EC(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  uVar3 = DAT_003fd340;
  uVar6 = 0;
  if (((*(int *)(param_1 + 0x4c) == 0) &&
      (puVar4 = *(uint **)(param_1 + 0x5c), puVar4 != (uint *)0x0)) &&
     (*(int *)(param_1 + 0x60) != 0)) {
    iVar1 = *(int *)(param_2 + 0x30);
    uVar2 = func_00103CBC((char *)puVar4);
    uVar2 = func_00564ABC((short *)(iVar1 + 0x34),puVar4,uVar2);
    if (uVar2 == uVar3) {
      uVar6 = 0x80000020;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x60);
      piVar7 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + uVar2 * 4);
      if (puVar4 == (uint *)0x0) {
LAB_003fd284:
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar7;
        iVar5 = iVar1 + piVar7[1] * 0x10;
        while ((iVar1 != iVar5 &&
               (uVar2 = func_0010FBAC(*(uint **)(iVar1 + 0xc),puVar4), uVar2 != 0))) {
          iVar1 = iVar1 + 0x10;
        }
        if (*piVar7 + piVar7[1] * 0x10 == iVar1) goto LAB_003fd284;
      }
      *(int *)(param_1 + 0x4c) = iVar1;
    }
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    return uVar6;
  }
  puVar4 = *(uint **)(param_1 + 100);
  if (puVar4 == (uint *)0x0) {
    return uVar6;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return uVar6;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = func_00103CBC((char *)puVar4);
  uVar2 = func_00564ABC((short *)(iVar1 + 0x34),puVar4,uVar2);
  if (uVar2 == uVar3) {
    return 0x80000020;
  }
  puVar4 = *(uint **)(param_1 + 0x68);
  piVar7 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + uVar2 * 4);
  if (puVar4 != (uint *)0x0) {
    iVar1 = *piVar7;
    iVar5 = iVar1 + piVar7[1] * 0x10;
    while ((iVar1 != iVar5 && (uVar3 = func_0010FBAC(*(uint **)(iVar1 + 0xc),puVar4), uVar3 != 0)))
    {
      iVar1 = iVar1 + 0x10;
    }
    if (*piVar7 + piVar7[1] * 0x10 != iVar1) goto LAB_003fd334;
  }
  iVar1 = 0;
LAB_003fd334:
  *(int *)(param_1 + 0x50) = iVar1;
  return uVar6;
}

