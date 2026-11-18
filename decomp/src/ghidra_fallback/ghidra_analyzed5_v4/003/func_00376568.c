#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_005438EC(uint *param_1);

// USA 00376568 <- EU 00376544 (Ghidra, non-matching)

undefined4 func_00376568(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  iVar2 = func_005438EC(*(uint **)(param_1 + 0x14));
  if ((iVar2 == 0) || ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x80) == 0)) {
    sVar1 = 0;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x6a) + 1;
  }
  *(short *)(param_1 + 0x6a) = sVar1;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x54) + *(char *)(param_1 + 0x3c) * 8 + 4);
  piVar4 = (int *)(*(int *)(param_1 + 0x54) + *(char *)(param_1 + 0x3c) * 8);
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x4c) + ((int)uVar3 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar2 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x48),1,fparam_0);
}

