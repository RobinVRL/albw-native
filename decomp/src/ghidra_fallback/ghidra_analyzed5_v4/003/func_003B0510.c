#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 003B0510 <- EU 003B04EC (Ghidra, non-matching)

undefined4 func_003B0510(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x38) + *(char *)(param_1 + 0x20) * 8 + 4);
    piVar3 = (int *)(*(int *)(param_1 + 0x38) + *(char *)(param_1 + 0x20) * 8);
    if ((uVar1 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x30) + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar2 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar2;
    if (*(int *)(param_1 + 0x2c) != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      return func_00352210(*(int *)(param_1 + 0x2c),1,fparam_0);
    }
  }
  return 0;
}

