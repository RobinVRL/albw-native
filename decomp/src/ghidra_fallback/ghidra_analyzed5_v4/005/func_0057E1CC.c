#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 0057E1CC <- EU 0057E1A4 (Ghidra, non-matching)

undefined8 func_0057E1CC(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  piVar2 = (int *)(param_1 + 0x10);
  puVar3 = *(uint **)(param_2 + 4);
  (**(code **)(*(int *)(param_1 + 0x10) + 8))(piVar2);
  uVar1 = 0;
  do {
    if (*(char *)(*(int *)(param_1 + 0x14) + uVar1) == '\0') {
      if ((int)uVar1 < 0x40001) goto LAB_0057e1f8;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  uVar1 = 0;
LAB_0057e1f8:
  if (*(int *)(param_2 + 8) <= (int)uVar1) {
    uVar1 = *(int *)(param_2 + 8) - 1;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  uVar4 = func_0010E3C4(puVar3,*(uint **)(param_1 + 0x14),uVar1);
  *(undefined1 *)((int)puVar3 + uVar1) = 0;
  return uVar4;
}

