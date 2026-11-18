#include "ghidra_types.h"

extern int func_0031B390(int param_1,uint param_2);
extern int DAT_0036851c;

// USA 003684B8 <- EU 00368494 (Ghidra, non-matching)
// GLOBAL DAT_0036851c int

void func_003684B8(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)*(uint *)(param_1 + 0xa4))) {
    iVar2 = *(int *)(param_1 + 0xa8);
    if (param_2 < *(uint *)(param_1 + 0xa4)) {
      iVar2 = iVar2 + param_2 * 0x148;
    }
    func_0031B390(iVar2,param_3);
    iVar2 = *(int *)(param_1 + 0xa8);
    if (param_2 < *(uint *)(param_1 + 0xa4)) {
      iVar2 = iVar2 + param_2 * 0x148;
    }
    uVar4 = *(uint *)(param_1 + 0xa4);
    iVar5 = *(int *)(param_1 + 0xa8);
    uVar1 = *(undefined1 *)(iVar2 + DAT_0036851c);
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        if (uVar3 != param_2) {
          *(undefined1 *)(iVar5 + uVar3 * 0x148 + 0x143) = uVar1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return;
}

