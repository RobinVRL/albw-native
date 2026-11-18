#include "ghidra_types.h"

extern int DAT_003cf184;

// USA 003CF11C <- EU 003CF0F8 (Ghidra, non-matching)
// GLOBAL DAT_003cf184 int

/* WARNING: Removing unreachable block (ram,0x003cf154) */

int func_003CF11C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 1) {
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return DAT_003cf184;
}

