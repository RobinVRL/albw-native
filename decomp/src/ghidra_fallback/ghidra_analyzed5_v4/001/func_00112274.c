#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);

// USA 00112274 <- EU 00112274 (Ghidra, non-matching)

undefined4 func_00112274(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    iVar2 = (uint)*(byte *)(param_2 + 0x99) + *(int *)(param_2 + 0x50);
    do {
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2d] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 < iVar3) break;
      }
      else {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2d] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 <= iVar3) break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x10));
  }
  return func_00112364((int *)(param_1 + 0xc),(int)piVar1,(int *)(param_2 + 0x104));
}

