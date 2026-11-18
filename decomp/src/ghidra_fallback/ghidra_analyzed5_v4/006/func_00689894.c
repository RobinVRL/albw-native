#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 00689894 <- EU 0068986C (Ghidra, non-matching)

uint func_00689894(int param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 4);
  if ((int)param_3 < 0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_3 = 0;
    do {
      if (*(char *)(param_2[1] + param_3) == '\0') {
        if ((int)param_3 < 0x40001) goto LAB_006898c8;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < 0x40001);
    param_3 = 0;
  }
LAB_006898c8:
  if (*(int *)(param_1 + 8) <= (int)param_3) {
    param_3 = *(int *)(param_1 + 8) - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar1,(uint *)param_2[1],param_3);
  *(undefined1 *)((int)puVar1 + param_3) = 0;
  return param_3;
}

