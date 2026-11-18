#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 0026E08C <- EU 0026E0B4 (Ghidra, non-matching)

undefined4 func_0026E08C(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fparam_0;
  
  func_0012C85C(param_1,param_2);
  iVar4 = param_1[0x1d];
  uVar1 = *(uint *)(*(int *)(iVar4 + 0x68) + *(char *)(iVar4 + 0x50) * 8 + 4);
  piVar2 = (int *)(*(int *)(iVar4 + 0x68) + *(char *)(iVar4 + 0x50) * 8);
  if ((uVar1 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *(int *)(*(int *)(iVar4 + 0x60) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar2)();
  iVar3 = *(int *)(iVar4 + 0x4c) + 1;
  *(int *)(iVar4 + 0x4c) = iVar3;
  if (*(int *)(iVar4 + 0x5c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(iVar4 + 0x5c),1,fparam_0);
  }
  return 0;
}

