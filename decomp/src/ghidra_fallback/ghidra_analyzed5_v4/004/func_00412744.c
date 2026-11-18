#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 00412744 <- EU 00412724 (Ghidra, non-matching)

undefined4 func_00412744(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = (uint)*(byte *)(param_2 + 0x99) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  if (param_1[3] != 0) {
    while( true ) {
      if (*param_1 < param_1[3]) {
        func_00112364(param_1,(int)(param_1 + 1),(int *)(param_2 + 0x10c));
        *(int **)(param_2 + 0x18) = param_1;
        return 1;
      }
      piVar3 = (int *)param_1[1];
      piVar6 = (int *)0x0;
      iVar2 = 0x80;
      while (piVar3 != param_1 + 1) {
        iVar4 = piVar3[-0x2f] + (uint)*(byte *)((int)piVar3 + -0x73);
        iVar5 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar5 < iVar2) {
          piVar6 = piVar3 + -0x43;
        }
        piVar3 = (int *)*piVar3;
        if (iVar5 < iVar2) {
          iVar2 = iVar5;
        }
      }
      if (piVar6 == (int *)0x0) break;
      iVar5 = (uint)*(byte *)((int)piVar6 + 0x99) + piVar6[0x14];
      iVar2 = UnsignedSaturate(iVar5,7);
      UnsignedDoesSaturate(iVar5,7);
      if (iVar1 < iVar2) {
        return 0;
      }
      (**(code **)(*piVar6 + 0x10))(piVar6);
    }
  }
  return 0;
}

