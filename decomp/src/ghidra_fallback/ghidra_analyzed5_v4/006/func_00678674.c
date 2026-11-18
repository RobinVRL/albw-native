#include "ghidra_types.h"

extern int func_006784F8(uint *param_1,float fparam_0,float fparam_1,float fparam_2);

// USA 00678674 <- EU 0067864C (Ghidra, non-matching)

int func_00678674(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    return 1;
  }
  do {
    iVar2 = *param_1;
    iVar2 = func_006784F8((uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40),
                          *(float *)(iVar2 + uVar3 * 0xc),*(float *)(iVar2 + (uVar3 * 3 + 1) * 4),
                          *(float *)(iVar2 + (uVar3 * 3 + 2) * 4));
    if (iVar2 != 0) {
      iVar2 = 1;
      goto LAB_006786bc;
    }
    do {
      iVar2 = 0;
LAB_006786bc:
      puVar1 = (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
      uVar3 = uVar3 + 1;
      *puVar1 = *puVar1 | 2;
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        return iVar2;
      }
    } while (iVar2 == 0);
  } while( true );
}

