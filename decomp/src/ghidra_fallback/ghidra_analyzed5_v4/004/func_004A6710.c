#include "ghidra_types.h"

extern int func_004A7020(int param_1,int param_2);

// USA 004A6710 <- EU 004A66E8 (Ghidra, non-matching)

undefined4 func_004A6710(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x004a6728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar2 + 0x14))(piVar2,param_2);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  for (iVar1 = *(int *)(param_1 + 0x40); iVar1 = iVar1 - iVar3,
      iVar1 != (param_1 + 0x3c) - *(int *)(param_1 + 0x48); iVar1 = *(int *)(iVar1 + iVar3 + 4)) {
    func_004A7020(iVar1,param_2);
  }
  return 0;
}

