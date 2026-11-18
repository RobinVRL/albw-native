#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 00689A64 <- EU 00689A3C (Ghidra, non-matching)

int func_00689A64(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 4);
  if (param_3 < 0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_3 = 0;
    do {
      if (*(short *)(param_2[1] + param_3 * 2) == 0) {
        if (param_3 < 0x40001) goto LAB_00689a9c;
        break;
      }
      param_3 = param_3 + 1;
    } while (param_3 < 0x40001);
    param_3 = 0;
  }
LAB_00689a9c:
  if (*(int *)(param_1 + 8) <= param_3) {
    param_3 = *(int *)(param_1 + 8) + -1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar1,(uint *)param_2[1],param_3 << 1);
  *(undefined2 *)((int)puVar1 + param_3 * 2) = 0;
  return param_3;
}

