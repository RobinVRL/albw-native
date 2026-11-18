#include "ghidra_types.h"

extern float DAT_0048f304;

// USA 0048F288 <- EU 0048F260 (Ghidra, non-matching)
// GLOBAL DAT_0048f304 float

void func_0048F288(int param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    fparam_0 = DAT_0048f304;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fparam_0;
    }
    else {
      fparam_0 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 4) = fparam_0;
    }
    if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
      fparam_0 = *(float *)(param_1 + 4);
      (**(code **)**(undefined4 **)(param_1 + 0x14))();
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  for (iVar1 = *(int *)(param_1 + 0x24); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x20) - *(int *)(param_1 + 0x2c); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    func_0048F288(iVar1,fparam_0);
  }
  return;
}

