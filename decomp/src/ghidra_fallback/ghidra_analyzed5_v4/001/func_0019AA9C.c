#include "ghidra_types.h"

extern int func_0049816C(int param_1);

// USA 0019AA9C <- EU 0019AA9C (Ghidra, non-matching)

undefined4 func_0019AA9C(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x650 + param_2 * 4);
  iVar2 = *piVar1;
  if (iVar2 <= param_3) {
    iVar2 = param_3;
  }
  *piVar1 = iVar2;
  func_0049816C(param_1 + 0x10 + param_2 * 400);
  if ((*(char *)(param_1 + 0x670) != '\0') && (param_2 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x0019aaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*(int *)(param_1 + 0x330) + 0x14))(param_1 + 0x330);
  }
  return 0;
}

