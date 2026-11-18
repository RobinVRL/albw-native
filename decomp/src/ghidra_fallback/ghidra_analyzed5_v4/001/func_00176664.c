#include "ghidra_types.h"

extern int func_00325CF4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int *DAT_001766b0;

// USA 00176664 <- EU 00176664 (Ghidra, non-matching)
// GLOBAL DAT_001766b0 int *

undefined4 func_00176664(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((char)param_1[0x13d] == '\0') &&
      (uVar1 = **(int **)(*DAT_001766b0 + 0x24) + 0x20000000U >> 0x1e, uVar1 == 2 && param_2 == 2))
     && (iVar2 = func_00325CF4(param_1,param_2,uVar1,param_4), iVar2 != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

