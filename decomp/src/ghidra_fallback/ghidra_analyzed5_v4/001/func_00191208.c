#include "ghidra_types.h"

extern int func_00151214(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00547514(int param_1);

// USA 00191208 <- EU 00191208 (Ghidra, non-matching)

undefined4 func_00191208(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x588) == '\0') {
    piVar3 = (int *)(*(int *)(param_1 + 0x514) + *(char *)(param_1 + 0x4fc) * 8);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x514) + *(char *)(param_1 + 0x4fc) * 8 + 4);
    if ((uVar1 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x50c) + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar2 = *(int *)(param_1 + 0x4f8) + 1;
    *(int *)(param_1 + 0x4f8) = iVar2;
    if (*(int *)(param_1 + 0x508) != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x508),1,fparam_0);
    }
    return func_00151214(param_1);
  }
  if (*(short *)(param_1 + 0x2c) == 1) {
    func_00547514(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return 0;
}

