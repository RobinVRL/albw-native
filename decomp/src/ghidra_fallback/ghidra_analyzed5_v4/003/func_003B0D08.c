#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);

// USA 003B0D08 <- EU 003B0CE4 (Ghidra, non-matching)

undefined4 func_003B0D08(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x93c);
  iVar1 = func_003ABB24(piVar2,1,1);
  if (iVar1 != 0) {
    piVar2 = (int *)piVar2[1];
                    /* WARNING: Could not recover jumptable at 0x003b0d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar2 + 0x138))(piVar2,4,1);
  }
  return 0;
}

