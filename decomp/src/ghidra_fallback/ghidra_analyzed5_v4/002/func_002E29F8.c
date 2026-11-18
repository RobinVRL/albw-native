// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002E2A54(uint *param_1,uint param_2,uint param_3);
extern int func_004F031C(undefined4 param_1);
extern int func_00556AA8();
extern int *DAT_002e2a2c;

// USA 002E29F8 <- EU 002E29D4 (Ghidra, non-matching)
// GLOBAL DAT_002e2a2c int *

undefined4 func_002E29F8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  iVar4 = *DAT_002e2a2c;
  if (iVar4 != 0) {
    iVar1 = func_00556AA8(iVar4,2);
    uVar3 = func_004F031C(iVar1);
    iVar4 = func_00556AA8(iVar4,1);
    uVar2 = func_004F031C(iVar4);
  }
  return func_002E2A54(param_1,uVar3,uVar2);
}

