#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_001da430;
extern int *DAT_001da434;

// USA 001DA3E0 <- EU 001DA3E0 (Ghidra, non-matching)
// GLOBAL DAT_001da430 int *
// GLOBAL DAT_001da434 int *

undefined4 func_001DA3E0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0x2d7) == '\0') &&
      (iVar1 = func_0052FBA0(*DAT_001da430 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar1 != 0)) &&
     (iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_001da434)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

