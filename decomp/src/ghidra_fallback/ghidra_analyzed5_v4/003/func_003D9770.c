#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D9770 <- EU 003D9750 (Ghidra, non-matching)

undefined4 func_003D9770(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *(int *)(param_2 + 4);
  piVar5 = (int *)param_1[1];
LAB_003d9768:
  while( true ) {
    if (piVar5 == param_1 || iVar6 == param_2) {
      return 1;
    }
    uVar1 = *(ushort *)(piVar5 + 2);
    uVar2 = *(ushort *)(iVar6 + 8);
    uVar3 = *(ushort *)((int)piVar5 + 10);
    uVar4 = *(ushort *)(iVar6 + 10);
    if (uVar1 != uVar2) break;
    if (uVar4 < uVar3) {
      *(ushort *)(piVar5 + 2) = uVar4 + 1;
      goto LAB_003d9844;
    }
LAB_003d979c:
    piVar7 = (int *)piVar5[1];
    *(int **)(*piVar5 + 4) = piVar7;
    *(int *)piVar5[1] = *piVar5;
    func_003DA464((int *)param_1[2],(int)piVar5,1);
    piVar5 = piVar7;
  }
  if (uVar2 < uVar1) {
    if (uVar1 <= uVar4) {
      if (uVar3 <= uVar4) goto LAB_003d979c;
      *(ushort *)(piVar5 + 2) = uVar4 + 1;
      goto LAB_003d9768;
    }
  }
  else {
    if (uVar3 < uVar2) {
      piVar5 = (int *)piVar5[1];
      goto LAB_003d9768;
    }
    *(ushort *)((int)piVar5 + 10) = uVar2 - 1;
    if (uVar3 <= uVar4) {
      piVar5 = (int *)piVar5[1];
      goto LAB_003d9768;
    }
    piVar7 = (int *)piVar5[1];
    piVar5 = (int *)func_003DA498((int *)param_1[2],1);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = *piVar7;
      piVar5[1] = (int)piVar7;
      *piVar7 = (int)piVar5;
      *(int **)(*piVar5 + 4) = piVar5;
    }
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    *(ushort *)(piVar5 + 2) = uVar4 + 1;
    *(ushort *)((int)piVar5 + 10) = uVar3;
  }
LAB_003d9844:
  iVar6 = *(int *)(iVar6 + 4);
  goto LAB_003d9768;
}

