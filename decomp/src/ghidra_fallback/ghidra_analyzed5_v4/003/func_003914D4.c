#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 003914D4 <- EU 003914B0 [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_003914D4(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x41c) == '\0') {
    *(undefined1 *)(param_1 + 0x41c) = 1;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *(int *)(*(int *)(param_1 + 0x434) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar2)();
  iVar3 = *(int *)(param_1 + 0x420) + 1;
  *(int *)(param_1 + 0x420) = iVar3;
  if (*(int *)(param_1 + 0x430) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x430),1,fparam_0);
}

