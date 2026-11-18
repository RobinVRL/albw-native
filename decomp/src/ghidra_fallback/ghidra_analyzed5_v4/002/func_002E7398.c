#include "ghidra_types.h"

extern int func_004F7E8C();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002e73b4;

// USA 002E7398 <- EU 002E7374 (Ghidra, non-matching)
// GLOBAL DAT_002e73b4 int *

undefined4 func_002E7398(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_004F7E8C(param_1,param_2);
  iVar3 = *(int *)(param_2 + 0x2c);
  iVar2 = func_0052FBA0(*DAT_002e73b4 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar3 != 0 && iVar2 != 0) {
    func_00588BE4(iVar2);
  }
  return uVar1;
}

