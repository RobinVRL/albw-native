#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int DAT_0030e1a0;
extern int *DAT_0030e1a4;

// USA 0030E120 <- EU 0030E0FC (Ghidra, non-matching)
// GLOBAL DAT_0030e1a0 int
// GLOBAL DAT_0030e1a4 int *

undefined4 func_0030E120(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_0030e1a4;
  iVar3 = DAT_0030e1a0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    uVar2 = func_0055696C(*piVar1,*(int *)(iVar3 + iVar4 * 4));
    iVar5 = iVar5 + (uint)(1 < uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar3 = func_0055696C(*piVar1,0);
  if (param_4 == 0) {
    if (iVar5 == 2) {
      if (iVar3 == 4) {
        return 0;
      }
    }
    else if (iVar5 == 3) {
      if (iVar3 == 4) {
        return 1;
      }
    }
    else if ((iVar5 == 4) && (iVar3 == 4)) {
      return 2;
    }
    return 3;
  }
  return 0;
}

