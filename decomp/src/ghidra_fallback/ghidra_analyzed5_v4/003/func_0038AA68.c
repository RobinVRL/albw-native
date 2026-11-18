#include "ghidra_types.h"

extern int func_0038A674(int *param_1,undefined4 param_2,uint param_3);

// USA 0038AA68 <- EU 0038AA44 (Ghidra, non-matching)

void func_0038AA68(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  func_0038A674(param_1,param_2,param_3);
  piVar2 = (int *)param_1[9];
  piVar3 = piVar2 + param_1[7];
  for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
    (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
    piVar1 = (int *)*piVar2;
    (**(code **)(*piVar1 + 0x34))(piVar1);
    *(undefined1 *)((int)piVar1 + 0xe) = 0;
    *(undefined1 *)((int)piVar1 + 0xd) = 0;
  }
  (**(code **)(*(int *)param_1[0x1d] + 8))((int *)param_1[0x1d]);
  piVar2 = (int *)param_1[0x1d];
  (**(code **)(*piVar2 + 0x34))(piVar2);
  *(undefined1 *)((int)piVar2 + 0xe) = 0;
  *(undefined1 *)((int)piVar2 + 0xd) = 0;
  return;
}

