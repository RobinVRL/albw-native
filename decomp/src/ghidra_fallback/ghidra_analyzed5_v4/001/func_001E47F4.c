// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0036176C(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_001e48cc;

// USA 001E47F4 <- EU 001E47F4 (Ghidra, non-matching)
// GLOBAL DAT_001e48cc int *

undefined4 func_001E47F4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x478);
  if ((iVar4 != 0) && (*(char *)(param_1 + 0x4f1) != '\0')) {
    iVar3 = *DAT_001e48cc;
    if (((iVar3 != 0) &&
        (((bVar1 = func_00556EAC(iVar3,0x7b), bVar1 || (bVar1 = func_00556EAC(iVar3,0x7c), bVar1))
         || (bVar1 = func_00556EAC(iVar3,0x7d), bVar1)))) || (*(char *)(param_1 + 0x4f0) == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    func_004CF478(iVar4,iVar2);
    if ((iVar3 != 0) && (bVar1 = func_00521098(param_1,(int *)(param_1 + 0x4dc)), bVar1)) {
      func_0036176C(iVar3,iVar4);
    }
  }
  return func_0014E138(param_1,param_2);
}

