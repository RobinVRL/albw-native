#include "ghidra_types.h"

extern float DAT_0016739c;

// USA 001672F8 <- EU 001672FC (Ghidra, non-matching)
// GLOBAL DAT_0016739c float

void func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_2 < *(uint *)(param_1 + 8)) {
    iVar1 = iVar1 + param_2 * 0x38;
  }
  if (((*(char *)(iVar1 + 0x35) == '\0') || (*(float *)(iVar1 + 0x14) != fparam_0)) ||
     (*(float *)(iVar1 + 0x1c) != fparam_1)) {
    if ((DAT_0016739c <= fparam_1) || (fparam_0 != DAT_0016739c)) {
      *(float *)(iVar1 + 0x18) = fparam_0;
      *(float *)(iVar1 + 0x14) = fparam_0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x20);
    }
    *(float *)(iVar1 + 0x1c) = fparam_1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(float *)(*(int *)(iVar1 + 0x10) + 0x10) = fparam_0;
    *(undefined1 *)(iVar1 + 0x34) = 1;
    *(undefined1 *)(iVar1 + 0x35) = 1;
  }
  return;
}

