#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 004103A8 <- EU 00410388 (Ghidra, non-matching)

undefined4 func_004103A8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x118);
  iVar2 = (uint)*(byte *)(param_1 + 0x99) + *(int *)(param_1 + 0x50);
  iVar1 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  func_00111EF0((int *)(iVar4 + 8),(int *)(param_1 + 0xf4));
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 != (int *)(iVar4 + 0xc)) {
    do {
      iVar2 = piVar3[-0x29] + (uint)*(byte *)((int)piVar3 + -0x5b);
      if (iVar2 < 0x80) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x7f;
      }
    } while ((iVar2 <= iVar1) && (piVar3 = (int *)*piVar3, piVar3 != (int *)(iVar4 + 0xc)));
  }
  return func_00112364((int *)(iVar4 + 8),(int)piVar3,(int *)(param_1 + 0xf4));
}

