#include "ghidra_types.h"

extern int func_00194BFC(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_00311eb0;

// USA 00311E84 <- EU 00311E60 (Ghidra, non-matching)
// GLOBAL DAT_00311eb0 int *

bool func_00311E84(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00311eb0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar2 = func_00194BFC(iVar4);
    if (iVar2 != 1) {
      uVar3 = func_0055696C(*piVar1,iVar2);
      iVar5 = iVar5 + (uint)(1 < uVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return iVar5 == 0;
}

