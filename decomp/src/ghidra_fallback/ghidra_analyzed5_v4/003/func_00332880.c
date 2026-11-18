#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00332948;

// USA 00332880 <- EU 0033285C (Ghidra, non-matching)
// GLOBAL DAT_00332948 int *

void func_00332880(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = DAT_00332948;
  iVar6 = param_1 + 0x4fc;
  iVar5 = 0;
  do {
    uVar4 = *(uint *)(iVar6 + iVar5 * 4);
    if (uVar4 != 0) {
      iVar3 = func_0052FBA0(*piVar2 + 0x3dbbc,uVar4);
      sVar1 = *(short *)(iVar3 + 0x2e);
      if (sVar1 == 1 || sVar1 == 4) {
        *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(iVar6 + iVar5 * 4);
      }
      else if (sVar1 == 2 || sVar1 == 5) {
        *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar6 + iVar5 * 4);
      }
      else if (sVar1 == 3 || sVar1 == 6) {
        *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(iVar6 + iVar5 * 4);
        *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar6 + iVar5 * 4);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  sVar1 = *(short *)(param_1 + 0x2e);
  if ((sVar1 != 1) && (sVar1 != 4)) {
    if (sVar1 == 2 || sVar1 == 5) {
      *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x2cc);
    }
    else if (sVar1 == 3 || sVar1 == 6) {
      *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x2cc);
      *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x2cc);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x2cc);
  return;
}

