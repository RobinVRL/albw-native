#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);

// USA 003B14E0 <- EU 003B14BC (Ghidra, non-matching)

undefined4 func_003B14E0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1[0x12] + 0xb42) = 0;
  (**(code **)(*param_1 + 0x108))(param_1);
  piVar2 = *(int **)(param_1[0x12] + 0x93c);
  iVar1 = func_003ABB24(piVar2,1,1);
  if (iVar1 != 0) {
    piVar2 = (int *)piVar2[1];
                    /* WARNING: Could not recover jumptable at 0x003b151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar2 + 0x138))(piVar2,9,1);
  }
  return 0;
}

