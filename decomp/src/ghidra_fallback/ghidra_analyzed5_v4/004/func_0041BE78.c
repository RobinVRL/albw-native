#include "ghidra_types.h"


// USA 0041BE78 <- EU 0041BE58 (Ghidra, non-matching)

undefined4 func_0041BE78(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1[0x20] = param_2[2];
  for (uVar1 = param_2[1]; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((uVar1 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  iVar2 = (**(code **)(*(int *)*param_2 + 0x10))((int *)*param_2);
  if (iVar3 <= iVar2) {
    iVar3 = 0;
    for (uVar1 = param_2[1]; uVar1 != 0; uVar1 = uVar1 >> 1) {
      if (((uVar1 & 1) != 0) &&
         (iVar2 = (**(code **)(*(int *)*param_2 + 8))((int *)*param_2,param_1), iVar3 < 0x10)) {
        param_1[iVar3 + 0x24] = iVar2;
        *(char *)(iVar2 + 4) = (char)iVar3;
        *(undefined1 *)(iVar2 + 0x79) = *(undefined1 *)((int)param_1 + 0x2e);
      }
      iVar3 = iVar3 + 1;
    }
    param_1[0x21] = *param_2;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0041beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xc))(param_1);
}

