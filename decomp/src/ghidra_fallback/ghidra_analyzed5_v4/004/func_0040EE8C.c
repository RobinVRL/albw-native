#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int DAT_0040ef10;

// USA 0040EE8C <- EU 0040EE6C (Ghidra, non-matching)
// GLOBAL DAT_0040ef10 int

undefined4 func_0040EE8C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_0040ef10 + param_1);
  iVar4 = (uint)*(byte *)(param_1 + 0x99) + *(int *)(param_1 + 0x50);
  if (iVar4 < 0x80) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x7f;
  }
  func_00111EF0((int *)(iVar3 + 8),(int *)(param_1 + 0xf4));
  piVar2 = *(int **)(iVar3 + 0xc);
  if (piVar2 != (int *)(iVar3 + 0xc)) {
    do {
      iVar1 = piVar2[-0x29] + (uint)*(byte *)((int)piVar2 + -0x5b);
      if (iVar1 < 0x80) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x7f;
      }
    } while ((iVar1 <= iVar4) && (piVar2 = (int *)*piVar2, piVar2 != (int *)(iVar3 + 0xc)));
  }
  return func_00112364((int *)(iVar3 + 8),(int)piVar2,(int *)(param_1 + 0xf4));
}

