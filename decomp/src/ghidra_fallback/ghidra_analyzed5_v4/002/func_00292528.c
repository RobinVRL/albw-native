#include "ghidra_types.h"

extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int func_0053FD30(int param_1,int param_2);
extern int *DAT_0029258c;

// USA 00292528 <- EU 00292550 (Ghidra, non-matching)
// GLOBAL DAT_0029258c int *

undefined1 func_00292528(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = func_0053FD30(iVar2,0);
  if (iVar3 != 0) {
    uVar1 = func_004CDDEC(*DAT_0029258c,*(int **)(iVar2 + 0x70),0);
    return uVar1;
  }
  return 0;
}

