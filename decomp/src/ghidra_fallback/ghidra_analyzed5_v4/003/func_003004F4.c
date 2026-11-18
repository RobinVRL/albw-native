#include "ghidra_types.h"

extern int func_00300E2C(void);

// USA 003004F4 <- EU 003004D0 (Ghidra, function missing from the decomp table)

undefined4 func_003004F4(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)func_00300E2C();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
    uVar2 = (*(code *)(iVar3 + *(int *)(iVar3 + 0x107) + 0x107))(param_1,param_2,param_3);
    return uVar2;
  }
  if ((param_2 < 0x100) && (*(char *)(iVar3 + param_2) != '\0')) {
    *param_1 = (char)param_2;
    return 1;
  }
  return 0xffffffff;
}

