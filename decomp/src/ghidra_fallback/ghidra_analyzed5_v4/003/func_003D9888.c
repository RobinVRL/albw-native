#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);

// USA 003D9888 <- EU 003D9868 (Ghidra, non-matching)

undefined4 func_003D9888(int *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  piVar3 = (int *)param_1[1];
  while( true ) {
    if (piVar3 == param_1) {
      return 1;
    }
    uVar1 = *(ushort *)(piVar3 + 2);
    uVar2 = *(ushort *)((int)piVar3 + 10);
    uVar4 = (uint)uVar2;
    if (uVar1 == param_2) {
      if (uVar4 == param_2) {
        *(int *)(*piVar3 + 4) = piVar3[1];
        *(int *)piVar3[1] = *piVar3;
        func_003DA464((int *)param_1[2],(int)piVar3,1);
        return 1;
      }
      *(ushort *)(piVar3 + 2) = uVar1 + 1;
      return 1;
    }
    if (uVar4 == param_2) {
      *(ushort *)((int)piVar3 + 10) = uVar2 - 1;
      return 1;
    }
    if ((uVar1 <= param_2) && (param_2 <= uVar4)) break;
    piVar3 = (int *)piVar3[1];
  }
  *(short *)((int)piVar3 + 10) = (short)param_2 + -1;
  piVar5 = (int *)piVar3[1];
  piVar3 = (int *)func_003DA498((int *)param_1[2],1);
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar5;
    piVar3[1] = (int)piVar5;
    *piVar5 = (int)piVar3;
    *(int **)(*piVar3 + 4) = piVar3;
    *(short *)(piVar3 + 2) = (short)param_2 + 1;
    *(ushort *)((int)piVar3 + 10) = uVar2;
    return 1;
  }
  return 0;
}

