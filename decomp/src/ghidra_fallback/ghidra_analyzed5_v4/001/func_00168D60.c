#include "ghidra_types.h"

extern float DAT_00168dfc;

// USA 00168D60 <- EU 00168D60 (Ghidra, non-matching)
// GLOBAL DAT_00168dfc float

void * func_00168D60(int param_1,float fparam_0,float fparam_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  fVar1 = DAT_00168dfc;
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    return (void *)param_1;
  }
  do {
    iVar3 = *(int *)(param_1 + 0x14);
    if (uVar2 < *(uint *)(param_1 + 0xc)) {
      iVar3 = iVar3 + uVar2 * 0x28;
    }
    if ((fVar1 <= fparam_1) || (fparam_0 != fVar1)) {
      *(float *)(iVar3 + 0xc) = fparam_0;
      *(float *)(iVar3 + 8) = fparam_0;
    }
    else {
      *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x14);
      *(float *)(iVar3 + 8) = *(float *)(iVar3 + 0x14);
    }
    uVar2 = uVar2 + 1;
    *(float *)(iVar3 + 0x10) = fparam_1;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined1 *)(iVar3 + 0x26) = 1;
    *(undefined1 *)(iVar3 + 0x25) = 1;
  } while ((int)uVar2 < *(int *)(param_1 + 0xc));
  return (void *)param_1;
}

