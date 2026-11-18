#include "ghidra_types.h"

extern undefined4 DAT_004132f8;
extern int DAT_004132fc;

// USA 00413250 <- EU 00413230 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004132f8 undefined4
// GLOBAL DAT_004132fc int

undefined4
func_00413250(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,param_5 * 4 * param_4 + param_1[3] + 8,0);
  iVar2 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,DAT_004132f8,0x20);
  iVar6 = DAT_004132fc;
  if (iVar2 == 0x20) {
    if (0 < (int)param_5) {
      iVar2 = DAT_004132fc;
      puVar4 = param_2 + -1;
      puVar5 = param_3 + -1;
      if ((param_5 & 1) != 0) {
        *param_2 = *(undefined2 *)(DAT_004132fc + 4);
        iVar2 = iVar6 + 4;
        *param_3 = *(undefined2 *)(iVar6 + 6);
        puVar4 = param_2;
        puVar5 = param_3;
      }
      for (iVar6 = (int)param_5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar4[1] = *(undefined2 *)(iVar2 + 4);
        puVar5[1] = *(undefined2 *)(iVar2 + 6);
        puVar4 = puVar4 + 2;
        *puVar4 = *(undefined2 *)(iVar2 + 8);
        puVar1 = (undefined2 *)(iVar2 + 10);
        iVar2 = iVar2 + 8;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar1;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

