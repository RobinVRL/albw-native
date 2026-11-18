#include "ghidra_types.h"


// USA 00412868 <- EU 00412848 (Ghidra, non-matching)

void func_00412868(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  param_1[3] = param_2;
  while (param_1[3] < *param_1) {
    piVar2 = (int *)param_1[1];
    piVar4 = (int *)0x0;
    iVar5 = 0x80;
    while (piVar2 != param_1 + 1) {
      iVar3 = piVar2[-0x2f] + (uint)*(byte *)((int)piVar2 + -0x73);
      iVar1 = UnsignedSaturate(iVar3,7);
      UnsignedDoesSaturate(iVar3,7);
      if (iVar1 < iVar5) {
        piVar4 = piVar2 + -0x43;
      }
      piVar2 = (int *)*piVar2;
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
  }
  return;
}

