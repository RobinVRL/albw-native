#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00688ff0;
extern undefined4 DAT_00688ff4;
extern undefined4 DAT_00688ff8;

// USA 00688F58 <- EU 00688F30 (Ghidra, non-matching)
// GLOBAL DAT_00688ff0 undefined4
// GLOBAL DAT_00688ff4 undefined4
// GLOBAL DAT_00688ff8 undefined4

undefined4 * func_00688F58(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1[1] = param_1 + 3;
  uVar1 = DAT_00688ff0;
  param_1[2] = 0x40;
  *param_1 = uVar1;
  *(undefined1 *)(param_1[1] + 0x3f) = 0;
  *param_1 = DAT_00688ff4;
  puVar3 = (uint *)param_1[1];
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_00688fb0;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_00688fb0:
  if ((int)param_1[2] <= (int)uVar2) {
    uVar2 = param_1[2] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar3,(uint *)param_2[1],uVar2);
  uVar1 = DAT_00688ff8;
  *(undefined1 *)((int)puVar3 + uVar2) = 0;
  *param_1 = uVar1;
  return param_1;
}

