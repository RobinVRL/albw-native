#include "ghidra_types.h"


// USA 00145A30 <- EU 00145A30 (Ghidra, non-matching)

void func_00145A30(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = (int)*(short *)(param_1 + 0x49c);
  uVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)(param_1 + 0x4ac);
    while( true ) {
      piVar2 = piVar1;
      if (uVar3 < 0x10) {
        piVar2 = piVar1 + uVar3;
      }
      if (*piVar2 == param_2) break;
      uVar3 = uVar3 + 1;
      if (iVar4 <= (int)uVar3) {
        return;
      }
    }
    if ((int)uVar3 < iVar4 + -1) {
      do {
        piVar2 = piVar1;
        if (uVar3 < 0x10) {
          piVar2 = piVar1 + uVar3;
        }
        piVar5 = piVar1;
        if (uVar3 + 1 < 0x10) {
          piVar5 = piVar1 + uVar3 + 1;
        }
        uVar3 = uVar3 + 1;
        *piVar2 = *piVar5;
      } while ((int)uVar3 < *(short *)(param_1 + 0x49c) + -1);
    }
    *(short *)(param_1 + 0x49c) = *(short *)(param_1 + 0x49c) + -1;
  }
  return;
}

