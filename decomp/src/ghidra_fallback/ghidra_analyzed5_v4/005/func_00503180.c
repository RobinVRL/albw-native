#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int func_00556068(int param_1);
extern int *DAT_005032a0;

// USA 00503180 <- EU 00503158 (Ghidra, non-matching)
// GLOBAL DAT_005032a0 int *

undefined4 func_00503180(int *param_1,int param_2,undefined1 *param_3,int *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((*DAT_005032a0 == 0) || (cVar1 = func_004CDDEC(*DAT_005032a0,param_1,0), cVar1 == '\0')) {
    return 0;
  }
  param_1[0xb8] = param_2;
  if ((param_2 == 0) || (*(int **)(param_2 + 0x14) = param_1 + 0x61, param_4 != (int *)0x0)) {
    puVar5 = (uint *)param_1[0x4f];
    (**(code **)(*param_4 + 8))(param_4);
    uVar4 = 0;
    do {
      if (*(char *)(param_4[1] + uVar4) == '\0') {
        if ((int)uVar4 < 0x40001) goto LAB_00503258;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x40001);
    uVar4 = 0;
LAB_00503258:
    iVar3 = param_1[0x50];
    if ((int)uVar4 < iVar3) goto LAB_00503264;
  }
  else {
    puVar2 = func_00556068(param_2);
    param_4 = (int *)puVar2[0xb0];
    puVar5 = (uint *)param_1[0x4f];
    (**(code **)(*param_4 + 8))(param_4);
    uVar4 = 0;
    do {
      if (*(char *)(param_4[1] + uVar4) == '\0') {
        if ((int)uVar4 < 0x40001) goto LAB_00503238;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x40001);
    uVar4 = 0;
LAB_00503238:
    iVar3 = param_1[0x50];
    if ((int)uVar4 < iVar3) goto LAB_00503264;
  }
  uVar4 = iVar3 - 1;
LAB_00503264:
  (**(code **)(*param_4 + 8))(param_4);
  func_0010E3C4(puVar5,(uint *)param_4[1],uVar4);
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  *(undefined1 *)((int)param_1 + 0x2cb) = *param_3;
  return 1;
}

