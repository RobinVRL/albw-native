#include "ghidra_types.h"


// USA 003F6F80 <- EU 003F6F60 (Ghidra, non-matching)

undefined4 func_003F6F80(int param_1,int *param_2)

{
  int in_r3;
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 4) != 0;
  if (bVar1) {
    in_r3 = *(int *)(param_1 + 8);
  }
  if ((bVar1 && in_r3 != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x003f6f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_2 + 0xc))(param_2);
  }
  return 0;
}

