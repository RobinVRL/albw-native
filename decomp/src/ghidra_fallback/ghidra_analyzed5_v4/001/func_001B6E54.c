#include "ghidra_types.h"

extern int func_00569578(int param_1,int param_2,int *param_3,undefined4 param_4);

// USA 001B6E54 <- EU 001B6E54 (Ghidra, non-matching)

int * func_001B6E54(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = (int *)0x0;
  piVar7 = *(int **)(param_1 + 0x20);
  piVar1 = piVar7 + *(int *)(param_1 + 0x18);
  do {
    if (piVar7 == piVar1) {
      return piVar8;
    }
    for (piVar4 = *(int **)(param_3 + 0x10); piVar4 != (int *)(param_3 + 0x10);
        piVar4 = (int *)*piVar4) {
      piVar5 = (int *)piVar4[2];
      piVar6 = *(int **)(*piVar7 + 0x44);
      iVar2 = (**(code **)(*piVar5 + 8))(piVar5);
      iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
      if ((iVar2 == iVar3) &&
         (piVar8 = func_00569578(*piVar7,param_2,piVar5,param_4), piVar8 != (int *)0x0)) break;
    }
    piVar7 = piVar7 + 1;
  } while( true );
}

