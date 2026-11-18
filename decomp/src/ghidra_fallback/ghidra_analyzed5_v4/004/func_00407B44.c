#include "ghidra_types.h"

extern int func_00112274(int param_1,int param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 00407B44 <- EU 00407B24 (Ghidra, non-matching)

undefined4 func_00407B44(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)*(byte *)(param_2 + 0x99) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  if (param_1[0xc] != 0) {
    while( true ) {
      if (*param_1 < param_1[0xc]) {
        func_00112364(param_1,(int)(param_1 + 1),(int *)(param_2 + 0xfc));
        func_00112274((int)param_1,param_2);
        *(int **)(param_2 + 0x10) = param_1;
        return 1;
      }
      iVar3 = param_1[4];
      if ((int *)(iVar3 + -0x104) == (int *)0x0) break;
      iVar4 = (uint)*(byte *)(iVar3 + -0x6b) + *(int *)(iVar3 + -0xb4);
      if ((char)param_1[0x16] == '\0') {
        iVar2 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar1 < iVar2) {
          return 0;
        }
      }
      else {
        iVar2 = UnsignedSaturate(iVar4,7);
        UnsignedDoesSaturate(iVar4,7);
        if (iVar1 <= iVar2) {
          return 0;
        }
      }
      (**(code **)(*(int *)(iVar3 + -0x104) + 0x10))((int *)(iVar3 + -0x104));
    }
  }
  return 0;
}

