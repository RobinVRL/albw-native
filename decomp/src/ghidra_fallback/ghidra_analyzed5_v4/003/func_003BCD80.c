#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 003BCD80 <- EU 003BCD5C (Ghidra, non-matching)

undefined4 func_003BCD80(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x3a) != '\0') {
    sVar1 = *(short *)(param_1 + 0x38) + -1;
    *(short *)(param_1 + 0x38) = sVar1;
    if (sVar1 < 1) {
      *(undefined1 *)(param_1 + 0x3a) = 0;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8 + 4);
    piVar4 = (int *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8);
    if ((uVar2 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x24) + ((int)uVar2 >> 1)));
    }
    (*(code *)*piVar4)();
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (*(int *)(param_1 + 0x20) != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      return func_00352210(*(int *)(param_1 + 0x20),1,fparam_0);
    }
  }
  return 0;
}

