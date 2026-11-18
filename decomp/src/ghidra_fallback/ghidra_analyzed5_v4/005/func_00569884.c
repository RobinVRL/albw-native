#include "ghidra_types.h"

extern int func_0056CDA0(int param_1,uint param_2);

// USA 00569884 <- EU 0056985C (Ghidra, non-matching)

undefined4 func_00569884(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_r1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = func_0056CDA0(*(int *)(param_1 + 4),param_2);
  piVar3 = *(int **)(param_1 + 8);
  uVar2 = extraout_r1;
  if (piVar3 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(piVar3 + 1);
  }
  if (piVar3 == (int *)0x0 || uVar2 == 0) {
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0056989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,param_2,uVar1);
  return uVar1;
}

