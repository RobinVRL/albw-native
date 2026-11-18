#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00516258 <- EU 00516230 (Ghidra, non-matching)

undefined4 func_00516258(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x44c),param_1 + 0x43c,0x1000,0,0);
  piVar2 = (int *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar2)();
  iVar3 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar3;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  return 0;
}

