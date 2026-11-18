#include "ghidra_types.h"

extern float DAT_0028d7c8;

// USA 0028D700 <- EU 0028D728 (Ghidra, non-matching)
// GLOBAL DAT_0028d7c8 float

void func_0028D700(int param_1,float fparam_0,float fparam_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = DAT_0028d7c8;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar4 = *(int *)(iVar2 + 0x14);
      if (uVar3 < *(uint *)(iVar2 + 0xc)) {
        iVar4 = iVar4 + uVar3 * 0x28;
      }
      if ((fVar1 <= fparam_1) || (fparam_0 != fVar1)) {
        *(float *)(iVar4 + 0xc) = fparam_0;
        *(float *)(iVar4 + 8) = fparam_0;
      }
      else {
        *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0x14);
        *(float *)(iVar4 + 8) = *(float *)(iVar4 + 0x14);
      }
      uVar3 = uVar3 + 1;
      *(float *)(iVar4 + 0x10) = fparam_1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined1 *)(iVar4 + 0x26) = 1;
      *(undefined1 *)(iVar4 + 0x25) = 1;
    } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
  }
  return;
}

