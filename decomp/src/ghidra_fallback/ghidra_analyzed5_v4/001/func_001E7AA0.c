#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 001E7AA0 <- EU 001E7AA0 (Ghidra, non-matching)

undefined4 func_001E7AA0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *(int *)(*(int *)(param_1 + 0x79c) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar2)();
  iVar3 = *(int *)(param_1 + 0x788) + 1;
  *(int *)(param_1 + 0x788) = iVar3;
  if (*(int *)(param_1 + 0x798) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x798),1,fparam_0);
  }
  return 0;
}

