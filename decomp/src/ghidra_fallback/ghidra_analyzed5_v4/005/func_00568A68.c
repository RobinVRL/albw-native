#include "ghidra_types.h"


// USA 00568A68 <- EU 00568A40 (Ghidra, non-matching)

undefined4 func_00568A68(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00568a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,0);
    return uVar2;
  }
  return 0;
}

