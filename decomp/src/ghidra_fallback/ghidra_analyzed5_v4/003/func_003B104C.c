#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);

// USA 003B104C <- EU 003B1028 (Ghidra, non-matching)

undefined4 func_003B104C(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x104))(param_1,0);
  if (((iVar1 != 0) || (iVar1 = (**(code **)(*param_1 + 0x104))(param_1,1), iVar1 != 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x104))(param_1,2), iVar1 != 0)) {
    piVar2 = *(int **)(param_1[0x12] + 0x93c);
    iVar1 = func_003ABB24(piVar2,1,1);
    if (iVar1 != 0) {
      piVar2 = (int *)piVar2[1];
                    /* WARNING: Could not recover jumptable at 0x003b10c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*piVar2 + 0x138))(piVar2,9,1);
    }
  }
  return 0;
}

