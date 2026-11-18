#include "ghidra_types.h"

extern int func_00148724(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 003A3BFC <- EU 003A3BD8 (Ghidra, non-matching)

undefined4 func_003A3BFC(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    if (*(uint *)(iVar1 + 1000) == *(uint *)(iVar1 + 0xa20)) {
      iVar1 = func_00148724(*(undefined4 *)(iVar1 + 0x2cc),(undefined4 *)(iVar1 + 0x3d0),
                            *(uint *)(iVar1 + 0xa20),*(uint *)(param_1 + 0x38),
                            (uint)('\x01' < *(char *)(param_1 + 0xc)));
      *(int *)(param_1 + 0x38) = iVar1;
      *(undefined1 *)(param_1 + 0x3d) = 1;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x2c) + *(char *)(param_1 + 0x14) * 8);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x24) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x20),1,fparam_0);
}

